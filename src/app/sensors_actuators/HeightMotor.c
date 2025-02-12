/**
 *
 * \file HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/8/2024 12:17 PM
 *
 * 
 *
 */

#include "Rte_HeightMotor.h"


/**
 *
 * Runnable HeightMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_Move
 *
 */

void HeightMotor_Move (StepMotorStepType step)
{

	/* Server Call Points */
	if (step == MOTOR_STEP_PLUS)
	{
		Rte_Call_rpIOSetHeight_IOSetForward();
	}
	else
	{
		Rte_Call_rpIOSetHeight_IOSetReverse();
	}

}

