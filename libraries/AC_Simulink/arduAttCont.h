//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: arduAttCont.h
//
// Code generated for Simulink model 'arduAttCont'.
//
// Model version                  : 1.14
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Tue Jun 25 11:01:39 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_arduAttCont_h_
#define RTW_HEADER_arduAttCont_h_
#include "rtwtypes.h"
#include "arduAttCont_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model arduAttCont
class arduAttCont final
{
  // public data and function members
 public:
  // Block states (default storage) for system '<Root>'
  struct DW_arduAttCont_T {
    real32_T Filter_DSTATE;            // '<S78>/Filter'
    real32_T Integrator_DSTATE;        // '<S83>/Integrator'
    real32_T Integrator_DSTATE_a;      // '<S35>/Integrator'
    real32_T Filter_DSTATE_b;          // '<S30>/Filter'
    real32_T Integrator_DSTATE_p;      // '<S131>/Integrator'
    real32_T Filter_DSTATE_o;          // '<S126>/Filter'
    real32_T Memory_PreviousInput;     // '<Root>/Memory'
    real32_T Memory1_PreviousInput;    // '<Root>/Memory1'
  };

  // Parameters (default storage)
  struct P_arduAttCont_T {
    real32_T ANG_PIT_P;                // Variable: ANG_PIT_P
                                          //  Referenced by: '<Root>/Gain1'

    real32_T ANG_RLL_P;                // Variable: ANG_RLL_P
                                          //  Referenced by: '<Root>/Gain'

    real32_T ANG_YAW_P;                // Variable: ANG_YAW_P
                                          //  Referenced by: '<Root>/Gain2'

    real32_T RAT_PIT_D;                // Variable: RAT_PIT_D
                                          //  Referenced by: '<Root>/Constant6'

    real32_T RAT_PIT_I;                // Variable: RAT_PIT_I
                                          //  Referenced by: '<Root>/Constant5'

    real32_T RAT_PIT_P;                // Variable: RAT_PIT_P
                                          //  Referenced by: '<Root>/Constant4'

    real32_T RAT_RLL_D;                // Variable: RAT_RLL_D
                                          //  Referenced by: '<Root>/Constant2'

    real32_T RAT_RLL_I;                // Variable: RAT_RLL_I
                                          //  Referenced by: '<Root>/Constant1'

    real32_T RAT_RLL_P;                // Variable: RAT_RLL_P
                                          //  Referenced by: '<Root>/Constant'

    real32_T RAT_YAW_D;                // Variable: RAT_YAW_D
                                          //  Referenced by: '<Root>/Constant10'

    real32_T RAT_YAW_I;                // Variable: RAT_YAW_I
                                          //  Referenced by: '<Root>/Constant9'

    real32_T RAT_YAW_P;                // Variable: RAT_YAW_P
                                          //  Referenced by: '<Root>/Constant8'

    real32_T Z1[225];                  // Variable: Z1
                                          //  Referenced by: '<Root>/2-D Lookup Table'

    real32_T Z2[225];                  // Variable: Z2
                                          //  Referenced by: '<Root>/2-D Lookup Table1'

    real32_T rollratePIDController_InitialCo;
                              // Mask Parameter: rollratePIDController_InitialCo
                                 //  Referenced by: '<S78>/Filter'

    real32_T pitchratePIDController1_Initial;
                              // Mask Parameter: pitchratePIDController1_Initial
                                 //  Referenced by: '<S30>/Filter'

    real32_T yawratePIDController2_InitialCo;
                              // Mask Parameter: yawratePIDController2_InitialCo
                                 //  Referenced by: '<S126>/Filter'

    real32_T rollratePIDController_Initial_d;
                              // Mask Parameter: rollratePIDController_Initial_d
                                 //  Referenced by: '<S83>/Integrator'

    real32_T pitchratePIDController1_Initi_n;
                              // Mask Parameter: pitchratePIDController1_Initi_n
                                 //  Referenced by: '<S35>/Integrator'

    real32_T yawratePIDController2_Initial_h;
                              // Mask Parameter: yawratePIDController2_Initial_h
                                 //  Referenced by: '<S131>/Integrator'

    real32_T Filter_gainval;           // Computed Parameter: Filter_gainval
                                          //  Referenced by: '<S78>/Filter'

    real32_T Constant3_Value;          // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<Root>/Constant3'

    real32_T Saturation_UpperSat;     // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<Root>/Saturation'

    real32_T Saturation_LowerSat;     // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<Root>/Saturation'

    real32_T Memory_InitialCondition;
                                  // Computed Parameter: Memory_InitialCondition
                                     //  Referenced by: '<Root>/Memory'

    real32_T Gain3_Gain;               // Computed Parameter: Gain3_Gain
                                          //  Referenced by: '<Root>/Gain3'

    real32_T Saturation1_UpperSat;   // Computed Parameter: Saturation1_UpperSat
                                        //  Referenced by: '<Root>/Saturation1'

    real32_T Saturation1_LowerSat;   // Computed Parameter: Saturation1_LowerSat
                                        //  Referenced by: '<Root>/Saturation1'

    real32_T uDLookupTable_bp01Data[15];
                                   // Computed Parameter: uDLookupTable_bp01Data
                                      //  Referenced by: '<Root>/2-D Lookup Table'

    real32_T uDLookupTable_bp02Data[15];
                                   // Computed Parameter: uDLookupTable_bp02Data
                                      //  Referenced by: '<Root>/2-D Lookup Table'

    real32_T Integrator_gainval;       // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S83>/Integrator'

    real32_T Integrator_gainval_o;   // Computed Parameter: Integrator_gainval_o
                                        //  Referenced by: '<S35>/Integrator'

    real32_T Filter_gainval_n;         // Computed Parameter: Filter_gainval_n
                                          //  Referenced by: '<S30>/Filter'

    real32_T Constant7_Value;          // Computed Parameter: Constant7_Value
                                          //  Referenced by: '<Root>/Constant7'

    real32_T Integrator_gainval_c;   // Computed Parameter: Integrator_gainval_c
                                        //  Referenced by: '<S131>/Integrator'

    real32_T Filter_gainval_i;         // Computed Parameter: Filter_gainval_i
                                          //  Referenced by: '<S126>/Filter'

    real32_T Constant11_Value;         // Computed Parameter: Constant11_Value
                                          //  Referenced by: '<Root>/Constant11'

    real32_T Saturation2_UpperSat;   // Computed Parameter: Saturation2_UpperSat
                                        //  Referenced by: '<Root>/Saturation2'

    real32_T Saturation2_LowerSat;   // Computed Parameter: Saturation2_LowerSat
                                        //  Referenced by: '<Root>/Saturation2'

    real32_T Memory1_InitialCondition;
                                 // Computed Parameter: Memory1_InitialCondition
                                    //  Referenced by: '<Root>/Memory1'

    real32_T Gain4_Gain;               // Computed Parameter: Gain4_Gain
                                          //  Referenced by: '<Root>/Gain4'

    real32_T Saturation3_UpperSat;   // Computed Parameter: Saturation3_UpperSat
                                        //  Referenced by: '<Root>/Saturation3'

    real32_T Saturation3_LowerSat;   // Computed Parameter: Saturation3_LowerSat
                                        //  Referenced by: '<Root>/Saturation3'

    real32_T uDLookupTable1_bp01Data[15];
                                  // Computed Parameter: uDLookupTable1_bp01Data
                                     //  Referenced by: '<Root>/2-D Lookup Table1'

    real32_T uDLookupTable1_bp02Data[15];
                                  // Computed Parameter: uDLookupTable1_bp02Data
                                     //  Referenced by: '<Root>/2-D Lookup Table1'

    uint32_T uDLookupTable_maxIndex[2];
                                   // Computed Parameter: uDLookupTable_maxIndex
                                      //  Referenced by: '<Root>/2-D Lookup Table'

    uint32_T uDLookupTable1_maxIndex[2];
                                  // Computed Parameter: uDLookupTable1_maxIndex
                                     //  Referenced by: '<Root>/2-D Lookup Table1'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_arduAttCont_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  arduAttCont(arduAttCont const&) = delete;

  // Assignment Operator
  arduAttCont& operator= (arduAttCont const&) & = delete;

  // Move Constructor
  arduAttCont(arduAttCont &&) = delete;

  // Move Assignment Operator
  arduAttCont& operator= (arduAttCont &&) = delete;

  // Real-Time Model get method
  arduAttCont::RT_MODEL_arduAttCont_T * getRTM();

  // Tunable parameters
  static P_arduAttCont_T arduAttCont_P;

  // model initialize function
  void initialize();

  // model step function
  void step(real32_T arg_attitude_error[3], real32_T arg_rate_ff[3], real32_T
            arg_rate_meas[3], real32_T arg_Out1[3]);

  // model terminate function
  static void terminate();

  // Constructor
  arduAttCont();

  // Destructor
  ~arduAttCont();

  // private data and function members
 private:
  // Block states
  DW_arduAttCont_T arduAttCont_DW;

  // Real-Time Model
  RT_MODEL_arduAttCont_T arduAttCont_M;
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'arduAttCont'
//  '<S1>'   : 'arduAttCont/pitch rate PID Controller1'
//  '<S2>'   : 'arduAttCont/roll rate PID Controller'
//  '<S3>'   : 'arduAttCont/yaw rate PID Controller2'
//  '<S4>'   : 'arduAttCont/pitch rate PID Controller1/Anti-windup'
//  '<S5>'   : 'arduAttCont/pitch rate PID Controller1/D Gain'
//  '<S6>'   : 'arduAttCont/pitch rate PID Controller1/Filter'
//  '<S7>'   : 'arduAttCont/pitch rate PID Controller1/Filter ICs'
//  '<S8>'   : 'arduAttCont/pitch rate PID Controller1/I Gain'
//  '<S9>'   : 'arduAttCont/pitch rate PID Controller1/Ideal P Gain'
//  '<S10>'  : 'arduAttCont/pitch rate PID Controller1/Ideal P Gain Fdbk'
//  '<S11>'  : 'arduAttCont/pitch rate PID Controller1/Integrator'
//  '<S12>'  : 'arduAttCont/pitch rate PID Controller1/Integrator ICs'
//  '<S13>'  : 'arduAttCont/pitch rate PID Controller1/N Copy'
//  '<S14>'  : 'arduAttCont/pitch rate PID Controller1/N Gain'
//  '<S15>'  : 'arduAttCont/pitch rate PID Controller1/P Copy'
//  '<S16>'  : 'arduAttCont/pitch rate PID Controller1/Parallel P Gain'
//  '<S17>'  : 'arduAttCont/pitch rate PID Controller1/Reset Signal'
//  '<S18>'  : 'arduAttCont/pitch rate PID Controller1/Saturation'
//  '<S19>'  : 'arduAttCont/pitch rate PID Controller1/Saturation Fdbk'
//  '<S20>'  : 'arduAttCont/pitch rate PID Controller1/Sum'
//  '<S21>'  : 'arduAttCont/pitch rate PID Controller1/Sum Fdbk'
//  '<S22>'  : 'arduAttCont/pitch rate PID Controller1/Tracking Mode'
//  '<S23>'  : 'arduAttCont/pitch rate PID Controller1/Tracking Mode Sum'
//  '<S24>'  : 'arduAttCont/pitch rate PID Controller1/Tsamp - Integral'
//  '<S25>'  : 'arduAttCont/pitch rate PID Controller1/Tsamp - Ngain'
//  '<S26>'  : 'arduAttCont/pitch rate PID Controller1/postSat Signal'
//  '<S27>'  : 'arduAttCont/pitch rate PID Controller1/preSat Signal'
//  '<S28>'  : 'arduAttCont/pitch rate PID Controller1/Anti-windup/Passthrough'
//  '<S29>'  : 'arduAttCont/pitch rate PID Controller1/D Gain/External Parameters'
//  '<S30>'  : 'arduAttCont/pitch rate PID Controller1/Filter/Disc. Forward Euler Filter'
//  '<S31>'  : 'arduAttCont/pitch rate PID Controller1/Filter ICs/Internal IC - Filter'
//  '<S32>'  : 'arduAttCont/pitch rate PID Controller1/I Gain/External Parameters'
//  '<S33>'  : 'arduAttCont/pitch rate PID Controller1/Ideal P Gain/Passthrough'
//  '<S34>'  : 'arduAttCont/pitch rate PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S35>'  : 'arduAttCont/pitch rate PID Controller1/Integrator/Discrete'
//  '<S36>'  : 'arduAttCont/pitch rate PID Controller1/Integrator ICs/Internal IC'
//  '<S37>'  : 'arduAttCont/pitch rate PID Controller1/N Copy/Disabled'
//  '<S38>'  : 'arduAttCont/pitch rate PID Controller1/N Gain/External Parameters'
//  '<S39>'  : 'arduAttCont/pitch rate PID Controller1/P Copy/Disabled'
//  '<S40>'  : 'arduAttCont/pitch rate PID Controller1/Parallel P Gain/External Parameters'
//  '<S41>'  : 'arduAttCont/pitch rate PID Controller1/Reset Signal/Disabled'
//  '<S42>'  : 'arduAttCont/pitch rate PID Controller1/Saturation/Passthrough'
//  '<S43>'  : 'arduAttCont/pitch rate PID Controller1/Saturation Fdbk/Disabled'
//  '<S44>'  : 'arduAttCont/pitch rate PID Controller1/Sum/Sum_PID'
//  '<S45>'  : 'arduAttCont/pitch rate PID Controller1/Sum Fdbk/Disabled'
//  '<S46>'  : 'arduAttCont/pitch rate PID Controller1/Tracking Mode/Disabled'
//  '<S47>'  : 'arduAttCont/pitch rate PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S48>'  : 'arduAttCont/pitch rate PID Controller1/Tsamp - Integral/Passthrough'
//  '<S49>'  : 'arduAttCont/pitch rate PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S50>'  : 'arduAttCont/pitch rate PID Controller1/postSat Signal/Forward_Path'
//  '<S51>'  : 'arduAttCont/pitch rate PID Controller1/preSat Signal/Forward_Path'
//  '<S52>'  : 'arduAttCont/roll rate PID Controller/Anti-windup'
//  '<S53>'  : 'arduAttCont/roll rate PID Controller/D Gain'
//  '<S54>'  : 'arduAttCont/roll rate PID Controller/Filter'
//  '<S55>'  : 'arduAttCont/roll rate PID Controller/Filter ICs'
//  '<S56>'  : 'arduAttCont/roll rate PID Controller/I Gain'
//  '<S57>'  : 'arduAttCont/roll rate PID Controller/Ideal P Gain'
//  '<S58>'  : 'arduAttCont/roll rate PID Controller/Ideal P Gain Fdbk'
//  '<S59>'  : 'arduAttCont/roll rate PID Controller/Integrator'
//  '<S60>'  : 'arduAttCont/roll rate PID Controller/Integrator ICs'
//  '<S61>'  : 'arduAttCont/roll rate PID Controller/N Copy'
//  '<S62>'  : 'arduAttCont/roll rate PID Controller/N Gain'
//  '<S63>'  : 'arduAttCont/roll rate PID Controller/P Copy'
//  '<S64>'  : 'arduAttCont/roll rate PID Controller/Parallel P Gain'
//  '<S65>'  : 'arduAttCont/roll rate PID Controller/Reset Signal'
//  '<S66>'  : 'arduAttCont/roll rate PID Controller/Saturation'
//  '<S67>'  : 'arduAttCont/roll rate PID Controller/Saturation Fdbk'
//  '<S68>'  : 'arduAttCont/roll rate PID Controller/Sum'
//  '<S69>'  : 'arduAttCont/roll rate PID Controller/Sum Fdbk'
//  '<S70>'  : 'arduAttCont/roll rate PID Controller/Tracking Mode'
//  '<S71>'  : 'arduAttCont/roll rate PID Controller/Tracking Mode Sum'
//  '<S72>'  : 'arduAttCont/roll rate PID Controller/Tsamp - Integral'
//  '<S73>'  : 'arduAttCont/roll rate PID Controller/Tsamp - Ngain'
//  '<S74>'  : 'arduAttCont/roll rate PID Controller/postSat Signal'
//  '<S75>'  : 'arduAttCont/roll rate PID Controller/preSat Signal'
//  '<S76>'  : 'arduAttCont/roll rate PID Controller/Anti-windup/Passthrough'
//  '<S77>'  : 'arduAttCont/roll rate PID Controller/D Gain/External Parameters'
//  '<S78>'  : 'arduAttCont/roll rate PID Controller/Filter/Disc. Forward Euler Filter'
//  '<S79>'  : 'arduAttCont/roll rate PID Controller/Filter ICs/Internal IC - Filter'
//  '<S80>'  : 'arduAttCont/roll rate PID Controller/I Gain/External Parameters'
//  '<S81>'  : 'arduAttCont/roll rate PID Controller/Ideal P Gain/Passthrough'
//  '<S82>'  : 'arduAttCont/roll rate PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S83>'  : 'arduAttCont/roll rate PID Controller/Integrator/Discrete'
//  '<S84>'  : 'arduAttCont/roll rate PID Controller/Integrator ICs/Internal IC'
//  '<S85>'  : 'arduAttCont/roll rate PID Controller/N Copy/Disabled'
//  '<S86>'  : 'arduAttCont/roll rate PID Controller/N Gain/External Parameters'
//  '<S87>'  : 'arduAttCont/roll rate PID Controller/P Copy/Disabled'
//  '<S88>'  : 'arduAttCont/roll rate PID Controller/Parallel P Gain/External Parameters'
//  '<S89>'  : 'arduAttCont/roll rate PID Controller/Reset Signal/Disabled'
//  '<S90>'  : 'arduAttCont/roll rate PID Controller/Saturation/Passthrough'
//  '<S91>'  : 'arduAttCont/roll rate PID Controller/Saturation Fdbk/Disabled'
//  '<S92>'  : 'arduAttCont/roll rate PID Controller/Sum/Sum_PID'
//  '<S93>'  : 'arduAttCont/roll rate PID Controller/Sum Fdbk/Disabled'
//  '<S94>'  : 'arduAttCont/roll rate PID Controller/Tracking Mode/Disabled'
//  '<S95>'  : 'arduAttCont/roll rate PID Controller/Tracking Mode Sum/Passthrough'
//  '<S96>'  : 'arduAttCont/roll rate PID Controller/Tsamp - Integral/Passthrough'
//  '<S97>'  : 'arduAttCont/roll rate PID Controller/Tsamp - Ngain/Passthrough'
//  '<S98>'  : 'arduAttCont/roll rate PID Controller/postSat Signal/Forward_Path'
//  '<S99>'  : 'arduAttCont/roll rate PID Controller/preSat Signal/Forward_Path'
//  '<S100>' : 'arduAttCont/yaw rate PID Controller2/Anti-windup'
//  '<S101>' : 'arduAttCont/yaw rate PID Controller2/D Gain'
//  '<S102>' : 'arduAttCont/yaw rate PID Controller2/Filter'
//  '<S103>' : 'arduAttCont/yaw rate PID Controller2/Filter ICs'
//  '<S104>' : 'arduAttCont/yaw rate PID Controller2/I Gain'
//  '<S105>' : 'arduAttCont/yaw rate PID Controller2/Ideal P Gain'
//  '<S106>' : 'arduAttCont/yaw rate PID Controller2/Ideal P Gain Fdbk'
//  '<S107>' : 'arduAttCont/yaw rate PID Controller2/Integrator'
//  '<S108>' : 'arduAttCont/yaw rate PID Controller2/Integrator ICs'
//  '<S109>' : 'arduAttCont/yaw rate PID Controller2/N Copy'
//  '<S110>' : 'arduAttCont/yaw rate PID Controller2/N Gain'
//  '<S111>' : 'arduAttCont/yaw rate PID Controller2/P Copy'
//  '<S112>' : 'arduAttCont/yaw rate PID Controller2/Parallel P Gain'
//  '<S113>' : 'arduAttCont/yaw rate PID Controller2/Reset Signal'
//  '<S114>' : 'arduAttCont/yaw rate PID Controller2/Saturation'
//  '<S115>' : 'arduAttCont/yaw rate PID Controller2/Saturation Fdbk'
//  '<S116>' : 'arduAttCont/yaw rate PID Controller2/Sum'
//  '<S117>' : 'arduAttCont/yaw rate PID Controller2/Sum Fdbk'
//  '<S118>' : 'arduAttCont/yaw rate PID Controller2/Tracking Mode'
//  '<S119>' : 'arduAttCont/yaw rate PID Controller2/Tracking Mode Sum'
//  '<S120>' : 'arduAttCont/yaw rate PID Controller2/Tsamp - Integral'
//  '<S121>' : 'arduAttCont/yaw rate PID Controller2/Tsamp - Ngain'
//  '<S122>' : 'arduAttCont/yaw rate PID Controller2/postSat Signal'
//  '<S123>' : 'arduAttCont/yaw rate PID Controller2/preSat Signal'
//  '<S124>' : 'arduAttCont/yaw rate PID Controller2/Anti-windup/Passthrough'
//  '<S125>' : 'arduAttCont/yaw rate PID Controller2/D Gain/External Parameters'
//  '<S126>' : 'arduAttCont/yaw rate PID Controller2/Filter/Disc. Forward Euler Filter'
//  '<S127>' : 'arduAttCont/yaw rate PID Controller2/Filter ICs/Internal IC - Filter'
//  '<S128>' : 'arduAttCont/yaw rate PID Controller2/I Gain/External Parameters'
//  '<S129>' : 'arduAttCont/yaw rate PID Controller2/Ideal P Gain/Passthrough'
//  '<S130>' : 'arduAttCont/yaw rate PID Controller2/Ideal P Gain Fdbk/Disabled'
//  '<S131>' : 'arduAttCont/yaw rate PID Controller2/Integrator/Discrete'
//  '<S132>' : 'arduAttCont/yaw rate PID Controller2/Integrator ICs/Internal IC'
//  '<S133>' : 'arduAttCont/yaw rate PID Controller2/N Copy/Disabled'
//  '<S134>' : 'arduAttCont/yaw rate PID Controller2/N Gain/External Parameters'
//  '<S135>' : 'arduAttCont/yaw rate PID Controller2/P Copy/Disabled'
//  '<S136>' : 'arduAttCont/yaw rate PID Controller2/Parallel P Gain/External Parameters'
//  '<S137>' : 'arduAttCont/yaw rate PID Controller2/Reset Signal/Disabled'
//  '<S138>' : 'arduAttCont/yaw rate PID Controller2/Saturation/Passthrough'
//  '<S139>' : 'arduAttCont/yaw rate PID Controller2/Saturation Fdbk/Disabled'
//  '<S140>' : 'arduAttCont/yaw rate PID Controller2/Sum/Sum_PID'
//  '<S141>' : 'arduAttCont/yaw rate PID Controller2/Sum Fdbk/Disabled'
//  '<S142>' : 'arduAttCont/yaw rate PID Controller2/Tracking Mode/Disabled'
//  '<S143>' : 'arduAttCont/yaw rate PID Controller2/Tracking Mode Sum/Passthrough'
//  '<S144>' : 'arduAttCont/yaw rate PID Controller2/Tsamp - Integral/Passthrough'
//  '<S145>' : 'arduAttCont/yaw rate PID Controller2/Tsamp - Ngain/Passthrough'
//  '<S146>' : 'arduAttCont/yaw rate PID Controller2/postSat Signal/Forward_Path'
//  '<S147>' : 'arduAttCont/yaw rate PID Controller2/preSat Signal/Forward_Path'

#endif                                 // RTW_HEADER_arduAttCont_h_

//
// File trailer for generated code.
//
// [EOF]
//
