/*
 * bq24298.c
 *
 *  Created on: Jan 5, 2023
 *      Author: Nguyễn Viết Thân
 */

#include "bq24298.h"

BQ24298_Status_Typedef BQ24298_Update_Data(void)
{
	/*uint8_t regValues[8] =
	 { BQ24298_ISCR_SEL, BQ24298_POCR_SEL, BQ24298_CCCR_SEL, BQ24298_PC_TCCR_SEL,
	 BQ24298_CVCR_SEL, BQ24298_CT_CTR_SEL, BQ24298_BV_TRCR_SEL,
	 BQ24298_MOCR_SEL };

	 for (uint8_t i = 0; i < 8; i++)
	 {
	 if (BQ24298_Write_Mem(i, regValues[i]) != true)
	 {
	 return BQ24298_ISCR_ER;
	 }
	 }
	 */
	/*Input Source Control Register*/
	if (BQ24298_Write_Mem( BQ24298_ISCR_ADD, BQ24298_ISCR_SEL) != true)
	{
		return BQ24298_ISCR_ER;
	}

	/*Power-On Configuration*/
	if (BQ24298_Write_Mem( BQ24298_POCR_ADD, BQ24298_POCR_SEL) != true)
	{
		return BQ24298_POCR_ER;
	}

	/*Charge Current Control*/
	if (BQ24298_Write_Mem(BQ24298_CCCR_ADD, BQ24298_CCCR_SEL) != true)
	{
		return BQ24298_CCCR_ER;
	}

	/*Pre-Charge/Termination Current Control*/
	if (BQ24298_Write_Mem(BQ24298_PC_TCCR_ADD, BQ24298_PC_TCCR_SEL) != true)
	{
		return BQ24298_PC_TCCR_ER;
	}

	/*Charge Voltage Control Register*/
	if (BQ24298_Write_Mem(BQ24298_CVCR_ADD, BQ24298_CVCR_SEL) != true)
	{
		return BQ24298_CVCR_ER;
	}

	/*Charge Termination/Timer Control Register*/
	if (BQ24298_Write_Mem(BQ24298_CT_TCR_ADD, BQ24298_CT_CTR_SEL) != true)
	{
		return BQ24298_CT_TCR_ER;
	}

	/*Boost Voltage/Thermal Regulation Control Register*/
	if (BQ24298_Write_Mem(BQ24298_BV_TRCR_ADD, BQ24298_BV_TRCR_SEL) != true)
	{
		return BQ24298_BV_TRCR_ER;
	}

	/*Misc Operation Control Register*/
	if (BQ24298_Write_Mem(BQ24298_MOCR_ADD, BQ24298_MOCR_SEL) != true)
	{
		return BQ24298_MOCR_ER;
	}
	return BQ24298_OK;

}
uint8_t BQ24298_Check_data(uint8_t *buffer)
{
	//uint8_t pBuffer[8];
	if (BQ24298_Read_Mem(BQ24298_ISCR_ADD, buffer) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_POCR_ADD, (buffer + 1)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_CCCR_ADD, (buffer + 2)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_PC_TCCR_ADD, (buffer + 3)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_CVCR_ADD, (buffer + 4)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_CT_TCR_ADD, (buffer + 5)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_BV_TRCR_ADD, (buffer + 6)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_MOCR_ADD, (buffer + 7)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ24298_SSR_ADD, (buffer + 8)) != true)
	{
		return 1;
	}
	if (BQ24298_Read_Mem(BQ2429_FAULT_ADD, (buffer + 9)) != true)
	{
		return 1;
	}

	/*	for (uint8_t i = 0; i < 9; i++)
	 {
	 if (BQ24298_Read_Mem(i, buffer + i) != true)
	 {
	 return 0;
	 }
	 else
	 {
	 return 1;
	 }
	 }*/

	return 0;
}

bool BQ24298_Write_Mem(uint8_t addMem, uint8_t data)
{
	uint8_t buffer = 0;
	I2C_Read_Mem(I2C1_UR, (uint8_t) BQ2429X_I2C_ADDR, addMem, &buffer);
	if (buffer != data)
	{
		if (I2C_Write_Mem(I2C1_UR, (uint8_t) BQ2429X_I2C_ADDR, addMem, data)
				== USER_OK)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool BQ24298_Read_Mem(uint8_t addMem, uint8_t *pBuffer)
{
	if (I2C_Read_Mem(I2C1_UR, (uint8_t) BQ2429X_I2C_ADDR, addMem, pBuffer)
			== USER_OK)
	{
		return true;
	}
	else
	{
		return false;
	}
}

