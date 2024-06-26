//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: arduAttCont.cpp
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
#include "rtwtypes.h"
#include "arduAttCont_private.h"

real32_T look2_iflf_binlxpw(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride)
{
  real32_T fractions[2];
  real32_T frac;
  real32_T yL_0d0;
  real32_T yL_0d1;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  // Column-major Lookup 2-D
  // Search method: 'binary'
  // Use previous index: 'off'
  // Interpolation method: 'Linear point-slope'
  // Extrapolation method: 'Linear'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Linear'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex[0U]]) {
    // Binary Search
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0U] - 1U;
    frac = (u0 - bp0[maxIndex[0U] - 1U]) / (bp0[maxIndex[0U]] - bp0[maxIndex[0U]
      - 1U]);
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Linear'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = (u1 - bp1[0U]) / (bp1[1U] - bp1[0U]);
  } else if (u1 < bp1[maxIndex[1U]]) {
    // Binary Search
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U] - 1U;
    frac = (u1 - bp1[maxIndex[1U] - 1U]) / (bp1[maxIndex[1U]] - bp1[maxIndex[1U]
      - 1U]);
  }

  // Column-major Interpolation 2-D
  // Interpolation method: 'Linear point-slope'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Overflow mode: 'portable wrapping'

  bpIdx = iLeft * stride + bpIndices[0U];
  yL_0d0 = table[bpIdx];
  yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
  bpIdx += stride;
  yL_0d1 = table[bpIdx];
  return (((table[bpIdx + 1U] - yL_0d1) * fractions[0U] + yL_0d1) - yL_0d0) *
    frac + yL_0d0;
}

// Model step function
void arduAttCont::step(real32_T arg_attitude_error[3], real32_T arg_rate_ff[3],
  real32_T arg_rate_meas[3], real32_T arg_Out1[3])
{
  real32_T rtb_NProdOut;
  real32_T rtb_NProdOut_a;
  real32_T rtb_NProdOut_j;
  real32_T rtb_Saturation3;
  real32_T rtb_Sum3;
  real32_T rtb_Sum4;
  real32_T tmp;
  real32_T u0;

  // Sum: '<Root>/Sum3' incorporates:
  //   Gain: '<Root>/Gain'
  //   Inport: '<Root>/attitude_error'
  //   Inport: '<Root>/rate_ff'
  //   Inport: '<Root>/rate_meas'
  //   Sum: '<Root>/Sum'

  rtb_Sum3 = (arduAttCont_P.ANG_RLL_P * arg_attitude_error[0] + arg_rate_ff[0])
    - arg_rate_meas[0];

  // Product: '<S86>/NProd Out' incorporates:
  //   Constant: '<Root>/Constant2'
  //   Constant: '<Root>/Constant3'
  //   DiscreteIntegrator: '<S78>/Filter'
  //   Product: '<S77>/DProd Out'
  //   Sum: '<S78>/SumD'

  rtb_NProdOut = (rtb_Sum3 * arduAttCont_P.RAT_RLL_D -
                  arduAttCont_DW.Filter_DSTATE) * arduAttCont_P.Constant3_Value;

  // Sum: '<Root>/Sum4' incorporates:
  //   Gain: '<Root>/Gain1'
  //   Inport: '<Root>/attitude_error'
  //   Inport: '<Root>/rate_ff'
  //   Inport: '<Root>/rate_meas'
  //   Sum: '<Root>/Sum1'

  rtb_Sum4 = (arduAttCont_P.ANG_PIT_P * arg_attitude_error[1] + arg_rate_ff[1])
    - arg_rate_meas[1];

  // Product: '<S38>/NProd Out' incorporates:
  //   Constant: '<Root>/Constant6'
  //   Constant: '<Root>/Constant7'
  //   DiscreteIntegrator: '<S30>/Filter'
  //   Product: '<S29>/DProd Out'
  //   Sum: '<S30>/SumD'

  rtb_NProdOut_a = (rtb_Sum4 * arduAttCont_P.RAT_PIT_D -
                    arduAttCont_DW.Filter_DSTATE_b) *
    arduAttCont_P.Constant7_Value;

  // Sum: '<Root>/Sum5' incorporates:
  //   Gain: '<Root>/Gain2'
  //   Inport: '<Root>/attitude_error'
  //   Inport: '<Root>/rate_ff'
  //   Inport: '<Root>/rate_meas'
  //   Sum: '<Root>/Sum2'

  rtb_Saturation3 = (arduAttCont_P.ANG_YAW_P * arg_attitude_error[2] +
                     arg_rate_ff[2]) - arg_rate_meas[2];

  // Product: '<S134>/NProd Out' incorporates:
  //   Constant: '<Root>/Constant10'
  //   Constant: '<Root>/Constant11'
  //   DiscreteIntegrator: '<S126>/Filter'
  //   Product: '<S125>/DProd Out'
  //   Sum: '<S126>/SumD'

  rtb_NProdOut_j = (rtb_Saturation3 * arduAttCont_P.RAT_YAW_D -
                    arduAttCont_DW.Filter_DSTATE_o) *
    arduAttCont_P.Constant11_Value;

  // Gain: '<Root>/Gain3' incorporates:
  //   Inport: '<Root>/attitude_error'
  //   Memory: '<Root>/Memory'
  //   Sum: '<Root>/Sum6'

  u0 = (arg_attitude_error[0] - arduAttCont_DW.Memory_PreviousInput) *
    arduAttCont_P.Gain3_Gain;

  // Saturate: '<Root>/Saturation' incorporates:
  //   Inport: '<Root>/attitude_error'

  if (arg_attitude_error[0] > arduAttCont_P.Saturation_UpperSat) {
    tmp = arduAttCont_P.Saturation_UpperSat;
  } else if (arg_attitude_error[0] < arduAttCont_P.Saturation_LowerSat) {
    tmp = arduAttCont_P.Saturation_LowerSat;
  } else {
    tmp = arg_attitude_error[0];
  }

  // Saturate: '<Root>/Saturation1'
  if (u0 > arduAttCont_P.Saturation1_UpperSat) {
    u0 = arduAttCont_P.Saturation1_UpperSat;
  } else if (u0 < arduAttCont_P.Saturation1_LowerSat) {
    u0 = arduAttCont_P.Saturation1_LowerSat;
  }

  // Outport: '<Root>/Out1' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<Root>/Constant4'
  //   Constant: '<Root>/Constant8'
  //   DiscreteIntegrator: '<S131>/Integrator'
  //   DiscreteIntegrator: '<S35>/Integrator'
  //   DiscreteIntegrator: '<S83>/Integrator'
  //   Lookup_n-D: '<Root>/2-D Lookup Table'
  //   Product: '<Root>/Product'
  //   Product: '<S136>/PProd Out'
  //   Product: '<S40>/PProd Out'
  //   Product: '<S88>/PProd Out'
  //   Saturate: '<Root>/Saturation'
  //   Saturate: '<Root>/Saturation1'
  //   Sum: '<S140>/Sum'
  //   Sum: '<S44>/Sum'
  //   Sum: '<S92>/Sum'

  arg_Out1[0] = (look2_iflf_binlxpw(tmp, u0,
    arduAttCont_P.uDLookupTable_bp01Data, arduAttCont_P.uDLookupTable_bp02Data,
    arduAttCont_P.Z1, arduAttCont_P.uDLookupTable_maxIndex, 15U) *
                 arduAttCont_P.RAT_RLL_P * rtb_Sum3 +
                 arduAttCont_DW.Integrator_DSTATE) + rtb_NProdOut;
  arg_Out1[1] = (rtb_Sum4 * arduAttCont_P.RAT_PIT_P +
                 arduAttCont_DW.Integrator_DSTATE_a) + rtb_NProdOut_a;
  arg_Out1[2] = (rtb_Saturation3 * arduAttCont_P.RAT_YAW_P +
                 arduAttCont_DW.Integrator_DSTATE_p) + rtb_NProdOut_j;

  // Update for DiscreteIntegrator: '<S78>/Filter'
  arduAttCont_DW.Filter_DSTATE += arduAttCont_P.Filter_gainval * rtb_NProdOut;

  // Update for Memory: '<Root>/Memory' incorporates:
  //   Inport: '<Root>/attitude_error'

  arduAttCont_DW.Memory_PreviousInput = arg_attitude_error[0];

  // Gain: '<Root>/Gain4' incorporates:
  //   Inport: '<Root>/attitude_error'
  //   Memory: '<Root>/Memory1'
  //   Sum: '<Root>/Sum7'

  u0 = (arg_attitude_error[0] + arduAttCont_DW.Memory1_PreviousInput) *
    arduAttCont_P.Gain4_Gain;

  // Saturate: '<Root>/Saturation2' incorporates:
  //   Inport: '<Root>/attitude_error'

  if (arg_attitude_error[0] > arduAttCont_P.Saturation2_UpperSat) {
    tmp = arduAttCont_P.Saturation2_UpperSat;
  } else if (arg_attitude_error[0] < arduAttCont_P.Saturation2_LowerSat) {
    tmp = arduAttCont_P.Saturation2_LowerSat;
  } else {
    tmp = arg_attitude_error[0];
  }

  // Saturate: '<Root>/Saturation3'
  if (u0 > arduAttCont_P.Saturation3_UpperSat) {
    u0 = arduAttCont_P.Saturation3_UpperSat;
  } else if (u0 < arduAttCont_P.Saturation3_LowerSat) {
    u0 = arduAttCont_P.Saturation3_LowerSat;
  }

  // Update for DiscreteIntegrator: '<S83>/Integrator' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Lookup_n-D: '<Root>/2-D Lookup Table1'
  //   Product: '<Root>/Product1'
  //   Product: '<S80>/IProd Out'
  //   Saturate: '<Root>/Saturation2'
  //   Saturate: '<Root>/Saturation3'

  arduAttCont_DW.Integrator_DSTATE += look2_iflf_binlxpw(tmp, u0,
    arduAttCont_P.uDLookupTable1_bp01Data, arduAttCont_P.uDLookupTable1_bp02Data,
    arduAttCont_P.Z2, arduAttCont_P.uDLookupTable1_maxIndex, 15U) *
    arduAttCont_P.RAT_RLL_I * rtb_Sum3 * arduAttCont_P.Integrator_gainval;

  // Update for DiscreteIntegrator: '<S35>/Integrator' incorporates:
  //   Constant: '<Root>/Constant5'
  //   Product: '<S32>/IProd Out'

  arduAttCont_DW.Integrator_DSTATE_a += rtb_Sum4 * arduAttCont_P.RAT_PIT_I *
    arduAttCont_P.Integrator_gainval_o;

  // Update for DiscreteIntegrator: '<S30>/Filter'
  arduAttCont_DW.Filter_DSTATE_b += arduAttCont_P.Filter_gainval_n *
    rtb_NProdOut_a;

  // Update for DiscreteIntegrator: '<S131>/Integrator' incorporates:
  //   Constant: '<Root>/Constant9'
  //   Product: '<S128>/IProd Out'

  arduAttCont_DW.Integrator_DSTATE_p += rtb_Saturation3 *
    arduAttCont_P.RAT_YAW_I * arduAttCont_P.Integrator_gainval_c;

  // Update for DiscreteIntegrator: '<S126>/Filter'
  arduAttCont_DW.Filter_DSTATE_o += arduAttCont_P.Filter_gainval_i *
    rtb_NProdOut_j;

  // Update for Memory: '<Root>/Memory1' incorporates:
  //   Inport: '<Root>/attitude_error'

  arduAttCont_DW.Memory1_PreviousInput = arg_attitude_error[0];
}

// Model initialize function
void arduAttCont::initialize()
{
  // InitializeConditions for DiscreteIntegrator: '<S78>/Filter'
  arduAttCont_DW.Filter_DSTATE = arduAttCont_P.rollratePIDController_InitialCo;

  // InitializeConditions for Memory: '<Root>/Memory'
  arduAttCont_DW.Memory_PreviousInput = arduAttCont_P.Memory_InitialCondition;

  // InitializeConditions for DiscreteIntegrator: '<S83>/Integrator'
  arduAttCont_DW.Integrator_DSTATE =
    arduAttCont_P.rollratePIDController_Initial_d;

  // InitializeConditions for DiscreteIntegrator: '<S35>/Integrator'
  arduAttCont_DW.Integrator_DSTATE_a =
    arduAttCont_P.pitchratePIDController1_Initi_n;

  // InitializeConditions for DiscreteIntegrator: '<S30>/Filter'
  arduAttCont_DW.Filter_DSTATE_b = arduAttCont_P.pitchratePIDController1_Initial;

  // InitializeConditions for DiscreteIntegrator: '<S131>/Integrator'
  arduAttCont_DW.Integrator_DSTATE_p =
    arduAttCont_P.yawratePIDController2_Initial_h;

  // InitializeConditions for DiscreteIntegrator: '<S126>/Filter'
  arduAttCont_DW.Filter_DSTATE_o = arduAttCont_P.yawratePIDController2_InitialCo;

  // InitializeConditions for Memory: '<Root>/Memory1'
  arduAttCont_DW.Memory1_PreviousInput = arduAttCont_P.Memory1_InitialCondition;
}

// Model terminate function
void arduAttCont::terminate()
{
  // (no terminate code required)
}

// Constructor
arduAttCont::arduAttCont() :
  arduAttCont_DW(),
  arduAttCont_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
arduAttCont::~arduAttCont()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
arduAttCont::RT_MODEL_arduAttCont_T * arduAttCont::getRTM()
{
  return (&arduAttCont_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
