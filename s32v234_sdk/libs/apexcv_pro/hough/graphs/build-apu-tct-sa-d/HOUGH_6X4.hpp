#ifndef _ACF_PROCESS_APU_HOUGH_6X4
#define _ACF_PROCESS_APU_HOUGH_6X4

#include <acf_process_apu.h>
#include <apex_launcher.hpp>
#include <stdint.h>

#include <HOUGH_6X4_APU_LOAD.h> //APU load associated with this process

//SCENARIO LIST*************************************************
static acf_scenario_buffer_data gScenarioBufferData0_HOUGH_6X4[] = {{6, 4, 2, 0, {0, 0, 0, 0}}, {6, 4, 1, 0, {0, 0, 0, 0}}, {1280, 1, 1, 0, {0, 0, 0, 0}}, {1604, 1, 1, 0, {0, 0, 0, 0}}, {32, 1, 1, 0, {0, 0, 0, 0}}, {2048, 1, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1280, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {6, 4, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {2, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {6, 1, 1, 0, {0, 0, 0, 0}}};

static acf_scenario_kernel_data gScenarioKernelData0_HOUGH_6X4[] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};

static acf_scenario gScenarioArray_HOUGH_6X4[] = {
{0, 0, 3500, 21648, 0, gScenarioBufferData0_HOUGH_6X4, 352, gScenarioKernelData0_HOUGH_6X4, 24}
};

static acf_scenario_list gScenarioList_HOUGH_6X4 = {
1, //number of scenarios
gScenarioArray_HOUGH_6X4};
//**************************************************************

class HOUGH_6X4 : public ACF_Process_APU
{

public:
   HOUGH_6X4(int32_t apex_id = 0) : ACF_Process_APU(apex_id)
   {} 

   int32_t Initialize()
   {
      int32_t lRetVal = 0;

      if (!Initialized()) //initialization steps that only need to occur once
      {
         SetProcessIdentifier("HOUGH_6X4");

         lRetVal = NonParametricInitialization();
         if (lRetVal != 0) return lRetVal;

         lRetVal |= mpApexTask->SetupHw("HOUGH_6X4",
                                        HOUGH_6X4_LOAD_SEGMENTS,
                                        HOUGH_6X4_LOAD_PMEM, HOUGH_6X4_LOAD_PMEM_SIZE,
                                        HOUGH_6X4_LOAD_DMEM, HOUGH_6X4_LOAD_DMEM_SIZE,
                                        0, 0); //assuming _LOAD_CMEM does not exist
         SetApuStdioInfo(HOUGH_6X4_APEX_LOG_BUFFER, HOUGH_6X4_APEX_LOG_SIZE);

         if (lRetVal != 0) return lRetVal;

         //***NOTE: the order in which the following ports are added is meaningful; do not change!

         AddPort("IMAGE", icp::DATATYPE_08U, 1, 1, 6, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
         AddPort("PIXEL_THRESHOLD", icp::DATATYPE_16S, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 11, 0, 0, 0, 0, 0);
         AddPort("PIXEL_OFFSET_PARAMS", icp::DATATYPE_16S, 1, 1, 4, 1, 0, 1, 1, 0, 1, 0, 12, 0, 0, 0, 0, 0);
         AddPort("CU_COUNT", icp::DATATYPE_16S, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 15, 0, 0, 0, 0, 0);
         AddPort("COS_TABLE", icp::DATATYPE_16S, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 16, 0, 0, 0, 0, 0);
         AddPort("SIN_TABLE", icp::DATATYPE_16S, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 17, 0, 0, 0, 0, 0);
         AddPort("RHO_COUNT", icp::DATATYPE_16S, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 18, 0, 0, 0, 0, 0);
         AddPort("CU_INDEX_PARAMS", icp::DATATYPE_16S, 1, 1, 2, 1, 0, 1, 1, 0, 1, 0, 19, 0, 0, 0, 0, 0);
         AddPort("LINE_THRESHOLD_PARAMS", icp::DATATYPE_16S, 1, 1, 6, 1, 0, 1, 1, 0, 1, 0, 21, 0, 0, 0, 0, 0);
         AddPort("LINE_COUNT", icp::DATATYPE_32S, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0);
         AddPort("LINES", icp::DATATYPE_32U, 1, 1, 32, 1, 1, 0, 0, 0, 1, 1, 4, 0, 0, 0, 0, 0);

         CfgScenarios(&gScenarioList_HOUGH_6X4);

         FlagAsInitialized();
      }

      lRetVal = SelectApuConfiguration(mApuCfg, mApexId); //by default mApuCfg = ACF_APU_CFG__APEX0_DEFAULT and mApexId = 0

      return lRetVal;
   }
};

#endif //_ACF_PROCESS_APU_HOUGH_6X4