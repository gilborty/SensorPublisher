
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensors.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SensorsSupport_1082808791_h
#define SensorsSupport_1082808791_h

/* Uses */
#include "Sensors.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif


namespace example{

namespace sensors{
        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TDistanceTypeSupport, TDistance);

DDS_DATAWRITER_CPP(TDistanceDataWriter, TDistance);
DDS_DATAREADER_CPP(TDistanceDataReader, TDistanceSeq, TDistance);


#else

DDS_TYPESUPPORT_C(TDistanceTypeSupport, TDistance);
DDS_DATAWRITER_C(TDistanceDataWriter, TDistance);
DDS_DATAREADER_C(TDistanceDataReader, TDistanceSeq, TDistance);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TTemperatureTypeSupport, TTemperature);

DDS_DATAWRITER_CPP(TTemperatureDataWriter, TTemperature);
DDS_DATAREADER_CPP(TTemperatureDataReader, TTemperatureSeq, TTemperature);


#else

DDS_TYPESUPPORT_C(TTemperatureTypeSupport, TTemperature);
DDS_DATAWRITER_C(TTemperatureDataWriter, TTemperature);
DDS_DATAREADER_C(TTemperatureDataReader, TTemperatureSeq, TTemperature);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace sensors */

} /* namespace example */


#endif  /* SensorsSupport_1082808791_h */
