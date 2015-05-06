
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensors.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "Sensors.h"


namespace system{

namespace sensors{
/* ========================================================================= */
const char *TDistanceTYPENAME = "system::sensors::TDistance";

DDS_TypeCode* TDistance_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TDistance_g_tc_members[2]=
    {
        {
            (char *)"sensorId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"value_m",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TDistance_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"system::sensors::TDistance", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TDistance_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TDistance*/

    if (is_initialized) {
        return &TDistance_g_tc;
    }


    TDistance_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TDistance_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &TDistance_g_tc;
}


RTIBool TDistance_initialize(
    TDistance* sample) {
  return ::system::sensors::TDistance_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TDistance_initialize_ex(
    TDistance* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::system::sensors::TDistance_initialize_w_params(
        sample,&allocParams);
}

RTIBool TDistance_initialize_w_params(
        TDistance* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->sensorId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->value_m)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TDistance_finalize(
    TDistance* sample)
{
    ::system::sensors::TDistance_finalize_ex(sample,RTI_TRUE);
}
        
void TDistance_finalize_ex(
    TDistance* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::system::sensors::TDistance_finalize_w_params(
        sample,&deallocParams);
}

void TDistance_finalize_w_params(
        TDistance* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void TDistance_finalize_optional_members(
    TDistance* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             



}

RTIBool TDistance_copy(
    TDistance* dst,
    const TDistance* src)
{

    if (!RTICdrType_copyLong(
        &dst->sensorId, &src->sensorId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->value_m, &src->value_m)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TDistance' sequence class.
 */
#define T TDistance
#define TSeq TDistanceSeq
#define T_initialize_w_params ::system::sensors::TDistance_initialize_w_params
#define T_finalize_w_params   ::system::sensors::TDistance_finalize_w_params
#define T_copy       ::system::sensors::TDistance_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *TTemperatureTYPENAME = "system::sensors::TTemperature";

DDS_TypeCode* TTemperature_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TTemperature_g_tc_members[2]=
    {
        {
            (char *)"sensorId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"value_c",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TTemperature_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"system::sensors::TTemperature", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TTemperature_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TTemperature*/

    if (is_initialized) {
        return &TTemperature_g_tc;
    }


    TTemperature_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TTemperature_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &TTemperature_g_tc;
}


RTIBool TTemperature_initialize(
    TTemperature* sample) {
  return ::system::sensors::TTemperature_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TTemperature_initialize_ex(
    TTemperature* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::system::sensors::TTemperature_initialize_w_params(
        sample,&allocParams);
}

RTIBool TTemperature_initialize_w_params(
        TTemperature* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->sensorId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->value_c)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TTemperature_finalize(
    TTemperature* sample)
{
    ::system::sensors::TTemperature_finalize_ex(sample,RTI_TRUE);
}
        
void TTemperature_finalize_ex(
    TTemperature* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::system::sensors::TTemperature_finalize_w_params(
        sample,&deallocParams);
}

void TTemperature_finalize_w_params(
        TTemperature* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void TTemperature_finalize_optional_members(
    TTemperature* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             



}

RTIBool TTemperature_copy(
    TTemperature* dst,
    const TTemperature* src)
{

    if (!RTICdrType_copyLong(
        &dst->sensorId, &src->sensorId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->value_c, &src->value_c)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TTemperature' sequence class.
 */
#define T TTemperature
#define TSeq TTemperatureSeq
#define T_initialize_w_params ::system::sensors::TTemperature_initialize_w_params
#define T_finalize_w_params   ::system::sensors::TTemperature_finalize_w_params
#define T_copy       ::system::sensors::TTemperature_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T


} /* namespace sensors */

} /* namespace system */
