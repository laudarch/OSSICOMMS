#include "ossi_comms.h"


uint8_t sendData[18] = {'H','e','l','l','o',' ','T','h','i','s',' ','i','s',' ','O','S','S','I'};
char *dstAddr ="CQ    ";
char *srcAddr ="OSSI-1";


int main(void) {
	// Stop watchdog timer
	WDTCTL = WDTPW | WDTHOLD;

	clock_setup();
	clock_dividerSetup(MCLK_DIVIDED_BY_1, SMCLK_DIVIDED_BY_1, ACLK_DIVIDED_BY_1);

	uart1_init();
	uart1_start();

	printf("COMMS Test\r\n");

	adf7021n_portSetup();



	// RX Xtal = 19.2 MHz
	// fOUT = 437.525 MHz
	// fPFD = 3.84 MHz -> R = 5
	// fDev = 1200Hz
	// Data Rate = 300 bps

	adf7021n_rxInit();
	adf7021n_rxEnable();
	adf7021n_recvStart();

	P5OUT &= ~LED1_PIN;
	P5DIR |= LED1_PIN;



	// TX_XTAL = 19.2 MHz
	// fOUT = 437.525 MHz
	// fPFD = 3.84 MHz -> R = 5
	// fDev = 500Hz
	// Data Rate = 1200bps
//
//	// for Data Rate = 1200 bps
//	adf7021n_setDemodDivider(11);
//	adf7021n_setCDRDivider(45);

//



	_EINT();
	while(1) {



     }
}
