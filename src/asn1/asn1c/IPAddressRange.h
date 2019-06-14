/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IPAddrAndASCertExtn"
 * 	found in "rfc3779.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#ifndef	_IPAddressRange_H_
#define	_IPAddressRange_H_


#include "asn1/asn1c/asn_application.h"

/* Including external dependencies */
#include "IPAddress.h"
#include "asn1/asn1c/constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IPAddressRange */
typedef struct IPAddressRange {
	IPAddress_t	 min;
	IPAddress_t	 max;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IPAddressRange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IPAddressRange;
extern asn_SEQUENCE_specifics_t asn_SPC_IPAddressRange_specs_1;
extern asn_TYPE_member_t asn_MBR_IPAddressRange_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IPAddressRange_H_ */
#include "asn1/asn1c/asn_internal.h"
