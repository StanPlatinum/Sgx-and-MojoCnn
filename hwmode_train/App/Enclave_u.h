#ifndef ENCLAVE_U_H__
#define ENCLAVE_U_H__

#include <stdint.h>
#include <wchar.h>
#include <stddef.h>
#include <string.h>
#include "sgx_edger8r.h" /* for sgx_satus_t etc. */

#include "../Enclave/msse2/emmintrin.h"

#include <stdlib.h> /* for size_t */

#define SGX_CAST(type, item) ((type)(item))

#ifdef __cplusplus
extern "C" {
#endif

#ifndef OCALL_PRINT_DEFINED__
#define OCALL_PRINT_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_print, (const char* str));
#endif
#ifndef OPEN_FILE_DEFINED__
#define OPEN_FILE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, open_file, (const char* str));
#endif
#ifndef CLOSE_FILE_DEFINED__
#define CLOSE_FILE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, close_file, (void));
#endif
#ifndef READ_FILE_DEFINED__
#define READ_FILE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, read_file, (char* dest, int sz));
#endif
#ifndef MOJO_SLEEP_DEFINED__
#define MOJO_SLEEP_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, mojo_sleep, (unsigned int milliseconds));
#endif
#ifndef OPEN_NETWORKFILE_DEFINED__
#define OPEN_NETWORKFILE_DEFINED__
int SGX_UBRIDGE(SGX_NOCONVENTION, open_networkfile, (const char* str));
#endif
#ifndef OPEN_OUTPUTNETWORKFILE_DEFINED__
#define OPEN_OUTPUTNETWORKFILE_DEFINED__
int SGX_UBRIDGE(SGX_NOCONVENTION, open_outputnetworkfile, (const char* str));
#endif
#ifndef OCALL_FPRINT_NETWORKFILE_DEFINED__
#define OCALL_FPRINT_NETWORKFILE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_fprint_networkfile, (const char* str));
#endif
#ifndef OCALL_FREAD_NETWORKFILE_DEFINED__
#define OCALL_FREAD_NETWORKFILE_DEFINED__
char SGX_UBRIDGE(SGX_NOCONVENTION, ocall_fread_networkfile, (void));
#endif
#ifndef OCALL_GETINT_DEFINED__
#define OCALL_GETINT_DEFINED__
int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_getint, (void));
#endif
#ifndef OCALL_GETFLOAT_DEFINED__
#define OCALL_GETFLOAT_DEFINED__
float SGX_UBRIDGE(SGX_NOCONVENTION, ocall_getfloat, (void));
#endif
#ifndef OCALL_READ_DEFINED__
#define OCALL_READ_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_read, (char* src, int sz));
#endif
#ifndef OCALL_WRITE_DEFINED__
#define OCALL_WRITE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_write, (char* src, int sz));
#endif
#ifndef END_THIS_LINE_DEFINED__
#define END_THIS_LINE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, end_this_line, (void));
#endif
#ifndef CLOSE_NETWORKFILE_DEFINED__
#define CLOSE_NETWORKFILE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, close_networkfile, (void));
#endif
#ifndef CLOSE_OUTPUTNETWORKFILE_DEFINED__
#define CLOSE_OUTPUTNETWORKFILE_DEFINED__
void SGX_UBRIDGE(SGX_NOCONVENTION, close_outputnetworkfile, (void));
#endif

sgx_status_t generate_random_number(sgx_enclave_id_t eid, int* retval);
sgx_status_t new_network(sgx_enclave_id_t eid, const char* str);
sgx_status_t cnn_outsize(sgx_enclave_id_t eid, int* retval);
sgx_status_t classification(sgx_enclave_id_t eid, int* retval, float* testimage, int cnt);
sgx_status_t get_epoch(sgx_enclave_id_t eid, int* retval);
sgx_status_t epoch(sgx_enclave_id_t eid, char* str);
sgx_status_t train(sgx_enclave_id_t eid, float* testimage, int cnt, int train_labels);
sgx_status_t end_epoch(sgx_enclave_id_t eid);
sgx_status_t get_estimated_accuracy(sgx_enclave_id_t eid, float* retval);
sgx_status_t reset_smart_training(sgx_enclave_id_t eid);
sgx_status_t write_model_file(sgx_enclave_id_t eid, char* model_file);
sgx_status_t elvis_left_the_building(sgx_enclave_id_t eid, int* retval);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
