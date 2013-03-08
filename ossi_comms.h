/*
 * ossi_comms.h
 *
 *  Created on: 2013. 3. 9.
 *      Author: OSSI
 */

#ifndef OSSI_COMMS_H_
#define OSSI_COMMS_H_

#include "ossi_1611.h"
#include "clock.h"
#include "ossi_timer.h"
#include "ossi_data.h"
#include "i2c.h"
#include "printf.h"
#include "adf7021n.h"

// PORT1
#define OBC_FAULT_IN_PIN	(BIT0)
#define RX_MUXOUT_PIN		(BIT1)
#define RX_CLK_PIN 			(BIT2)
#define RX_DATA_PIN 		(BIT3)
#define RX_SWD_PIN 			(BIT4)
#define RX_SCLK_PIN 		(BIT5)
#define RX_SREAD_PIN 		(BIT6)
#define RX_SDATA_PIN 		(BIT7)

// PORT2
#define RX_SLE_PIN 			(BIT0)
#define RX_CE_PIN 			(BIT1)
#define TX_MUXOUT_PIN		(BIT2)
#define TX_CLK_PIN 			(BIT3) // INPUT
#define TX_DATA_PIN 		(BIT4)
#define TX_SCLK_PIN 		(BIT5)
#define TX_SREAD_PIN 		(BIT6)
#define TX_SDATA_PIN 		(BIT7)

// PORT3
#define UNUSED3_0			(BIT0)
#define I2C_SDA_PIN			(BIT1)
#define UNUSED3_2			(BIT2)
#define I2C_SCL_PIN			(BIT3)
#define UNUSED3_4			(BIT4)
#define UNUSED3_5			(BIT5)
#define UART_TXD_PIN		(UART_TXD1_PIN) // UART TXD1
#define UART_RXD_PIN		(UART_RXD1_PIN) // UART RXD1

// PORT4
#define TX_SLE_PIN 			(BIT0)
#define TX_CE_PIN 			(BIT1)
#define TX_ON_PIN 			(BIT2) // RF Switch HIGH: Tx / Low: RX
#define UNUSED4_3 			(BIT3)
#define PA_ON_PIN 			(BIT4)
#define UNUSED4_5			(BIT5)
#define EXT_WDT_PIN			(BIT6)
#define UNUSED4_7			(BIT7)

// PORT5
#define UNUSED5_0			(BIT0)
#define UNUSED5_1			(BIT1)
#define UNUSED5_2			(BIT2)
#define UNUSED5_3			(BIT3)
#define UNUSED5_4			(BIT4)
#define LED0_PIN			(BIT5)
#define LED1_PIN			(BIT6)
#define UNUSED5_7			(BIT7)

// PORT6
#define UNUSED6_0			(BIT0)
#define UNUSED6_1			(BIT1)
#define UNUSED6_2			(BIT2)
#define OBC_OFF_PIN			(BIT3)
#define UNUSED6_4			(BIT4)
#define UNUSED6_5			(BIT5)
#define PA_BIAS_PIN			(BIT6)
#define UNUSED6_7			(BIT7)

#endif /* OSSI_COMMS_H_ */
