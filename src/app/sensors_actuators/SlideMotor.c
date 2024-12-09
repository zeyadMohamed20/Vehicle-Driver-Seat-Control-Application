/**
 *
 * \file SlideMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/8/2024 12:17 PM
 *
 * 
 *
 */

#include "Rte_SlideMotor.h"


/**
 *
 * Runnable SlideMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlideMotor_Move
 *
 */

void SlideMotor_Move (StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	if(step == MOTOR_STEP_PLUS)
	{
		status = Rte_Call_rpIOSetSlide_IOSetForward();
	}
	else
	{
		status = Rte_Call_rpIOSetSlide_IOSetReverse();
	}
}

