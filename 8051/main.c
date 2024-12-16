/******************************************************************************
 * @file    main.c
 * @brief   Main program to initialize system components and manage network operations.
 * 
 * @author      Abhishek Koppa
 * @date        December 05, 2024
 * This file contains the main program that initializes the system's hardware components,
 * including the PCA (Programmable Counter Array) and SPI, sets the system clock in X2 mode,
 * and starts the ENC28J60 Ethernet controller. The program enters an infinite loop, where it 
 * processes incoming network packets and performs the necessary operations.
 ******************************************************************************/

#include "global.h"


void init_PCA(void)
{
    //IEN0 |= 0x81;
    //P1_2 =0;
    //P1_6 =1;
    CR=1;
    CMOD |= 0x02;
}  void start_X2(void)
{
    CKCON0 |= ENABLE_X2;
    return;
}

void end_X2(void)
{
    CKCON0 &= (~(ENABLE_X2));
    return;
}
int main(void)
{
	/*
	 * Clocks: Processor = 48 Mhz. AHB = 48 MHz. APB = 24 MHz.
	 *
	 */
	 uint8_t device_mac[6] = { 0x02, 0x04, 0xA3, 0x3C, 0x4D, 0x50 }; // Default MAC
    uint8_t target_mac[6] = { 0xFF, 0XFF, 0XFF, 0xFF, 0XFF, 0XFF }; // Default MAC
    uint8_t device_ip[4] = { 192, 168, 1, 100 }; // Default IP Address
    uint8_t target_ip[4] = { 192, 168, 1, 1 };
	SPI_Init();
	printf("\nWelcome to SerialIO!\n");
	init_PCA();
	CKCON0 |= ENABLE_X2;  // Set bit 0 to enable X2 mode
	enc_init(device_mac);


	while (1) {
		packetLoop();
	}
}