//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: arduAttCont_data.cpp
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
#include "arduAttCont.h"

// Block parameters (default storage)
arduAttCont::P_arduAttCont_T arduAttCont::arduAttCont_P{
  // Variable: ANG_PIT_P
  //  Referenced by: '<Root>/Gain1'

  7.31046391F,

  // Variable: ANG_RLL_P
  //  Referenced by: '<Root>/Gain'

  6.61438799F,

  // Variable: ANG_YAW_P
  //  Referenced by: '<Root>/Gain2'

  7.33002615F,

  // Variable: RAT_PIT_D
  //  Referenced by: '<Root>/Constant6'

  0.002F,

  // Variable: RAT_PIT_I
  //  Referenced by: '<Root>/Constant5'

  0.1F,

  // Variable: RAT_PIT_P
  //  Referenced by: '<Root>/Constant4'

  0.1F,

  // Variable: RAT_RLL_D
  //  Referenced by: '<Root>/Constant2'

  0.004F,

  // Variable: RAT_RLL_I
  //  Referenced by: '<Root>/Constant1'

  0.15F,

  // Variable: RAT_RLL_P
  //  Referenced by: '<Root>/Constant'

  0.15F,

  // Variable: RAT_YAW_D
  //  Referenced by: '<Root>/Constant10'

  0.002F,

  // Variable: RAT_YAW_I
  //  Referenced by: '<Root>/Constant9'

  0.2F,

  // Variable: RAT_YAW_P
  //  Referenced by: '<Root>/Constant8'

  2.0F,

  // Variable: Z1
  //  Referenced by: '<Root>/2-D Lookup Table'

  { 2.67589545F, 2.34351826F, 2.16812754F, 2.0800035F, 2.06776595F, 2.07508373F,
    2.07078671F, 2.06658244F, 2.07078671F, 2.07508373F, 2.06776595F, 1.9819001F,
    1.81913781F, 1.62685275F, 1.09996343F, 2.34351826F, 2.34351826F, 2.16812754F,
    2.08378386F, 2.07078671F, 2.07508373F, 2.07078671F, 2.07078671F, 1.89936793F,
    1.88535917F, 1.89936793F, 1.82371163F, 1.68590832F, 1.49086738F,
    0.984164298F, 2.16812754F, 2.16812754F, 2.16812754F, 2.08960795F,
    2.07508373F, 2.07508373F, 2.07508373F, 2.07508373F, 1.88535917F, 1.73422945F,
    1.73422945F, 1.66262019F, 1.54958069F, 1.4388634F, 0.891447604F, 2.0800035F,
    2.08378386F, 2.08960795F, 2.0800035F, 2.06776595F, 2.07508373F, 2.07078671F,
    2.06776595F, 1.89936793F, 1.73422945F, 1.45286751F, 1.3757118F, 1.28582764F,
    1.24058652F, 0.757505F, 2.06776595F, 2.07078671F, 2.07508373F, 2.06776595F,
    1.9819001F, 1.97297847F, 1.97942686F, 1.9819001F, 1.82371163F, 1.66262019F,
    1.3757118F, 1.03469074F, 0.937966764F, 0.83542943F, 0.633911848F,
    2.07508373F, 2.07508373F, 2.07508373F, 2.07508373F, 1.97297847F, 1.81913781F,
    1.81913781F, 1.81913781F, 1.68590832F, 1.54958069F, 1.28582764F,
    0.937966764F, 0.937966764F, 0.852757871F, 0.637595356F, 2.07078671F,
    2.07078671F, 2.07508373F, 2.07078671F, 1.97942686F, 1.81913781F, 1.62685275F,
    1.62685275F, 1.49086738F, 1.4388634F, 1.24058652F, 0.83542943F, 0.852757871F,
    0.83542943F, 0.63541013F, 2.06658244F, 2.07078671F, 2.07508373F, 2.06776595F,
    1.9819001F, 1.81913781F, 1.62685275F, 1.09996343F, 0.984164298F,
    0.891447604F, 0.757505F, 0.633911848F, 0.637595356F, 0.63541013F, 0.633317F,
    2.07078671F, 1.89936793F, 1.88535917F, 1.89936793F, 1.82371163F, 1.68590832F,
    1.49086738F, 0.984164298F, 0.984164298F, 0.891447604F, 0.76522994F,
    0.63541013F, 0.637595356F, 0.63541013F, 0.63541013F, 2.07508373F,
    1.88535917F, 1.73422945F, 1.73422945F, 1.66262019F, 1.54958069F, 1.4388634F,
    0.891447604F, 0.891447604F, 0.891447604F, 0.779492378F, 0.637595356F,
    0.637595356F, 0.637595356F, 0.637595356F, 2.06776595F, 1.89936793F,
    1.73422945F, 1.45286751F, 1.3757118F, 1.28582764F, 1.24058652F, 0.757505F,
    0.76522994F, 0.779492378F, 0.757505F, 0.633911848F, 0.637595356F,
    0.63541013F, 0.633911848F, 1.9819001F, 1.82371163F, 1.66262019F, 1.3757118F,
    1.03469074F, 0.937966764F, 0.83542943F, 0.633911848F, 0.63541013F,
    0.637595356F, 0.633911848F, 0.613818109F, 0.613500774F, 0.613968432F,
    0.613818109F, 1.81913781F, 1.68590832F, 1.54958069F, 1.28582764F,
    0.937966764F, 0.937966764F, 0.852757871F, 0.637595356F, 0.637595356F,
    0.637595356F, 0.637595356F, 0.613500774F, 0.562073648F, 0.562073648F,
    0.562073648F, 1.62685275F, 1.49086738F, 1.4388634F, 1.24058652F, 0.83542943F,
    0.852757871F, 0.83542943F, 0.63541013F, 0.63541013F, 0.637595356F,
    0.63541013F, 0.613968432F, 0.562073648F, 0.485850155F, 0.485850155F,
    1.09996343F, 0.984164298F, 0.891447604F, 0.757505F, 0.633911848F,
    0.637595356F, 0.63541013F, 0.633317F, 0.63541013F, 0.637595356F,
    0.633911848F, 0.613818109F, 0.562073648F, 0.485850155F, 0.324261427F },

  // Variable: Z2
  //  Referenced by: '<Root>/2-D Lookup Table1'

  { 0.324261427F, 0.485850155F, 0.562073648F, 0.613818109F, 0.633911848F,
    0.637595356F, 0.63541013F, 0.633317F, 0.63541013F, 0.637595356F,
    0.633911848F, 0.757505F, 0.891447604F, 0.984164298F, 1.09996343F,
    0.485850155F, 0.485850155F, 0.562073648F, 0.613968432F, 0.63541013F,
    0.637595356F, 0.63541013F, 0.63541013F, 0.83542943F, 0.852757871F,
    0.83542943F, 1.24058652F, 1.4388634F, 1.49086738F, 1.62685275F, 0.562073648F,
    0.562073648F, 0.562073648F, 0.613500774F, 0.637595356F, 0.637595356F,
    0.637595356F, 0.637595356F, 0.852757871F, 0.937966764F, 0.937966764F,
    1.28582764F, 1.54958069F, 1.68590832F, 1.81913781F, 0.613818109F,
    0.613968432F, 0.613500774F, 0.613818109F, 0.633911848F, 0.637595356F,
    0.63541013F, 0.633911848F, 0.83542943F, 0.937966764F, 1.03469074F,
    1.3757118F, 1.66262019F, 1.82371163F, 1.9819001F, 0.633911848F, 0.63541013F,
    0.637595356F, 0.633911848F, 0.757505F, 0.779492378F, 0.76522994F, 0.757505F,
    1.24058652F, 1.28582764F, 1.3757118F, 1.45286751F, 1.73422945F, 1.89936793F,
    2.06776595F, 0.637595356F, 0.637595356F, 0.637595356F, 0.637595356F,
    0.779492378F, 0.891447604F, 0.891447604F, 0.891447604F, 1.4388634F,
    1.54958069F, 1.66262019F, 1.73422945F, 1.73422945F, 1.88535917F, 2.07508373F,
    0.63541013F, 0.63541013F, 0.637595356F, 0.63541013F, 0.76522994F,
    0.891447604F, 0.984164298F, 0.984164298F, 1.49086738F, 1.68590832F,
    1.82371163F, 1.89936793F, 1.88535917F, 1.89936793F, 2.07078671F, 0.633317F,
    0.63541013F, 0.637595356F, 0.633911848F, 0.757505F, 0.891447604F,
    0.984164298F, 1.09996343F, 1.62685275F, 1.81913781F, 1.9819001F, 2.06776595F,
    2.07508373F, 2.07078671F, 2.06658244F, 0.63541013F, 0.83542943F,
    0.852757871F, 0.83542943F, 1.24058652F, 1.4388634F, 1.49086738F, 1.62685275F,
    1.62685275F, 1.81913781F, 1.97942686F, 2.07078671F, 2.07508373F, 2.07078671F,
    2.07078671F, 0.637595356F, 0.852757871F, 0.937966764F, 0.937966764F,
    1.28582764F, 1.54958069F, 1.68590832F, 1.81913781F, 1.81913781F, 1.81913781F,
    1.97297847F, 2.07508373F, 2.07508373F, 2.07508373F, 2.07508373F,
    0.633911848F, 0.83542943F, 0.937966764F, 1.03469074F, 1.3757118F,
    1.66262019F, 1.82371163F, 1.9819001F, 1.97942686F, 1.97297847F, 1.9819001F,
    2.06776595F, 2.07508373F, 2.07078671F, 2.06776595F, 0.757505F, 1.24058652F,
    1.28582764F, 1.3757118F, 1.45286751F, 1.73422945F, 1.89936793F, 2.06776595F,
    2.07078671F, 2.07508373F, 2.06776595F, 2.0800035F, 2.08960795F, 2.08378386F,
    2.0800035F, 0.891447604F, 1.4388634F, 1.54958069F, 1.66262019F, 1.73422945F,
    1.73422945F, 1.88535917F, 2.07508373F, 2.07508373F, 2.07508373F, 2.07508373F,
    2.08960795F, 2.16812754F, 2.16812754F, 2.16812754F, 0.984164298F,
    1.49086738F, 1.68590832F, 1.82371163F, 1.89936793F, 1.88535917F, 1.89936793F,
    2.07078671F, 2.07078671F, 2.07508373F, 2.07078671F, 2.08378386F, 2.16812754F,
    2.34351826F, 2.34351826F, 1.09996343F, 1.62685275F, 1.81913781F, 1.9819001F,
    2.06776595F, 2.07508373F, 2.07078671F, 2.06658244F, 2.07078671F, 2.07508373F,
    2.06776595F, 2.0800035F, 2.16812754F, 2.34351826F, 2.67589545F },

  // Mask Parameter: rollratePIDController_InitialCo
  //  Referenced by: '<S78>/Filter'

  0.0F,

  // Mask Parameter: pitchratePIDController1_Initial
  //  Referenced by: '<S30>/Filter'

  0.0F,

  // Mask Parameter: yawratePIDController2_InitialCo
  //  Referenced by: '<S126>/Filter'

  0.0F,

  // Mask Parameter: rollratePIDController_Initial_d
  //  Referenced by: '<S83>/Integrator'

  0.0F,

  // Mask Parameter: pitchratePIDController1_Initi_n
  //  Referenced by: '<S35>/Integrator'

  0.0F,

  // Mask Parameter: yawratePIDController2_Initial_h
  //  Referenced by: '<S131>/Integrator'

  0.0F,

  // Computed Parameter: Filter_gainval
  //  Referenced by: '<S78>/Filter'

  0.0025F,

  // Computed Parameter: Constant3_Value
  //  Referenced by: '<Root>/Constant3'

  94.2477798F,

  // Computed Parameter: Saturation_UpperSat
  //  Referenced by: '<Root>/Saturation'

  0.0004F,

  // Computed Parameter: Saturation_LowerSat
  //  Referenced by: '<Root>/Saturation'

  -0.0004F,

  // Computed Parameter: Memory_InitialCondition
  //  Referenced by: '<Root>/Memory'

  0.0F,

  // Computed Parameter: Gain3_Gain
  //  Referenced by: '<Root>/Gain3'

  0.0025F,

  // Computed Parameter: Saturation1_UpperSat
  //  Referenced by: '<Root>/Saturation1'

  0.0001F,

  // Computed Parameter: Saturation1_LowerSat
  //  Referenced by: '<Root>/Saturation1'

  -0.0001F,

  // Computed Parameter: uDLookupTable_bp01Data
  //  Referenced by: '<Root>/2-D Lookup Table'

  { -0.0004F, -0.000342857151F, -0.000285714283F, -0.000228571429F,
    -0.000171428575F, -0.000114285715F, -5.71428573E-5F, 0.0F, 5.71428573E-5F,
    0.000114285715F, 0.000171428575F, 0.000228571429F, 0.000285714283F,
    0.000342857151F, 0.0004F },

  // Computed Parameter: uDLookupTable_bp02Data
  //  Referenced by: '<Root>/2-D Lookup Table'

  { -0.0001F, -8.57142877E-5F, -7.14285707E-5F, -5.71428573E-5F, -4.28571439E-5F,
    -2.85714286E-5F, -1.42857143E-5F, 0.0F, 1.42857143E-5F, 2.85714286E-5F,
    4.28571439E-5F, 5.71428573E-5F, 7.14285707E-5F, 8.57142877E-5F, 0.0001F },

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S83>/Integrator'

  0.0025F,

  // Computed Parameter: Integrator_gainval_o
  //  Referenced by: '<S35>/Integrator'

  0.0025F,

  // Computed Parameter: Filter_gainval_n
  //  Referenced by: '<S30>/Filter'

  0.0025F,

  // Computed Parameter: Constant7_Value
  //  Referenced by: '<Root>/Constant7'

  94.2477798F,

  // Computed Parameter: Integrator_gainval_c
  //  Referenced by: '<S131>/Integrator'

  0.0025F,

  // Computed Parameter: Filter_gainval_i
  //  Referenced by: '<S126>/Filter'

  0.0025F,

  // Computed Parameter: Constant11_Value
  //  Referenced by: '<Root>/Constant11'

  0.0F,

  // Computed Parameter: Saturation2_UpperSat
  //  Referenced by: '<Root>/Saturation2'

  0.0004F,

  // Computed Parameter: Saturation2_LowerSat
  //  Referenced by: '<Root>/Saturation2'

  -0.0004F,

  // Computed Parameter: Memory1_InitialCondition
  //  Referenced by: '<Root>/Memory1'

  0.0F,

  // Computed Parameter: Gain4_Gain
  //  Referenced by: '<Root>/Gain4'

  0.0025F,

  // Computed Parameter: Saturation3_UpperSat
  //  Referenced by: '<Root>/Saturation3'

  0.0001F,

  // Computed Parameter: Saturation3_LowerSat
  //  Referenced by: '<Root>/Saturation3'

  -0.0001F,

  // Computed Parameter: uDLookupTable1_bp01Data
  //  Referenced by: '<Root>/2-D Lookup Table1'

  { -0.0004F, -0.000342857151F, -0.000285714283F, -0.000228571429F,
    -0.000171428575F, -0.000114285715F, -5.71428573E-5F, 0.0F, 5.71428573E-5F,
    0.000114285715F, 0.000171428575F, 0.000228571429F, 0.000285714283F,
    0.000342857151F, 0.0004F },

  // Computed Parameter: uDLookupTable1_bp02Data
  //  Referenced by: '<Root>/2-D Lookup Table1'

  { -0.0001F, -8.57142877E-5F, -7.14285707E-5F, -5.71428573E-5F, -4.28571439E-5F,
    -2.85714286E-5F, -1.42857143E-5F, 0.0F, 1.42857143E-5F, 2.85714286E-5F,
    4.28571439E-5F, 5.71428573E-5F, 7.14285707E-5F, 8.57142877E-5F, 0.0001F },

  // Computed Parameter: uDLookupTable_maxIndex
  //  Referenced by: '<Root>/2-D Lookup Table'

  { 14U, 14U },

  // Computed Parameter: uDLookupTable1_maxIndex
  //  Referenced by: '<Root>/2-D Lookup Table1'

  { 14U, 14U }
};

//
// File trailer for generated code.
//
// [EOF]
//
