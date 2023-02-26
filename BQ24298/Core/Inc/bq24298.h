/*
 * bq24298.h
 *
 *  Created on: Jan 5, 2023
 *      Author: ADMIN
 */

#ifndef INC_BQ24298_H_
#define INC_BQ24298_H_

#include "stdbool.h"
#include "i2c_user.h"

/*Address of bq24298*/
#define BQ2429X_I2C_ADDR       			(0x6B << 1)

/*Input Source Control Register REG00		RESET:3x*/
#define BQ24298_ISCR_ADD				0x00UL
#define BQ24298_ISCR_SEL				0x37

/*Power-On Configuration Register REG01		RESET: 0x1B*/
#define BQ24298_POCR_ADD				0x01UL
#define BQ24298_POCR_SEL				0x1B
/* Charge Current Control Register REG02 */
#define BQ24298_CCCR_ADD				0x02UL
#define BQ24298_CCCR_SEL				0x20   //0X44 1600MA

/* Pre-Charge/Termination Current Control Register REG03 	RESET:0x11*/
#define BQ24298_PC_TCCR_ADD				0x03UL
#define BQ24298_PC_TCCR_SEL				0x10

/* Charge Voltage Control Register REG04	RESET:0xB2*/
#define BQ24298_CVCR_ADD				0x04UL
#define BQ24298_CVCR_SEL				0xBB      //B7: 4.235v  0xBB 4.248

/* Charge Termination/Timer Control Register REG05		RESET:0xDC*/
#define BQ24298_CT_TCR_ADD				0x05UL
#define BQ24298_CT_CTR_SEL				0x8C

/*Boost Voltage/Thermal Regulation Control Register REG06	RESET:0x73*/
#define BQ24298_BV_TRCR_ADD				0x06UL
#define BQ24298_BV_TRCR_SEL				0x73

/*Misc Operation Control Register REG07 	RESET:0x4B*/
#define BQ24298_MOCR_ADD				0x07UL
#define BQ24298_MOCR_SEL				0x4B

/* System Status Register REG08*/
#define BQ24298_SSR_ADD					0x08UL
#define BQ24298_SSR_VBUS_UNK			0x00UL	//00 – Unknown (no input, or DPDM detection incomplete)
#define BQ24298_SSR_VBUS_USB			0x01UL	//01 – USB host
#define BQ24298_SSR_VBUS_ADP			0x02UL	//10 – Adapter port
#define BQ24298_SSR_VBUS_OTG			0x03UL  //11 – OTG
#define BQ24298_SSR_CHRGS_NC			0x00UL	//00 – Not Charging
#define BQ24298_SSR_CHRGS_PC			0x01UL	//01 – Pre-charge (<VBATLOWV)
#define BQ24298_SSR_CHRGS_FC			0x02UL	//10 – Fast Charging
#define BQ24298_SSR_CHRGS_CTD			0x03UL	//11 – Charge Termination
#define BQ24298_SSR_DPM_NOT				0x00UL	//0 – Not DPM
#define BQ24298_SSR_DPM					0x01UL	//1 – VINDPM or IINDPM
#define BQ24298_SSR_PG_NPG				0x00UL	//0 – Not Power Good
#define BQ24298_SSR_PG_PG				0x01UL	//1 – Power Good
#define BQ24298_SSR_THERM_NOR			0x00UL	//0 – Normal
#define BQ24298_SSR_THERM_ITR			0x01UL	//1 – In Thermal Regulation
#define BQ24298_SSR_VSYS_NOT			0x00UL	//0 – Not in VSYSMIN regulation (BAT > VSYSMIN)
#define BQ24298_SSR_VSYS				0x01UL	//1 – In VSYSMIN regulation (BAT < VSYSMIN)

/*New Fault Register REG09*/
#define BQ2429_FAULT_ADD				0x09UL

#define BQ24298_NFR_WWDG_NOR			0x00UL	//0 – Normal
#define BQ24298_NFR_WWDG_EXP			0x01UL	//1- Watchdog timer expiration
#define BQ24298_NFR_OTG_NOR				0x00UL	//0 – Normal
#define BQ24298_NFR_OTG_OL				0x01UL	//1 – VBUS overloaded in OTG, or VBUS OVP, or battery is too low (any conditions that cannot start boost function)
#define BQ24298_NFR_CHRG_NOR			0x00UL	//00 – Normal
#define BQ24298_NFR_CHRG_IN				0x01UL	//01 – Input fault (OVP or bad source)
#define BQ24298_NFR_CHRG_TS				0x02UL	//10 - Thermal shutdown
#define BQ24298_NFR_CHRG_CTE			0x03UL	//11 – Charge Timer Expiration
#define BQ24298_NFR_BAT_NOR				0x00UL	//0 – Normal
#define BQ24298_NFR_BAT_OVP				0x01UL	//1 – Battery OVP
#define BQ24298_NFR_NTC_NOR_BIT1		0x00UL	//0-Normal
#define BQ24298_NFR_NTC_CN_BIT1			0x01UL	//1–Cold Note
#define BQ24298_NFR_NTC_NOR_BIT0		0x00UL	//0-Normal
#define BQ24298_NFR_NTC_HN_BIT0			0x01UL	//1–Hot Note

typedef enum
{
	BQ24298_ISCR_ER = 0x00U,
	BQ24298_POCR_ER = 0x01U,
	BQ24298_CCCR_ER = 0x02U,
	BQ24298_PC_TCCR_ER = 0x03U,
	BQ24298_CVCR_ER = 0x04U,
	BQ24298_CT_TCR_ER = 0x05U,
	BQ24298_BV_TRCR_ER = 0x06U,
	BQ24298_MOCR_ER = 0x07U,
	BQ24298_OK = 0x10U
} BQ24298_Status_Typedef;

bool BQ24298_Read_Mem(uint8_t addMem, uint8_t *Buffer);
bool BQ24298_Write_Mem(uint8_t addMem, uint8_t Data);
BQ24298_Status_Typedef BQ24298_Update_Data(void);
uint8_t BQ24298_Check_data(uint8_t *buffer);

#endif /* INC_BQ24298_H_ */
