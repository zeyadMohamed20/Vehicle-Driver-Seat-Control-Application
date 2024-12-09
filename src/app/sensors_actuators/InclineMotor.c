/**
 *
 * \file InclineMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: InclineMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/8/2024 12:17 PM
 *
 * 
 *
 */

#include "Rte_InclineMotor.h"


/**
 *
 * Runnable InclineMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineMotor_Move
 *
 */

void InclineMotor_Move (StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	if(step == MOTOR_STEP_PLUS)
	{
		status = Rte_Call_rpIOSetIncline_IOSetForward();
	}
	else
	{
		status = Rte_Call_rpIOSetIncline_IOSetReverse();
	}
	
}

