/**
 *
 * \brief Sprints AUTOSAR Master Class - SeatCtrlApp
 * \author Zeyad Mohamed
 *
 * 
 *
 */
 
#ifndef RTE_SLIDESENSOR_H
#define RTE_SLIDESENSOR_H

#include "Rte_SlideSensor_Type.h"

/* RTE APIs Prototype Declaration */
Std_ReturnType Rte_Call_SlideSensor_rpIOGetSlide_IOGet(IoPositionSensorReadingType* position);

#define Rte_Call_rpIOGetSlide_IOGet 				Rte_Call_SlideSensor_rpIOGetSlide_IOGet

/* Runnables Prototype Declaration */
void SlideSensor_GetPosition(SensorPositionType* Position);

#endif