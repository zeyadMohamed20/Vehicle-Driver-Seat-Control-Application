/**
 *
 * \file HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/9/2024 07:10 AM
 *
 * 
 *
 */

#include "Rte_HMI.h"


void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState = MULTI_STATE_BTN_INIT;
	MultiStateBtnType InclineBtnState = MULTI_STATE_BTN_INIT;
	MultiStateBtnType SlideBtnState = MULTI_STATE_BTN_INIT;
	uint8 Height;
	uint8 Incline;
	uint8 Slide;

	
	/* Data Receive Points */
	if(Rte_IsUpdated_rpSeatCtrlData_Height())
	{
		status = Rte_Read_rpSeatCtrlData_Height(&Height);
		if(status == E_OK)
		{
			if(Height == 1)
			{
				HeightBtnState = MULTI_STATE_BTN_MINUS;
			}
			else if(Height == 2)
			{
				HeightBtnState = MULTI_STATE_BTN_PLUS;
			}
			status = Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
		}	
	}
	
	if(Rte_IsUpdated_rpSeatCtrlData_Incline())
	{
		status = Rte_Read_rpSeatCtrlData_Incline(&Incline);
		if(status == E_OK)
		{
			if(Incline == 1)
			{
				InclineBtnState = MULTI_STATE_BTN_MINUS;
			}
			else if(Incline == 2)
			{
				InclineBtnState = MULTI_STATE_BTN_PLUS;
			}
			status = Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);
		}	
	}
	
	if(Rte_IsUpdated_rpSeatCtrlData_Slide())
	{
		status = Rte_Read_rpSeatCtrlData_Slide(&Slide);
		if(status == E_OK)
		{
			if(Slide == 1)
			{
				SlideBtnState = MULTI_STATE_BTN_MINUS;
			}
			else if(Slide == 2)
			{
				SlideBtnState = MULTI_STATE_BTN_PLUS;
			}
			status = Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
		}
	}
	
	
}


/**
 *
 * Runnable HMI_SeatModeChanged
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatModeBtn_SeatModeBtn
 *
 */

void HMI_SeatModeChanged (void)
{
	SeatModeBtnType SeatModeBtn;
	uint8 SeatCtrlMode = RTE_MODE_SeatCtrlMode_INIT;

	/* Data Receive Points */
	Rte_Read_rpSeatModeBtn_SeatModeBtn(&SeatModeBtn);
	
	if(SeatModeBtn == SEAT_MODE_BTN_MANUAL)
	{
		SeatCtrlMode = RTE_MODE_SeatCtrlMode_MANUAL;
	}
	else if(SeatModeBtn == SEAT_MODE_BTN_AUTO)
	{
		SeatCtrlMode = RTE_MODE_SeatCtrlMode_AUTO;
	}
	else
	{
		/*Keep INIT*/
	}
	
	/* Mode Switch Points */
	Rte_Switch_ppSeatCtrlMode_SeatCtrlMode(SeatCtrlMode);
	
}

