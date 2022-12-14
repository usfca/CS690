/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6 */

#ifndef PB_DEVICE_METADATA_PB_H_INCLUDED
#define PB_DEVICE_METADATA_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* Device metadata response */
typedef struct _DeviceMetadata { 
    /* Device firmware version string */
    char firmware_version[18];
    /* Device state version */
    uint32_t device_state_version;
} DeviceMetadata;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define DeviceMetadata_init_default              {"", 0}
#define DeviceMetadata_init_zero                 {"", 0}

/* Field tags (for use in manual encoding/decoding) */
#define DeviceMetadata_firmware_version_tag      1
#define DeviceMetadata_device_state_version_tag  2

/* Struct field encoding specification for nanopb */
#define DeviceMetadata_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   firmware_version,   1) \
X(a, STATIC,   SINGULAR, UINT32,   device_state_version,   2)
#define DeviceMetadata_CALLBACK NULL
#define DeviceMetadata_DEFAULT NULL

extern const pb_msgdesc_t DeviceMetadata_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define DeviceMetadata_fields &DeviceMetadata_msg

/* Maximum encoded size of messages (where known) */
#define DeviceMetadata_size                      25

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
