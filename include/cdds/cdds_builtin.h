/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: builtin.h
  Source: builtin.idl
  Cyclone DDS: V0.7.0

*****************************************************************/

#include "dds/ddsc/dds_public_impl.h"

#ifndef _DDSL_BUILTIN_H_
#define _DDSL_BUILTIN_H_


#ifdef __cplusplus
extern "C" {
#endif


typedef struct NameValue
{
  int32_t sn;
  char * name;
  char * value;
} NameValue;

extern const dds_topic_descriptor_t NameValue_desc;

#define NameValue__alloc() \
((NameValue*) dds_alloc (sizeof (NameValue)));

#define NameValue_free(d,o) \
dds_sample_free ((d), &NameValue_desc, (o))


typedef struct KeyValue
{
  int32_t sn;
  char * key;
  char * value;
} KeyValue;

extern const dds_topic_descriptor_t KeyValue_desc;

#define KeyValue__alloc() \
((KeyValue*) dds_alloc (sizeof (KeyValue)));

#define KeyValue_free(d,o) \
dds_sample_free ((d), &KeyValue_desc, (o))

#ifdef __cplusplus
}
#endif
#endif /* _DDSL_BUILTIN_H_ */
