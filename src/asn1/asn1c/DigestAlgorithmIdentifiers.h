/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#ifndef	_DigestAlgorithmIdentifiers_H_
#define	_DigestAlgorithmIdentifiers_H_

#include "asn1/asn1c/DigestAlgorithmIdentifier.h"
#include "asn1/asn1c/asn_SET_OF.h"
#include "asn1/asn1c/constr_SET_OF.h"
#include "asn1/asn1c/constr_TYPE.h"

/* Forward declarations */
struct DigestAlgorithmIdentifier;

/* DigestAlgorithmIdentifiers */
typedef struct DigestAlgorithmIdentifiers {
	A_SET_OF(struct DigestAlgorithmIdentifier) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DigestAlgorithmIdentifiers_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DigestAlgorithmIdentifiers;
extern asn_SET_OF_specifics_t asn_SPC_DigestAlgorithmIdentifiers_specs_1;
extern asn_TYPE_member_t asn_MBR_DigestAlgorithmIdentifiers_1[1];

#endif	/* _DigestAlgorithmIdentifiers_H_ */
