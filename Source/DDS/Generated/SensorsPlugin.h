
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensors.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SensorsPlugin_1082808791_h
#define SensorsPlugin_1082808791_h

#include "Sensors.h"



struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


namespace example{

namespace sensors{

/* The type used to store keys for instances of type struct
 * TDistance.
 *
 * By default, this type is struct TDistance
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TDistance)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TDistance, the
 * following restriction applies: the key of struct
 * TDistance must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TDistance.
*/
typedef  class TDistance TDistanceKeyHolder;


#define TDistancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TDistancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TDistancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TDistancePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TDistancePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TDistancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TDistancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TDistance*
TDistancePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TDistance*
TDistancePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TDistance*
TDistancePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TDistancePluginSupport_copy_data(
    TDistance *out,
    const TDistance *in);

NDDSUSERDllExport extern void 
TDistancePluginSupport_destroy_data_w_params(
    TDistance *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TDistancePluginSupport_destroy_data_ex(
    TDistance *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TDistancePluginSupport_destroy_data(
    TDistance *sample);

NDDSUSERDllExport extern void 
TDistancePluginSupport_print_data(
    const TDistance *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TDistance*
TDistancePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TDistance*
TDistancePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TDistancePluginSupport_destroy_key_ex(
    TDistanceKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TDistancePluginSupport_destroy_key(
    TDistanceKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TDistancePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TDistancePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TDistancePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TDistancePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TDistancePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDistance *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDistance *out,
    const TDistance *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TDistance *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDistance *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TDistancePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TDistance **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TDistancePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TDistancePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TDistancePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TDistancePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TDistance * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TDistancePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TDistancePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TDistance *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TDistance * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TDistancePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TDistance ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TDistancePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TDistance *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TDistancePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TDistanceKeyHolder *key, 
    const TDistance *instance);

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TDistance *instance, 
    const TDistanceKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TDistance *instance);

NDDSUSERDllExport extern RTIBool 
TDistancePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TDistancePlugin_new(void);

NDDSUSERDllExport extern void
TDistancePlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TTemperature.
 *
 * By default, this type is struct TTemperature
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TTemperature)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TTemperature, the
 * following restriction applies: the key of struct
 * TTemperature must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TTemperature.
*/
typedef  class TTemperature TTemperatureKeyHolder;


#define TTemperaturePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TTemperaturePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TTemperaturePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TTemperaturePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TTemperaturePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TTemperaturePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TTemperaturePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TTemperature*
TTemperaturePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TTemperature*
TTemperaturePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TTemperature*
TTemperaturePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TTemperaturePluginSupport_copy_data(
    TTemperature *out,
    const TTemperature *in);

NDDSUSERDllExport extern void 
TTemperaturePluginSupport_destroy_data_w_params(
    TTemperature *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TTemperaturePluginSupport_destroy_data_ex(
    TTemperature *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TTemperaturePluginSupport_destroy_data(
    TTemperature *sample);

NDDSUSERDllExport extern void 
TTemperaturePluginSupport_print_data(
    const TTemperature *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TTemperature*
TTemperaturePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TTemperature*
TTemperaturePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TTemperaturePluginSupport_destroy_key_ex(
    TTemperatureKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TTemperaturePluginSupport_destroy_key(
    TTemperatureKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TTemperaturePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TTemperaturePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TTemperaturePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TTemperaturePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TTemperaturePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature *out,
    const TTemperature *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TTemperature *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TTemperaturePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TTemperaturePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TTemperaturePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TTemperaturePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TTemperature * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TTemperaturePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TTemperaturePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TTemperature *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TTemperaturePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TTemperatureKeyHolder *key, 
    const TTemperature *instance);

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TTemperature *instance, 
    const TTemperatureKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TTemperature *instance);

NDDSUSERDllExport extern RTIBool 
TTemperaturePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TTemperaturePlugin_new(void);

NDDSUSERDllExport extern void
TTemperaturePlugin_delete(struct PRESTypePlugin *);

} /* namespace sensors */

} /* namespace example */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SensorsPlugin_1082808791_h */
