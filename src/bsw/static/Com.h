/**
 *
 * \brief Sprints AUTOSAR Master Class - SeatCtrlApp
 * \author Zeyad Mohamed
 *
 * 
 *
 */
 
#ifndef COM_H
#define COM_H

#include "Std_Types.h"
#include "Com_Cfg.h"

typedef uint16 				Com_SignalIdType;

Std_ReturnType Com_ReceiveSignal(Com_SignalIdType SignalId, void* SignalDataPtr);

void Com_MainFunction(void);

#endif