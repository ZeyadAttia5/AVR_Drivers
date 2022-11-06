/*
 * UART.h
 *
 *  Created on: Oct 8, 2022
 *      Author: Administrator
 */

#ifndef INCLUDE_MCAL_UART_UART_H_
#define INCLUDE_MCAL_UART_UART_H_

//UCSRA
#define RXC		0
#define TXC 	1
#define UDRE 	2
#define FE 		3
#define DOR 	4
#define PE 		5
#define U2X 	6
#define MPCM 	7



void UART_voidInit(void);
void UART_voidSendChar(u8 data);
u8	 UART_voidGetChar(void);


#endif /* INCLUDE_MCAL_UART_UART_H_ */
