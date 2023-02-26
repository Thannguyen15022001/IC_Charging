/*
 * i2c_user.h
 *
 *  Created on: Jan 6, 2023
 *      Author: ADMIN
 */

#ifndef INC_I2C_USER_H_
#define INC_I2C_USER_H_

#include "define.h"

#define SET_BIT_USER(RES,BIT)		((RES) |= (BIT))
#define CLEAR_BIT_USER(RES,BIT)		((RES) &= ~(BIT))

typedef enum
{
	USER_OK = 0x00U, USER_ERROR = 0x01U, USER_BUSY = 0x02U, USER_TIMEOUT = 0x03U
} User_Status_Typedef;

void I2C1_Init();
User_Status_Typedef I2C_Read_Mem(I2C_Typedef *I2C, uint8_t Add, uint8_t Mem,
		uint8_t *buffer);
User_Status_Typedef I2C_Write_Mem(I2C_Typedef *I2C, uint8_t add, uint8_t mem,
		uint8_t data);

#endif /* INC_I2C_USER_H_ */
