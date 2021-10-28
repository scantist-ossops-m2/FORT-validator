#include <check.h>
#include <errno.h>
#include <stdint.h>

#include "common.c"
#include "log.c"
#include "impersonator.c"
#include "types/uri.c"

static int
test_validate(char const *src)
{
	uint8_t buffer[32];
	IA5String_t dst;
	unsigned int i;

	dst.size = strlen(src);

	memcpy(buffer, src, dst.size);
	for (i = dst.size; i < 31; i++)
		buffer[i] = '_';
	buffer[31] = 0;

	dst.buf = buffer;

	return validate_mft_ia5(&dst);
}

START_TEST(check_validate_current_directory)
{
	ck_assert_int_eq(0, test_validate("file"));

	ck_assert_int_eq(-EINVAL, test_validate(""));

	ck_assert_int_eq(-EINVAL, test_validate("."));
	ck_assert_int_eq(0, test_validate(".file"));
	ck_assert_int_eq(0, test_validate("fi.le"));
	ck_assert_int_eq(0, test_validate("file."));

	ck_assert_int_eq(-EINVAL, test_validate(".."));
	ck_assert_int_eq(0, test_validate("..file"));
	ck_assert_int_eq(0, test_validate("fi..le"));
	ck_assert_int_eq(0, test_validate("file.."));

	ck_assert_int_eq(-EINVAL, test_validate("/"));
	ck_assert_int_eq(-EINVAL, test_validate("/file"));
	ck_assert_int_eq(-EINVAL, test_validate("fi/le"));
	ck_assert_int_eq(-EINVAL, test_validate("file/"));
}
END_TEST

Suite *address_load_suite(void)
{
	Suite *suite;
	TCase *core;

	core = tcase_create("Core");
	tcase_add_test(core, check_validate_current_directory);

	suite = suite_create("Encoding checking");
	suite_add_tcase(suite, core);
	return suite;
}

int main(void)
{
	Suite *suite;
	SRunner *runner;
	int tests_failed;

	suite = address_load_suite();

	runner = srunner_create(suite);
	srunner_run_all(runner, CK_NORMAL);
	tests_failed = srunner_ntests_failed(runner);
	srunner_free(runner);

	return (tests_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
