/**
 *
 * \brief Sprints AUTOSAR Master Class - SeatCtrlApp
 * \author Zeyad Mohamed
 *
 * 
 *
 */
 
#include "Adc.h"
#include "vfb.h"

Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType* DataBufferPtr)
{
	/* Read position sensors from VFB variables */
	DataBufferPtr[0] = (Adc_ValueGroupType)VFB_HeightPosition;
	DataBufferPtr[1] = (Adc_ValueGroupType)VFB_InclinePosition;
	DataBufferPtr[2] = (Adc_ValueGroupType)VFB_SlidePosition;
	
	return E_OK;
}