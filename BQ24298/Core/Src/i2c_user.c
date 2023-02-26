/*
 * i2c_user.c
 *
 *  Created on: Jan 6, 2023
 *      Author: ADMIN
 */
#include "i2c_user.h"

void I2C1_Init()
{
	/*Enable clock of GPIOB on AHB bus */
	SET_BIT_USER(RCC_UR->AHBENR, RCC_AHBENR_GPIOB_EN);
	/*Configure Output Speed on PIN 6&7*/
	SET_BIT_USER(GPIOB_UR->OSPEEDR,
			(GPIO_OSPEEDER_OSPEEDR6_1 |GPIO_OSPEEDER_OSPEEDR7_1));
	/*Configure Output-Open-Drain mode PIN 6&7*/
	SET_BIT_USER(GPIOB_UR->OTYPER, (GPIO_OTYPER_OT_6 |GPIO_OTYPER_OT_7));
	/*Enable alternate mode of I2C*/
	SET_BIT_USER(GPIOB_UR->AFRL, GPIO_AFRL_AFSEL6_AF4);
	SET_BIT_USER(GPIOB_UR->AFRL, GPIO_AFRL_AFSEL7_AF4);
	/*Configure alternate function mode PIN 6&7 */
	SET_BIT_USER(GPIOB_UR->MODER, GPIO_MODER_MODER6_1);
	SET_BIT_USER(GPIOB_UR->MODER, GPIO_MODER_MODER7_1);
	/*Configure Pull-Up mode on PIN 6&7*/
	SET_BIT_USER(GPIOB_UR->PUPDR, GPIO_PUPDR_PUPDR6_0);
	SET_BIT_USER(GPIOB_UR->PUPDR, GPIO_PUPDR_PUPDR7_0);
	/*Configure I2C*/
	/*Enable clock of I2C on APB1 bus*/
	SET_BIT_USER(RCC_UR->APB1ENR, RCC_APB1ENR_I2C1_EN);
	/*Disable Peripheral of I2C*/
	CLEAR_BIT_USER(I2C1_UR->CR1, I2C_CR1_PE_EN);
	/*Reset I2C*/
	SET_BIT_USER(I2C1_UR->CR1, I2C_CR1_SWRST_EN);
	CLEAR_BIT_USER(I2C1_UR->CR1, I2C_CR1_SWRST_EN);
	/*Configure frequency of I2C*/
	SET_BIT_USER(I2C1_UR->CR2, I2C_CR2_FREQ_2M);
	/*Configure frame of Clock*/
	SET_BIT_USER(I2C1_UR->CCR, I2C_CCR_CCR_2M);
	SET_BIT_USER(I2C1_UR->TRISE, I2C_TRISE_TRISE_2M);
	/*Enable Peripheral of I2C*/
	SET_BIT_USER(I2C1_UR->CR1, I2C_CR1_PE_EN);
}

User_Status_Typedef I2C_Write_Mem(I2C_Typedef *I2C, uint8_t add, uint8_t mem,
		uint8_t data)
{
	uint16_t timeout = 0xffff;
	/*Wait for BUSY bit RESET*/
	while (I2C->SR1 & I2C_SR2_BUSY_EN)
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_BUSY;
		}
		else
		{
			timeout--;
		}
	};
	/*Acknowledge enable*/
	SET_BIT_USER(I2C->CR1, I2C_CR1_ACK_EN);
	/*Generate Start condition*/
	SET_BIT_USER(I2C->CR1, I2C_CR1_START_EN);
	/*Wait for SB bit SET*/
	while (!(I2C->SR1 & I2C_SR1_SB_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	};
	/*Clear bit SB*/
	I2C->SR1;
	/*Write down data for DR register*/
	I2C->DR = add;
	/*Wait for ADDR bit SET*/
	while (!(I2C->SR1 & I2C_SR1_ADDR_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	};
	/*Clear ADDR bit*/
	I2C->SR1;
	I2C->SR2;
	/*Wait for TXE bit SET*/
	while (!(I2C->SR1 & I2C_SR1_TXE_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	};
	/*Write down data for DR register*/
	I2C->DR = mem;
	/*Wait for TXE bit SET*/
	while (!(I2C->SR1 & I2C_SR1_TXE_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	};
	/*Write down data for DR register*/
	I2C->DR = data;
	/*Wait for BFT bit SET*/
	while (!(I2C->SR1 & I2C_SR1_BTF_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	};
	/*Generate STOP condition*/
	CLEAR_BIT_USER(I2C->CR1, I2C_CR1_ACK_EN);
	SET_BIT_USER(I2C->CR1, I2C_CR1_STOP_EN);
	return USER_OK;
}

User_Status_Typedef I2C_Read_Mem(I2C_Typedef *I2C, uint8_t Add, uint8_t Mem,
		uint8_t *buffer)
{
	uint16_t timeout = 0xffff;
	/*Wait for BUSY bit RESET*/
	while (I2C->SR1 & I2C_SR2_BUSY_EN)
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_BUSY;
		}
		else
		{
			timeout--;
		}
	}
	/*Acknowledge enable*/
	SET_BIT_USER(I2C->CR1, I2C_CR1_ACK_EN);
	/*Generate Start condition*/
	SET_BIT_USER(I2C->CR1, I2C_CR1_START_EN);
	/*Wait for SB bit SET*/
	while (!(I2C->SR1 & I2C_SR1_SB_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	}
	/*Clear bit SB*/
	I2C->SR1;
	/*Write down data for DR register*/
	I2C->DR = Add;
	/*Wait for ADDR bit SET*/
	while (!(I2C->SR1 & I2C_SR1_ADDR_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	}
	/*Clear ADDR bit*/
	I2C->SR1;
	I2C->SR2;
	/*Wait for TXE bit SET*/
	while (!(I2C->SR1 & I2C_SR1_TXE_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	}
	I2C->DR = Mem;
	/*Wait for TXE bit SET*/
	while (!(I2C->SR1 & I2C_SR1_TXE_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	}
	/*Generate Restart condition*/
	SET_BIT_USER(I2C->CR1, I2C_CR1_START_EN);
	/*Wait for SB bit SET*/
	while (!(I2C->SR1 & I2C_SR1_SB_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	}
	/*Clear bit SB*/
	I2C->SR1;
	Add = (Add | 0x01);
	I2C->DR = Add;
	/*Wait for ADDR bit SET*/
	while (!(I2C->SR1 & I2C_SR1_ADDR_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	}
	/*Acknowledge Disable - the Acknowledge disable must be performed during EV6 event, i.e. before clearing ADDR flag*/
	CLEAR_BIT_USER(I2C->CR1, I2C_CR1_ACK_EN);
	/*Clear ADDR bit*/
	I2C->SR1;
	I2C->SR2;
	/*Wait for RXE bit SET*/
	while (!(I2C->SR1 & I2C_SR1_RXNE_EN))
	{
		if (timeout <= 0)
		{
			timeout = 0xffff;
			return USER_TIMEOUT;
		}
		else
		{
			timeout--;
		}
	}
	/*Write  data from DR register into buffer*/
	*buffer = I2C->DR;
	/*Generate STOP condition*/
	SET_BIT_USER(I2C->CR1, I2C_CR1_STOP_EN);
	return USER_OK;
}

