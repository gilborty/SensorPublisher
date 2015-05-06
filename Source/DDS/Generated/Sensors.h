
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensors.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Sensors_1082808790_h
#define Sensors_1082808790_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


namespace system{

namespace sensors{

#define system_sensors_TDistance_LAST_MEMBER_ID 1
        
extern const char *TDistanceTYPENAME;
        


#ifdef __cplusplus
    struct TDistanceSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TDistanceTypeSupport;
    class TDistanceDataWriter;
    class TDistanceDataReader;
#endif

#endif

            
    
class TDistance                                        
{
public:            
#ifdef __cplusplus
    typedef struct TDistanceSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TDistanceTypeSupport TypeSupport;
    typedef TDistanceDataWriter DataWriter;
    typedef TDistanceDataReader DataReader;
#endif

#endif
    
    DDS_Long  sensorId;

    DDS_Float  value_m;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TDistance_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TDistanceSeq, TDistance);
        
NDDSUSERDllExport
RTIBool TDistance_initialize(
        TDistance* self);
        
NDDSUSERDllExport
RTIBool TDistance_initialize_ex(
        TDistance* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TDistance_initialize_w_params(
        TDistance* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TDistance_finalize(
        TDistance* self);
                        
NDDSUSERDllExport
void TDistance_finalize_ex(
        TDistance* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TDistance_finalize_w_params(
        TDistance* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TDistance_finalize_optional_members(
        TDistance* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TDistance_copy(
        TDistance* dst,
        const TDistance* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define system_sensors_TTemperature_LAST_MEMBER_ID 1
        
extern const char *TTemperatureTYPENAME;
        


#ifdef __cplusplus
    struct TTemperatureSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TTemperatureTypeSupport;
    class TTemperatureDataWriter;
    class TTemperatureDataReader;
#endif

#endif

            
    
class TTemperature                                        
{
public:            
#ifdef __cplusplus
    typedef struct TTemperatureSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TTemperatureTypeSupport TypeSupport;
    typedef TTemperatureDataWriter DataWriter;
    typedef TTemperatureDataReader DataReader;
#endif

#endif
    
    DDS_Long  sensorId;

    DDS_Float  value_c;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TTemperature_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TTemperatureSeq, TTemperature);
        
NDDSUSERDllExport
RTIBool TTemperature_initialize(
        TTemperature* self);
        
NDDSUSERDllExport
RTIBool TTemperature_initialize_ex(
        TTemperature* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TTemperature_initialize_w_params(
        TTemperature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TTemperature_finalize(
        TTemperature* self);
                        
NDDSUSERDllExport
void TTemperature_finalize_ex(
        TTemperature* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TTemperature_finalize_w_params(
        TTemperature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TTemperature_finalize_optional_members(
        TTemperature* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TTemperature_copy(
        TTemperature* dst,
        const TTemperature* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace sensors */

} /* namespace system */


#endif /* Sensors_1082808790_h */
