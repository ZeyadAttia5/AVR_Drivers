/*
 * UART.c
 *
 *  Created on: Oct 8, 2022
 *      Author: Administrator
 */

// Task 1 support 9-bit data transmission

#include "../../../INCLUDE/MCAL/UART/UART_prv.h"
#include "../../../SERVICES/BIT_UTILIS.h"
#include "../../../SERVICES/STD_TYPES.h"

void UART_voidInit(void){
	//Set Baud Rate
	UBRRL = 51;
	UBRRH = 0;
	//Set Frame format -> 8 data 1 stop 0 parity
	UCSRC = 0x86;
	//Enable Rx and Tx
	UCSRB = 0x18;
}

void UART_voidSendChar(u8 data){

	//while condition equivalent to GET_BIT(UCSRA, someBIT) check bit with calc programmer mode
	while((UCSRA&0x20) == 0x00);
	UDR_T = data;
}

u8 UART_voidGetChar(void){
	u8 LOC_u8Result = 0;
	while((UCSRA&0x80) == 0x00);
	LOC_u8Result = UDR_R;
	return LOC_u8Result;
}

