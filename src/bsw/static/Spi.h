/**
 *
 * \brief Sprints AUTOSAR Master Class - SeatCtrlApp
 * \author Zeyad Mohamed
 *
 * 
 *
 */
 
#ifndef SPI_H
#define SPI_H

#include "Std_Types.h"
#include "Spi_Cfg.h"

typedef uint8				Spi_ChannelType;
typedef uint16 				Spi_DataType;

extern Std_ReturnType Spi_ReadIB(Spi_ChannelType Channel, Spi_DataType* DataBufferPtr);

#endif