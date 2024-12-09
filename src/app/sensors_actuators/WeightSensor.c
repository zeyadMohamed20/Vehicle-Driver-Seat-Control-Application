/**
 *
 * \file WeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: WeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/8/2024 12:17 PM
 *
 * 
 *
 */

#include "Rte_WeightSensor.h"


/**
 *
 * Runnable WeightSensor_GetWeight
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppWeightSensor_GetWeight
 *
 */

void WeightSensor_GetWeight (SensorWeightType* Weight)
{
	Std_ReturnType status;
	IoWeightSensorReadingType weight = 0;

	/* Server Call Points */
	status = Rte_Call_WeightSensor_rpIOGetWeight_IOGet(&weight);
	*Weight = weight/1000;
	
}

