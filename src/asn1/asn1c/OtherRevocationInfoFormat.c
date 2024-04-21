/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/OtherRevocationInfoFormat.h"

asn_TYPE_member_t asn_MBR_OtherRevocationInfoFormat_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherRevocationInfoFormat, otherRevInfoFormat),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherRevInfoFormat"
		},
	{ ATF_ANY_TYPE | ATF_NOFLAGS, 0, offsetof(struct OtherRevocationInfoFormat, otherRevInfo),
		-1 /* Ambiguous tag (ANY?) */,
		0,
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherRevInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_OtherRevocationInfoFormat_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OtherRevocationInfoFormat_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 } /* otherRevInfoFormat */
};
asn_SEQUENCE_specifics_t asn_SPC_OtherRevocationInfoFormat_specs_1 = {
	sizeof(struct OtherRevocationInfoFormat),
	offsetof(struct OtherRevocationInfoFormat, _asn_ctx),
	asn_MAP_OtherRevocationInfoFormat_tag2el_1,
	1,	/* Count of tags in the map */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OtherRevocationInfoFormat = {
	"OtherRevocationInfoFormat",
	"OtherRevocationInfoFormat",
	&asn_OP_SEQUENCE,
	asn_DEF_OtherRevocationInfoFormat_tags_1,
	sizeof(asn_DEF_OtherRevocationInfoFormat_tags_1)
		/sizeof(asn_DEF_OtherRevocationInfoFormat_tags_1[0]), /* 1 */
	asn_DEF_OtherRevocationInfoFormat_tags_1,	/* Same as above */
	sizeof(asn_DEF_OtherRevocationInfoFormat_tags_1)
		/sizeof(asn_DEF_OtherRevocationInfoFormat_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OtherRevocationInfoFormat_1,
	2,	/* Elements count */
	&asn_SPC_OtherRevocationInfoFormat_specs_1	/* Additional specs */
};
