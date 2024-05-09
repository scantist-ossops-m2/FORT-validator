/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/ContentInfo.h"

#include "asn1/asn1c/SignedData.h"

json_t *
content2json(const asn_TYPE_descriptor_t *td, ANY_t const *ber)
{
	void *decoded;
	asn_dec_rval_t rval;
	json_t *content;

	decoded = NULL;
	rval = ber_decode(NULL, td, &decoded, ber->buf, ber->size);
	if (rval.code != RC_OK)
		return NULL;

	content = td->op->json_encoder(td, decoded);

	ASN_STRUCT_FREE(*td, decoded);
	return content;
}

json_t *
ContentInfo_encode_json(const asn_TYPE_descriptor_t *td, const void *sptr)
{
	struct ContentInfo const *ci = sptr;
	json_t *parent;
	json_t *content_type;
	json_t *content;

	if (!ci)
		return json_null();

	parent = json_object();
	if (parent == NULL)
		return NULL;

	td = &asn_DEF_ContentType;
	content_type = td->op->json_encoder(td, &ci->contentType);
	if (json_object_set_new(parent, "contentType", content_type))
		goto fail;

	if (OBJECT_IDENTIFIER_is_SignedData(&ci->contentType)) {
		td = &asn_DEF_SignedData;
		content = content2json(td, &ci->content);

	} else {
//		printf("===========================\n");
//		for (ret = 0; ret < ci->contentType.size; ret++)
//			printf("%u ", ci->contentType.buf[ret]);
//		printf("\n==========================\n");

		td = &asn_DEF_ANY;
		content = td->op->json_encoder(td, &ci->content);
	}

	if (content == NULL)
		goto fail;
	if (json_object_set_new(parent, "content", content))
		goto fail;

	return parent;

fail:	json_decref(parent);
	return NULL;
}

asn_TYPE_operation_t asn_OP_ContentInfo = {
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_compare,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	ContentInfo_encode_json,
	SEQUENCE_encode_xer,
	0	/* Use generic outmost tag fetcher */
};

static asn_TYPE_member_t asn_MBR_ContentInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ContentInfo, contentType),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_ContentType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"contentType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ContentInfo, content),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"content"
		},
};
static const ber_tlv_tag_t asn_DEF_ContentInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ContentInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* contentType */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* content */
};
static asn_SEQUENCE_specifics_t asn_SPC_ContentInfo_specs_1 = {
	sizeof(struct ContentInfo),
	offsetof(struct ContentInfo, _asn_ctx),
	asn_MAP_ContentInfo_tag2el_1,
	2,	/* Count of tags in the map */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ContentInfo = {
	"ContentInfo",
	"ContentInfo",
	&asn_OP_ContentInfo,
	asn_DEF_ContentInfo_tags_1,
	sizeof(asn_DEF_ContentInfo_tags_1)
		/sizeof(asn_DEF_ContentInfo_tags_1[0]), /* 1 */
	asn_DEF_ContentInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ContentInfo_tags_1)
		/sizeof(asn_DEF_ContentInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ContentInfo_1,
	2,	/* Elements count */
	&asn_SPC_ContentInfo_specs_1	/* Additional specs */
};
