/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/RevocationInfoChoice.h"

asn_TYPE_member_t asn_MBR_RevocationInfoChoice_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RevocationInfoChoice, choice.crl),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CertificateList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RevocationInfoChoice, choice.other),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OtherRevocationInfoFormat,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"other"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RevocationInfoChoice_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* crl */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* other */
};
asn_CHOICE_specifics_t asn_SPC_RevocationInfoChoice_specs_1 = {
	sizeof(struct RevocationInfoChoice),
	offsetof(struct RevocationInfoChoice, _asn_ctx),
	offsetof(struct RevocationInfoChoice, present),
	sizeof(((struct RevocationInfoChoice *)0)->present),
	asn_MAP_RevocationInfoChoice_tag2el_1,
	2,	/* Count of tags in the map */
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RevocationInfoChoice = {
	"RevocationInfoChoice",
	"RevocationInfoChoice",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ NULL, 0, CHOICE_constraint },
	asn_MBR_RevocationInfoChoice_1,
	2,	/* Elements count */
	&asn_SPC_RevocationInfoChoice_specs_1	/* Additional specs */
};
