/*
 * define.h
 *
 *  Created on: Jan 6, 2023
 *      Author: Nguyen Viet Than
 */

#ifndef INC_DEFINE_H_
#define INC_DEFINE_H_

#include "stdint.h"

#define PER_MEM_BASE_UR								(0x40000000UL)
#define APB1_PER_MEM_BASE_UR 						(PER_MEM_BASE_UR)
#define APB2_PER_MEM_BASE_UR 						(PER_MEM_BASE_UR + 0x00010000UL)
#define AHB_PER_MEM_BASE_UR							(PER_MEM_BASE_UR + 0x00020000UL)
#define RCC_BASE_UR									(AHB_PER_MEM_BASE_UR + 0x00003800UL)

/*--------------------------------APB1 Peripheral------------------------------------- */
#define TIM2_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00000000UL)
#define TIM3_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00000400UL)
#define TIM4_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00000800UL)
#define TIM5_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00000C00UL)
#define TIM6_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00001000UL)
#define TIM7_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00001400UL)
#define LCD_BASE_UR									(APB1_PER_MEM_BASE_UR + 0x00002400UL)
#define RTC_BASE_UR									(APB1_PER_MEM_BASE_UR + 0x00002800UL)
#define WWDG_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00002C00UL)
#define IWDG_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00003000UL)
#define SPI2_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00003800UL)
#define SPI3_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00003C00UL)
#define UART2_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00004400UL)
#define UART3_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00004800UL)
#define UART4_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00004C00UL)
#define UART5_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00005000UL)
#define I2C1_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00005400UL)
#define I2C2_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00005800UL)

/*UAB*/
#define USB_FS_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00005C00UL)
#define USB_FSSRAM_BASE_UR							(APB1_PER_MEM_BASE_UR + 0x00006000UL)

#define PWR_BASE_UR									(APB1_PER_MEM_BASE_UR + 0x00007000UL)
#define DAC_BASE_UR									(APB1_PER_MEM_BASE_UR + 0x00007400UL)
#define OPAMP_BASE_UR								(APB1_PER_MEM_BASE_UR + 0x00007C5CUL)
#define RI_BASE_UR									(APB1_PER_MEM_BASE_UR + 0x00007C04UL)
#define COM_BASE_UR									(APB1_PER_MEM_BASE_UR + 0x00007C00UL)

/*-----------------------------------AHB Peripheral----------------------------------------*/
#define GPIOA_BASE_UR            					(AHB_PER_MEM_BASE_UR + 0x00000000UL)
#define GPIOB_BASE_UR            					(AHB_PER_MEM_BASE_UR + 0x00000400UL)
#define GPIOC_BASE_UR            					(AHBPERIPH_BASE_UR + 0x00000800UL)
#define GPIOD_BASE_UR            					(AHBPERIPH_BASE_UR + 0x00000C00UL)
#define GPIOE_BASE_UR            					(AHBPERIPH_BASE_UR + 0x00001000UL)
#define GPIOH_BASE_UR            					(AHBPERIPH_BASE_UR + 0x00001400UL)
#define CRC_BASE_UR              					(AHBPERIPH_BASE_UR + 0x00003000UL)
#define FLASH_R_BASE_UR          					(AHBPERIPH_BASE_UR + 0x00003C00UL)
#define OB_BASE_UR               					(0x1FF80000UL)
#define FLASHSIZE_BASE_UR        					(0x1FF800CCUL)
#define UID_BASE_UR              					(0x1FF800D0UL)
#define DMA1_BASE_UR             					(AHBPERIPH_BASE_UR + 0x00006000UL)
#define DMA1_Channel1_BASE_UR    					(DMA1_BASE_UR + 0x00000008UL)
#define DMA1_Channel2_BASE_UR    					(DMA1_BASE + 0x0000001CUL)
#define DMA1_Channel3_BASE_UR    					(DMA1_BASE_UR + 0x00000030UL)
#define DMA1_Channel4_BASE_UR    					(DMA1_BASE_UR + 0x00000044UL)
#define DMA1_Channel5_BASE_UR    					(DMA1_BASE_UR + 0x00000058UL)
#define DMA1_Channel6_BASE_UR    					(DMA1_BASE_UR + 0x0000006CUL)
#define DMA1_Channel7_BASE_UR    					(DMA1_BASE_UR + 0x00000080UL)
#define DMA2_BASE_UR             					(AHBPERIPH_BASE + 0x00006400UL)
#define DMA2_Channel1_BASE_UR    					(DMA2_BASE_UR + 0x00000008UL)
#define DMA2_Channel2_BASE_UR    					(DMA2_BASE_UR + 0x0000001CUL)
#define DMA2_Channel3_BASE_UR    					(DMA2_BASE_UR + 0x00000030UL)
#define DMA2_Channel4_BASE_UR    					(DMA2_BASE_UR + 0x00000044UL)
#define DMA2_Channel5_BASE_UR    					(DMA2_BASE_UR + 0x00000058UL)
#define DBGMCU_BASE_UR           					(0xE0042000UL)

/*-----------------------------------------------DEFINE GPIO BIT--------------------------------------------------------*/
/******************  Bits definition for GPIO_MODER register  ****************/
#define GPIO_MODER_MODER0_Pos                		(0U)
#define GPIO_MODER_MODER0_Msk                		(0x3UL << GPIO_MODER_MODER0_Pos)   /*!< 0x00000003 */
#define GPIO_MODER_MODER0                    		GPIO_MODER_MODER0_Msk
#define GPIO_MODER_MODER0_0                  		(0x1UL << GPIO_MODER_MODER0_Pos)   /*!< 0x00000001 */
#define GPIO_MODER_MODER0_1                  		(0x2UL << GPIO_MODER_MODER0_Pos)   /*!< 0x00000002 */

#define GPIO_MODER_MODER1_Pos                		(2U)
#define GPIO_MODER_MODER1_Msk                		(0x3UL << GPIO_MODER_MODER1_Pos)   /*!< 0x0000000C */
#define GPIO_MODER_MODER1                    		GPIO_MODER_MODER1_Msk
#define GPIO_MODER_MODER1_0                  		(0x1UL << GPIO_MODER_MODER1_Pos)   /*!< 0x00000004 */
#define GPIO_MODER_MODER1_1                  		(0x2UL << GPIO_MODER_MODER1_Pos)   /*!< 0x00000008 */

#define GPIO_MODER_MODER2_Pos                		(4U)
#define GPIO_MODER_MODER2_Msk                		(0x3UL << GPIO_MODER_MODER2_Pos)   /*!< 0x00000030 */
#define GPIO_MODER_MODER2                    		GPIO_MODER_MODER2_Msk
#define GPIO_MODER_MODER2_0                  		(0x1UL << GPIO_MODER_MODER2_Pos)   /*!< 0x00000010 */
#define GPIO_MODER_MODER2_1                  		(0x2UL << GPIO_MODER_MODER2_Pos)   /*!< 0x00000020 */

#define GPIO_MODER_MODER3_Pos                		(6U)
#define GPIO_MODER_MODER3_Msk                		(0x3UL << GPIO_MODER_MODER3_Pos)   /*!< 0x000000C0 */
#define GPIO_MODER_MODER3                    		GPIO_MODER_MODER3_Msk
#define GPIO_MODER_MODER3_0                  		(0x1UL << GPIO_MODER_MODER3_Pos)   /*!< 0x00000040 */
#define GPIO_MODER_MODER3_1                  		(0x2UL << GPIO_MODER_MODER3_Pos)   /*!< 0x00000080 */

#define GPIO_MODER_MODER4_Pos                		(8U)
#define GPIO_MODER_MODER4_Msk                		(0x3UL << GPIO_MODER_MODER4_Pos)   /*!< 0x00000300 */
#define GPIO_MODER_MODER4                    		GPIO_MODER_MODER4_Msk
#define GPIO_MODER_MODER4_0                  		(0x1UL << GPIO_MODER_MODER4_Pos)   /*!< 0x00000100 */
#define GPIO_MODER_MODER4_1                  		(0x2UL << GPIO_MODER_MODER4_Pos)   /*!< 0x00000200 */

#define GPIO_MODER_MODER5_Pos                		(10U)
#define GPIO_MODER_MODER5_Msk                		(0x3UL << GPIO_MODER_MODER5_Pos)   /*!< 0x00000C00 */
#define GPIO_MODER_MODER5                   	 	GPIO_MODER_MODER5_Msk
#define GPIO_MODER_MODER5_0                  		(0x1UL << GPIO_MODER_MODER5_Pos)   /*!< 0x00000400 */
#define GPIO_MODER_MODER5_1                  		(0x2UL << GPIO_MODER_MODER5_Pos)   /*!< 0x00000800 */

#define GPIO_MODER_MODER6_Pos                		(12U)
#define GPIO_MODER_MODER6_Msk                		(0x3UL << GPIO_MODER_MODER6_Pos)   /*!< 0x00003000 */
#define GPIO_MODER_MODER6                    		GPIO_MODER_MODER6_Msk
#define GPIO_MODER_MODER6_0                  		(0x1UL << GPIO_MODER_MODER6_Pos)   /*!< 0x00001000 */
#define GPIO_MODER_MODER6_1                  		(0x2UL << GPIO_MODER_MODER6_Pos)   /*!< 0x00002000 */

#define GPIO_MODER_MODER7_Pos                		(14U)
#define GPIO_MODER_MODER7_Msk                		(0x3UL << GPIO_MODER_MODER7_Pos)   /*!< 0x0000C000 */
#define GPIO_MODER_MODER7                    		GPIO_MODER_MODER7_Msk
#define GPIO_MODER_MODER7_0                  		(0x1UL << GPIO_MODER_MODER7_Pos)   /*!< 0x00004000 */
#define GPIO_MODER_MODER7_1                  		(0x2UL << GPIO_MODER_MODER7_Pos)   /*!< 0x00008000 */

#define GPIO_MODER_MODER8_Pos                		(16U)
#define GPIO_MODER_MODER8_Msk                		(0x3UL << GPIO_MODER_MODER8_Pos)   /*!< 0x00030000 */
#define GPIO_MODER_MODER8                    		GPIO_MODER_MODER8_Msk
#define GPIO_MODER_MODER8_0                  		(0x1UL << GPIO_MODER_MODER8_Pos)   /*!< 0x00010000 */
#define GPIO_MODER_MODER8_1                  		(0x2UL << GPIO_MODER_MODER8_Pos)   /*!< 0x00020000 */

#define GPIO_MODER_MODER9_Pos                		(18U)
#define GPIO_MODER_MODER9_Msk                		(0x3UL << GPIO_MODER_MODER9_Pos)   /*!< 0x000C0000 */
#define GPIO_MODER_MODER9                    		GPIO_MODER_MODER9_Msk
#define GPIO_MODER_MODER9_0                  		(0x1UL << GPIO_MODER_MODER9_Pos)   /*!< 0x00040000 */
#define GPIO_MODER_MODER9_1                  		(0x2UL << GPIO_MODER_MODER9_Pos)   /*!< 0x00080000 */

#define GPIO_MODER_MODER10_Pos               		(20U)
#define GPIO_MODER_MODER10_Msk               		(0x3UL << GPIO_MODER_MODER10_Pos)  /*!< 0x00300000 */
#define GPIO_MODER_MODER10                   		GPIO_MODER_MODER10_Msk
#define GPIO_MODER_MODER10_0                 		(0x1UL << GPIO_MODER_MODER10_Pos)  /*!< 0x00100000 */
#define GPIO_MODER_MODER10_1                 		(0x2UL << GPIO_MODER_MODER10_Pos)  /*!< 0x00200000 */

#define GPIO_MODER_MODER11_Pos               		(22U)
#define GPIO_MODER_MODER11_Msk               		(0x3UL << GPIO_MODER_MODER11_Pos)  /*!< 0x00C00000 */
#define GPIO_MODER_MODER11                   		GPIO_MODER_MODER11_Msk
#define GPIO_MODER_MODER11_0                 		(0x1UL << GPIO_MODER_MODER11_Pos)  /*!< 0x00400000 */
#define GPIO_MODER_MODER11_1                 		(0x2UL << GPIO_MODER_MODER11_Pos)  /*!< 0x00800000 */

#define GPIO_MODER_MODER12_Pos               		(24U)
#define GPIO_MODER_MODER12_Msk               		(0x3UL << GPIO_MODER_MODER12_Pos)  /*!< 0x03000000 */
#define GPIO_MODER_MODER12                   		GPIO_MODER_MODER12_Msk
#define GPIO_MODER_MODER12_0                 		(0x1UL << GPIO_MODER_MODER12_Pos)  /*!< 0x01000000 */
#define GPIO_MODER_MODER12_1                 		(0x2UL << GPIO_MODER_MODER12_Pos)  /*!< 0x02000000 */

#define GPIO_MODER_MODER13_Pos               		(26U)
#define GPIO_MODER_MODER13_Msk               		(0x3UL << GPIO_MODER_MODER13_Pos)  /*!< 0x0C000000 */
#define GPIO_MODER_MODER13                   		GPIO_MODER_MODER13_Msk
#define GPIO_MODER_MODER13_0                 		(0x1UL << GPIO_MODER_MODER13_Pos)  /*!< 0x04000000 */
#define GPIO_MODER_MODER13_1                 		(0x2UL << GPIO_MODER_MODER13_Pos)  /*!< 0x08000000 */

#define GPIO_MODER_MODER14_Pos               		(28U)
#define GPIO_MODER_MODER14_Msk               		(0x3UL << GPIO_MODER_MODER14_Pos)  /*!< 0x30000000 */
#define GPIO_MODER_MODER14                   		GPIO_MODER_MODER14_Msk
#define GPIO_MODER_MODER14_0                 		(0x1UL << GPIO_MODER_MODER14_Pos)  /*!< 0x10000000 */
#define GPIO_MODER_MODER14_1                 		(0x2UL << GPIO_MODER_MODER14_Pos)  /*!< 0x20000000 */

#define GPIO_MODER_MODER15_Pos               		(30U)
#define GPIO_MODER_MODER15_Msk               		(0x3UL << GPIO_MODER_MODER15_Pos)  /*!< 0xC0000000 */
#define GPIO_MODER_MODER15                   		GPIO_MODER_MODER15_Msk
#define GPIO_MODER_MODER15_0                 		(0x1UL << GPIO_MODER_MODER15_Pos)  /*!< 0x40000000 */
#define GPIO_MODER_MODER15_1                 		(0x2UL << GPIO_MODER_MODER15_Pos)  /*!< 0x80000000 */

/******************  Bits definition for GPIO_OTYPER register  ****************/
#define GPIO_OTYPER_OT_0                     (0x00000001U)
#define GPIO_OTYPER_OT_1                     (0x00000002U)
#define GPIO_OTYPER_OT_2                     (0x00000004U)
#define GPIO_OTYPER_OT_3                     (0x00000008U)
#define GPIO_OTYPER_OT_4                     (0x00000010U)
#define GPIO_OTYPER_OT_5                     (0x00000020U)
#define GPIO_OTYPER_OT_6                     (0x00000040U)
#define GPIO_OTYPER_OT_7                     (0x00000080U)
#define GPIO_OTYPER_OT_8                     (0x00000100U)
#define GPIO_OTYPER_OT_9                     (0x00000200U)
#define GPIO_OTYPER_OT_10                    (0x00000400U)
#define GPIO_OTYPER_OT_11                    (0x00000800U)
#define GPIO_OTYPER_OT_12                    (0x00001000U)
#define GPIO_OTYPER_OT_13                    (0x00002000U)
#define GPIO_OTYPER_OT_14                    (0x00004000U)
#define GPIO_OTYPER_OT_15                    (0x00008000U)

/******************  Bits definition for GPIO_OSPEEDR register  ***************/
#define GPIO_OSPEEDER_OSPEEDR0_Pos           (0U)
#define GPIO_OSPEEDER_OSPEEDR0_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR0_Pos) /*!< 0x00000003 */
#define GPIO_OSPEEDER_OSPEEDR0               GPIO_OSPEEDER_OSPEEDR0_Msk
#define GPIO_OSPEEDER_OSPEEDR0_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR0_Pos) /*!< 0x00000001 */
#define GPIO_OSPEEDER_OSPEEDR0_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR0_Pos) /*!< 0x00000002 */

#define GPIO_OSPEEDER_OSPEEDR1_Pos           (2U)
#define GPIO_OSPEEDER_OSPEEDR1_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR1_Pos) /*!< 0x0000000C */
#define GPIO_OSPEEDER_OSPEEDR1               GPIO_OSPEEDER_OSPEEDR1_Msk
#define GPIO_OSPEEDER_OSPEEDR1_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR1_Pos) /*!< 0x00000004 */
#define GPIO_OSPEEDER_OSPEEDR1_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR1_Pos) /*!< 0x00000008 */

#define GPIO_OSPEEDER_OSPEEDR2_Pos           (4U)
#define GPIO_OSPEEDER_OSPEEDR2_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR2_Pos) /*!< 0x00000030 */
#define GPIO_OSPEEDER_OSPEEDR2               GPIO_OSPEEDER_OSPEEDR2_Msk
#define GPIO_OSPEEDER_OSPEEDR2_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR2_Pos) /*!< 0x00000010 */
#define GPIO_OSPEEDER_OSPEEDR2_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR2_Pos) /*!< 0x00000020 */

#define GPIO_OSPEEDER_OSPEEDR3_Pos           (6U)
#define GPIO_OSPEEDER_OSPEEDR3_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR3_Pos) /*!< 0x000000C0 */
#define GPIO_OSPEEDER_OSPEEDR3               GPIO_OSPEEDER_OSPEEDR3_Msk
#define GPIO_OSPEEDER_OSPEEDR3_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR3_Pos) /*!< 0x00000040 */
#define GPIO_OSPEEDER_OSPEEDR3_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR3_Pos) /*!< 0x00000080 */

#define GPIO_OSPEEDER_OSPEEDR4_Pos           (8U)
#define GPIO_OSPEEDER_OSPEEDR4_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR4_Pos) /*!< 0x00000300 */
#define GPIO_OSPEEDER_OSPEEDR4               GPIO_OSPEEDER_OSPEEDR4_Msk
#define GPIO_OSPEEDER_OSPEEDR4_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR4_Pos) /*!< 0x00000100 */
#define GPIO_OSPEEDER_OSPEEDR4_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR4_Pos) /*!< 0x00000200 */

#define GPIO_OSPEEDER_OSPEEDR5_Pos           (10U)
#define GPIO_OSPEEDER_OSPEEDR5_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR5_Pos) /*!< 0x00000C00 */
#define GPIO_OSPEEDER_OSPEEDR5               GPIO_OSPEEDER_OSPEEDR5_Msk
#define GPIO_OSPEEDER_OSPEEDR5_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR5_Pos) /*!< 0x00000400 */
#define GPIO_OSPEEDER_OSPEEDR5_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR5_Pos) /*!< 0x00000800 */

#define GPIO_OSPEEDER_OSPEEDR6_Pos           (12U)
#define GPIO_OSPEEDER_OSPEEDR6_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR6_Pos) /*!< 0x00003000 */
#define GPIO_OSPEEDER_OSPEEDR6               GPIO_OSPEEDER_OSPEEDR6_Msk
#define GPIO_OSPEEDER_OSPEEDR6_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR6_Pos) /*!< 0x00001000 */
#define GPIO_OSPEEDER_OSPEEDR6_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR6_Pos) /*!< 0x00002000 */

#define GPIO_OSPEEDER_OSPEEDR7_Pos           (14U)
#define GPIO_OSPEEDER_OSPEEDR7_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR7_Pos) /*!< 0x0000C000 */
#define GPIO_OSPEEDER_OSPEEDR7               GPIO_OSPEEDER_OSPEEDR7_Msk
#define GPIO_OSPEEDER_OSPEEDR7_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR7_Pos) /*!< 0x00004000 */
#define GPIO_OSPEEDER_OSPEEDR7_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR7_Pos) /*!< 0x00008000 */

#define GPIO_OSPEEDER_OSPEEDR8_Pos           (16U)
#define GPIO_OSPEEDER_OSPEEDR8_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR8_Pos) /*!< 0x00030000 */
#define GPIO_OSPEEDER_OSPEEDR8               GPIO_OSPEEDER_OSPEEDR8_Msk
#define GPIO_OSPEEDER_OSPEEDR8_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR8_Pos) /*!< 0x00010000 */
#define GPIO_OSPEEDER_OSPEEDR8_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR8_Pos) /*!< 0x00020000 */

#define GPIO_OSPEEDER_OSPEEDR9_Pos           (18U)
#define GPIO_OSPEEDER_OSPEEDR9_Msk           (0x3UL << GPIO_OSPEEDER_OSPEEDR9_Pos) /*!< 0x000C0000 */
#define GPIO_OSPEEDER_OSPEEDR9               GPIO_OSPEEDER_OSPEEDR9_Msk
#define GPIO_OSPEEDER_OSPEEDR9_0             (0x1UL << GPIO_OSPEEDER_OSPEEDR9_Pos) /*!< 0x00040000 */
#define GPIO_OSPEEDER_OSPEEDR9_1             (0x2UL << GPIO_OSPEEDER_OSPEEDR9_Pos) /*!< 0x00080000 */

#define GPIO_OSPEEDER_OSPEEDR10_Pos          (20U)
#define GPIO_OSPEEDER_OSPEEDR10_Msk          (0x3UL << GPIO_OSPEEDER_OSPEEDR10_Pos) /*!< 0x00300000 */
#define GPIO_OSPEEDER_OSPEEDR10              GPIO_OSPEEDER_OSPEEDR10_Msk
#define GPIO_OSPEEDER_OSPEEDR10_0            (0x1UL << GPIO_OSPEEDER_OSPEEDR10_Pos) /*!< 0x00100000 */
#define GPIO_OSPEEDER_OSPEEDR10_1            (0x2UL << GPIO_OSPEEDER_OSPEEDR10_Pos) /*!< 0x00200000 */

#define GPIO_OSPEEDER_OSPEEDR11_Pos          (22U)
#define GPIO_OSPEEDER_OSPEEDR11_Msk          (0x3UL << GPIO_OSPEEDER_OSPEEDR11_Pos) /*!< 0x00C00000 */
#define GPIO_OSPEEDER_OSPEEDR11              GPIO_OSPEEDER_OSPEEDR11_Msk
#define GPIO_OSPEEDER_OSPEEDR11_0            (0x1UL << GPIO_OSPEEDER_OSPEEDR11_Pos) /*!< 0x00400000 */
#define GPIO_OSPEEDER_OSPEEDR11_1            (0x2UL << GPIO_OSPEEDER_OSPEEDR11_Pos) /*!< 0x00800000 */

#define GPIO_OSPEEDER_OSPEEDR12_Pos          (24U)
#define GPIO_OSPEEDER_OSPEEDR12_Msk          (0x3UL << GPIO_OSPEEDER_OSPEEDR12_Pos) /*!< 0x03000000 */
#define GPIO_OSPEEDER_OSPEEDR12              GPIO_OSPEEDER_OSPEEDR12_Msk
#define GPIO_OSPEEDER_OSPEEDR12_0            (0x1UL << GPIO_OSPEEDER_OSPEEDR12_Pos) /*!< 0x01000000 */
#define GPIO_OSPEEDER_OSPEEDR12_1            (0x2UL << GPIO_OSPEEDER_OSPEEDR12_Pos) /*!< 0x02000000 */

#define GPIO_OSPEEDER_OSPEEDR13_Pos          (26U)
#define GPIO_OSPEEDER_OSPEEDR13_Msk          (0x3UL << GPIO_OSPEEDER_OSPEEDR13_Pos) /*!< 0x0C000000 */
#define GPIO_OSPEEDER_OSPEEDR13              GPIO_OSPEEDER_OSPEEDR13_Msk
#define GPIO_OSPEEDER_OSPEEDR13_0            (0x1UL << GPIO_OSPEEDER_OSPEEDR13_Pos) /*!< 0x04000000 */
#define GPIO_OSPEEDER_OSPEEDR13_1            (0x2UL << GPIO_OSPEEDER_OSPEEDR13_Pos) /*!< 0x08000000 */

#define GPIO_OSPEEDER_OSPEEDR14_Pos          (28U)
#define GPIO_OSPEEDER_OSPEEDR14_Msk          (0x3UL << GPIO_OSPEEDER_OSPEEDR14_Pos) /*!< 0x30000000 */
#define GPIO_OSPEEDER_OSPEEDR14              GPIO_OSPEEDER_OSPEEDR14_Msk
#define GPIO_OSPEEDER_OSPEEDR14_0            (0x1UL << GPIO_OSPEEDER_OSPEEDR14_Pos) /*!< 0x10000000 */
#define GPIO_OSPEEDER_OSPEEDR14_1            (0x2UL << GPIO_OSPEEDER_OSPEEDR14_Pos) /*!< 0x20000000 */

#define GPIO_OSPEEDER_OSPEEDR15_Pos          (30U)
#define GPIO_OSPEEDER_OSPEEDR15_Msk          (0x3UL << GPIO_OSPEEDER_OSPEEDR15_Pos) /*!< 0xC0000000 */
#define GPIO_OSPEEDER_OSPEEDR15              GPIO_OSPEEDER_OSPEEDR15_Msk
#define GPIO_OSPEEDER_OSPEEDR15_0            (0x1UL << GPIO_OSPEEDER_OSPEEDR15_Pos) /*!< 0x40000000 */
#define GPIO_OSPEEDER_OSPEEDR15_1            (0x2UL << GPIO_OSPEEDER_OSPEEDR15_Pos) /*!< 0x80000000 */

/******************  Bits definition for GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_PUPDR0_Pos                (0U)
#define GPIO_PUPDR_PUPDR0_Msk                (0x3UL << GPIO_PUPDR_PUPDR0_Pos)   /*!< 0x00000003 */
#define GPIO_PUPDR_PUPDR0                    GPIO_PUPDR_PUPDR0_Msk
#define GPIO_PUPDR_PUPDR0_0                  (0x1UL << GPIO_PUPDR_PUPDR0_Pos)   /*!< 0x00000001 */
#define GPIO_PUPDR_PUPDR0_1                  (0x2UL << GPIO_PUPDR_PUPDR0_Pos)   /*!< 0x00000002 */

#define GPIO_PUPDR_PUPDR1_Pos                (2U)
#define GPIO_PUPDR_PUPDR1_Msk                (0x3UL << GPIO_PUPDR_PUPDR1_Pos)   /*!< 0x0000000C */
#define GPIO_PUPDR_PUPDR1                    GPIO_PUPDR_PUPDR1_Msk
#define GPIO_PUPDR_PUPDR1_0                  (0x1UL << GPIO_PUPDR_PUPDR1_Pos)   /*!< 0x00000004 */
#define GPIO_PUPDR_PUPDR1_1                  (0x2UL << GPIO_PUPDR_PUPDR1_Pos)   /*!< 0x00000008 */

#define GPIO_PUPDR_PUPDR2_Pos                (4U)
#define GPIO_PUPDR_PUPDR2_Msk                (0x3UL << GPIO_PUPDR_PUPDR2_Pos)   /*!< 0x00000030 */
#define GPIO_PUPDR_PUPDR2                    GPIO_PUPDR_PUPDR2_Msk
#define GPIO_PUPDR_PUPDR2_0                  (0x1UL << GPIO_PUPDR_PUPDR2_Pos)   /*!< 0x00000010 */
#define GPIO_PUPDR_PUPDR2_1                  (0x2UL << GPIO_PUPDR_PUPDR2_Pos)   /*!< 0x00000020 */

#define GPIO_PUPDR_PUPDR3_Pos                (6U)
#define GPIO_PUPDR_PUPDR3_Msk                (0x3UL << GPIO_PUPDR_PUPDR3_Pos)   /*!< 0x000000C0 */
#define GPIO_PUPDR_PUPDR3                    GPIO_PUPDR_PUPDR3_Msk
#define GPIO_PUPDR_PUPDR3_0                  (0x1UL << GPIO_PUPDR_PUPDR3_Pos)   /*!< 0x00000040 */
#define GPIO_PUPDR_PUPDR3_1                  (0x2UL << GPIO_PUPDR_PUPDR3_Pos)   /*!< 0x00000080 */

#define GPIO_PUPDR_PUPDR4_Pos                (8U)
#define GPIO_PUPDR_PUPDR4_Msk                (0x3UL << GPIO_PUPDR_PUPDR4_Pos)   /*!< 0x00000300 */
#define GPIO_PUPDR_PUPDR4                    GPIO_PUPDR_PUPDR4_Msk
#define GPIO_PUPDR_PUPDR4_0                  (0x1UL << GPIO_PUPDR_PUPDR4_Pos)   /*!< 0x00000100 */
#define GPIO_PUPDR_PUPDR4_1                  (0x2UL << GPIO_PUPDR_PUPDR4_Pos)   /*!< 0x00000200 */

#define GPIO_PUPDR_PUPDR5_Pos                (10U)
#define GPIO_PUPDR_PUPDR5_Msk                (0x3UL << GPIO_PUPDR_PUPDR5_Pos)   /*!< 0x00000C00 */
#define GPIO_PUPDR_PUPDR5                    GPIO_PUPDR_PUPDR5_Msk
#define GPIO_PUPDR_PUPDR5_0                  (0x1UL << GPIO_PUPDR_PUPDR5_Pos)   /*!< 0x00000400 */
#define GPIO_PUPDR_PUPDR5_1                  (0x2UL << GPIO_PUPDR_PUPDR5_Pos)   /*!< 0x00000800 */

#define GPIO_PUPDR_PUPDR6_Pos                (12U)
#define GPIO_PUPDR_PUPDR6_Msk                (0x3UL << GPIO_PUPDR_PUPDR6_Pos)   /*!< 0x00003000 */
#define GPIO_PUPDR_PUPDR6                    GPIO_PUPDR_PUPDR6_Msk
#define GPIO_PUPDR_PUPDR6_0                  (0x1UL << GPIO_PUPDR_PUPDR6_Pos)   /*!< 0x00001000 */
#define GPIO_PUPDR_PUPDR6_1                  (0x2UL << GPIO_PUPDR_PUPDR6_Pos)   /*!< 0x00002000 */

#define GPIO_PUPDR_PUPDR7_Pos                (14U)
#define GPIO_PUPDR_PUPDR7_Msk                (0x3UL << GPIO_PUPDR_PUPDR7_Pos)   /*!< 0x0000C000 */
#define GPIO_PUPDR_PUPDR7                    GPIO_PUPDR_PUPDR7_Msk
#define GPIO_PUPDR_PUPDR7_0                  (0x1UL << GPIO_PUPDR_PUPDR7_Pos)   /*!< 0x00004000 */
#define GPIO_PUPDR_PUPDR7_1                  (0x2UL << GPIO_PUPDR_PUPDR7_Pos)   /*!< 0x00008000 */

#define GPIO_PUPDR_PUPDR8_Pos                (16U)
#define GPIO_PUPDR_PUPDR8_Msk                (0x3UL << GPIO_PUPDR_PUPDR8_Pos)   /*!< 0x00030000 */
#define GPIO_PUPDR_PUPDR8                    GPIO_PUPDR_PUPDR8_Msk
#define GPIO_PUPDR_PUPDR8_0                  (0x1UL << GPIO_PUPDR_PUPDR8_Pos)   /*!< 0x00010000 */
#define GPIO_PUPDR_PUPDR8_1                  (0x2UL << GPIO_PUPDR_PUPDR8_Pos)   /*!< 0x00020000 */

#define GPIO_PUPDR_PUPDR9_Pos                (18U)
#define GPIO_PUPDR_PUPDR9_Msk                (0x3UL << GPIO_PUPDR_PUPDR9_Pos)   /*!< 0x000C0000 */
#define GPIO_PUPDR_PUPDR9                    GPIO_PUPDR_PUPDR9_Msk
#define GPIO_PUPDR_PUPDR9_0                  (0x1UL << GPIO_PUPDR_PUPDR9_Pos)   /*!< 0x00040000 */
#define GPIO_PUPDR_PUPDR9_1                  (0x2UL << GPIO_PUPDR_PUPDR9_Pos)   /*!< 0x00080000 */

#define GPIO_PUPDR_PUPDR10_Pos               (20U)
#define GPIO_PUPDR_PUPDR10_Msk               (0x3UL << GPIO_PUPDR_PUPDR10_Pos)  /*!< 0x00300000 */
#define GPIO_PUPDR_PUPDR10                   GPIO_PUPDR_PUPDR10_Msk
#define GPIO_PUPDR_PUPDR10_0                 (0x1UL << GPIO_PUPDR_PUPDR10_Pos)  /*!< 0x00100000 */
#define GPIO_PUPDR_PUPDR10_1                 (0x2UL << GPIO_PUPDR_PUPDR10_Pos)  /*!< 0x00200000 */

#define GPIO_PUPDR_PUPDR11_Pos               (22U)
#define GPIO_PUPDR_PUPDR11_Msk               (0x3UL << GPIO_PUPDR_PUPDR11_Pos)  /*!< 0x00C00000 */
#define GPIO_PUPDR_PUPDR11                   GPIO_PUPDR_PUPDR11_Msk
#define GPIO_PUPDR_PUPDR11_0                 (0x1UL << GPIO_PUPDR_PUPDR11_Pos)  /*!< 0x00400000 */
#define GPIO_PUPDR_PUPDR11_1                 (0x2UL << GPIO_PUPDR_PUPDR11_Pos)  /*!< 0x00800000 */

#define GPIO_PUPDR_PUPDR12_Pos               (24U)
#define GPIO_PUPDR_PUPDR12_Msk               (0x3UL << GPIO_PUPDR_PUPDR12_Pos)  /*!< 0x03000000 */
#define GPIO_PUPDR_PUPDR12                   GPIO_PUPDR_PUPDR12_Msk
#define GPIO_PUPDR_PUPDR12_0                 (0x1UL << GPIO_PUPDR_PUPDR12_Pos)  /*!< 0x01000000 */
#define GPIO_PUPDR_PUPDR12_1                 (0x2UL << GPIO_PUPDR_PUPDR12_Pos)  /*!< 0x02000000 */

#define GPIO_PUPDR_PUPDR13_Pos               (26U)
#define GPIO_PUPDR_PUPDR13_Msk               (0x3UL << GPIO_PUPDR_PUPDR13_Pos)  /*!< 0x0C000000 */
#define GPIO_PUPDR_PUPDR13                   GPIO_PUPDR_PUPDR13_Msk
#define GPIO_PUPDR_PUPDR13_0                 (0x1UL << GPIO_PUPDR_PUPDR13_Pos)  /*!< 0x04000000 */
#define GPIO_PUPDR_PUPDR13_1                 (0x2UL << GPIO_PUPDR_PUPDR13_Pos)  /*!< 0x08000000 */

#define GPIO_PUPDR_PUPDR14_Pos               (28U)
#define GPIO_PUPDR_PUPDR14_Msk               (0x3UL << GPIO_PUPDR_PUPDR14_Pos)  /*!< 0x30000000 */
#define GPIO_PUPDR_PUPDR14                   GPIO_PUPDR_PUPDR14_Msk
#define GPIO_PUPDR_PUPDR14_0                 (0x1UL << GPIO_PUPDR_PUPDR14_Pos)  /*!< 0x10000000 */
#define GPIO_PUPDR_PUPDR14_1                 (0x2UL << GPIO_PUPDR_PUPDR14_Pos)  /*!< 0x20000000 */
#define GPIO_PUPDR_PUPDR15_Pos               (30U)
#define GPIO_PUPDR_PUPDR15_Msk               (0x3UL << GPIO_PUPDR_PUPDR15_Pos)  /*!< 0xC0000000 */
#define GPIO_PUPDR_PUPDR15                   GPIO_PUPDR_PUPDR15_Msk
#define GPIO_PUPDR_PUPDR15_0                 (0x1UL << GPIO_PUPDR_PUPDR15_Pos)  /*!< 0x40000000 */
#define GPIO_PUPDR_PUPDR15_1                 (0x2UL << GPIO_PUPDR_PUPDR15_Pos)  /*!< 0x80000000 */

/****************** Bit definition for GPIOx_IDR register  ********************/

/****************** Bit definition for GPIOx_ODR register  ********************/

/****************** Bit definition for GPIOx_BSRR register  ********************/

/****************** Bit definition for GPIOx_LCKR register  ********************/

/****************** Bit definition for GPIOx_AFRL register  ********************/
#define GPIO_AFRL_AFSEL0_Pos                  (0U)
#define GPIO_AFRL_AFSEL0_Msk                  (0xFUL << GPIO_AFRL_AFSEL0_Pos)     /*!< 0x0000000F */
#define GPIO_AFRL_AFSEL0                      GPIO_AFRL_AFSEL0_Msk
#define GPIO_AFRL_AFSEL1_Pos                  (4U)
#define GPIO_AFRL_AFSEL1_Msk                  (0xFUL << GPIO_AFRL_AFSEL1_Pos)     /*!< 0x000000F0 */
#define GPIO_AFRL_AFSEL1                      GPIO_AFRL_AFSEL1_Msk
#define GPIO_AFRL_AFSEL2_Pos                  (8U)
#define GPIO_AFRL_AFSEL2_Msk                  (0xFUL << GPIO_AFRL_AFSEL2_Pos)     /*!< 0x00000F00 */
#define GPIO_AFRL_AFSEL2                      GPIO_AFRL_AFSEL2_Msk
#define GPIO_AFRL_AFSEL3_Pos                  (12U)
#define GPIO_AFRL_AFSEL3_Msk                  (0xFUL << GPIO_AFRL_AFSEL3_Pos)     /*!< 0x0000F000 */
#define GPIO_AFRL_AFSEL3                      GPIO_AFRL_AFSEL3_Msk
#define GPIO_AFRL_AFSEL4_Pos                  (16U)
#define GPIO_AFRL_AFSEL4_Msk                  (0xFUL << GPIO_AFRL_AFSEL4_Pos)     /*!< 0x000F0000 */
#define GPIO_AFRL_AFSEL4                      GPIO_AFRL_AFSEL4_Msk
#define GPIO_AFRL_AFSEL5_Pos                  (20U)
#define GPIO_AFRL_AFSEL5_Msk                  (0xFUL << GPIO_AFRL_AFSEL5_Pos)     /*!< 0x00F00000 */
#define GPIO_AFRL_AFSEL5                      GPIO_AFRL_AFSEL5_Msk
#define GPIO_AFRL_AFSEL6_Pos                  (24U)
#define GPIO_AFRL_AFSEL6_Msk                  (0xFUL << GPIO_AFRL_AFSEL6_Pos)     /*!< 0x0F000000 */
#define GPIO_AFRL_AFSEL6                      GPIO_AFRL_AFSEL6_Msk
#define GPIO_AFRL_AFSEL7_Pos                  (28U)
#define GPIO_AFRL_AFSEL7_Msk                  (0xFUL << GPIO_AFRL_AFSEL7_Pos)     /*!< 0xF0000000 */
#define GPIO_AFRL_AFSEL7                      GPIO_AFRL_AFSEL7_Msk
/*---------------------------------------------for I2C-------------------------------------------------*/
#define GPIO_AFRL_AFSEL6_AF4				  (0x4UL << GPIO_AFRL_AFSEL6_Pos)
#define GPIO_AFRL_AFSEL7_AF4				  (0x4UL << GPIO_AFRL_AFSEL7_Pos)

/****************** Bit definition for GPIOx_AFRH register  ********************/
#define GPIO_AFRH_AFSEL8_Pos                  (0U)
#define GPIO_AFRH_AFSEL8_Msk                  (0xFUL << GPIO_AFRH_AFSEL8_Pos)     /*!< 0x0000000F */
#define GPIO_AFRH_AFSEL8                      GPIO_AFRH_AFSEL8_Msk
#define GPIO_AFRH_AFSEL9_Pos                  (4U)
#define GPIO_AFRH_AFSEL9_Msk                  (0xFUL << GPIO_AFRH_AFSEL9_Pos)     /*!< 0x000000F0 */
#define GPIO_AFRH_AFSEL9                      GPIO_AFRH_AFSEL9_Msk
#define GPIO_AFRH_AFSEL10_Pos                  (8U)
#define GPIO_AFRH_AFSEL10_Msk                  (0xFUL << GPIO_AFRH_AFSEL10_Pos)     /*!< 0x00000F00 */
#define GPIO_AFRH_AFSEL10                      GPIO_AFRH_AFSEL10_Msk
#define GPIO_AFRH_AFSEL11_Pos                  (12U)
#define GPIO_AFRH_AFSEL11_Msk                  (0xFUL << GPIO_AFRH_AFSEL11_Pos)     /*!< 0x0000F000 */
#define GPIO_AFRH_AFSEL11                      GPIO_AFRH_AFSEL11_Msk
#define GPIO_AFRH_AFSEL12_Pos                  (16U)
#define GPIO_AFRH_AFSEL12_Msk                  (0xFUL << GPIO_AFRH_AFSEL12_Pos)     /*!< 0x000F0000 */
#define GPIO_AFRH_AFSEL12                      GPIO_AFRH_AFSEL12_Msk
#define GPIO_AFRH_AFSEL13_Pos                  (20U)
#define GPIO_AFRH_AFSEL13_Msk                  (0xFUL << GPIO_AFRH_AFSEL13_Pos)     /*!< 0x00F00000 */
#define GPIO_AFRH_AFSEL13                      GPIO_AFRH_AFSEL13_Msk
#define GPIO_AFRH_AFSEL14_Pos                  (24U)
#define GPIO_AFRH_AFSEL14_Msk                  (0xFUL << GPIO_AFRH_AFSEL14_Pos)     /*!< 0x0F000000 */
#define GPIO_AFRH_AFSEL14                      GPIO_AFRH_AFSEL14_Msk
#define GPIO_AFRH_AFSEL15_Pos                  (28U)
#define GPIO_AFRH_AFSEL15_Msk                  (0xFUL << GPIO_AFRH_AFSEL15_Pos)     /*!< 0xF0000000 */
#define GPIO_AFRH_AFSEL15                      GPIO_AFRH_AFSEL15_Msk

/****************** Bit definition for GPIOx_BRR register  ********************/

/****************** Bit definition for GPIOx_BRR register  ********************/

/*-----------------------------------------------DEFINE RCC BIT--------------------------------------------------------*/

/****************** Bit definition for RCC_CR register  ********************/

/****************** Bit definition for RCC_ICSCR register  ********************/

/****************** Bit definition for RCC_CFGR register  ********************/

/****************** Bit definition for RCC_CIR register  ********************/

/****************** Bit definition for RCC_AHBRSTR register  ********************/

/****************** Bit definition for RCC_APB2RSTR register  ********************/

/****************** Bit definition for RCC_APB1RSTR register  ********************/

/****************** Bit definition for RCC_AHBENR register  ********************/
#define RCC_AHBENR_GPIOA_POS					(0U)
#define RCC_AHBENR_GPIOA_EN						(0x1UL << RCC_AHBENR_GPIOA_POS)
#define RCC_AHBENR_GPIOB_POS					(1U)
#define RCC_AHBENR_GPIOB_EN						(0x1UL << RCC_AHBENR_GPIOB_POS)
#define RCC_AHBENR_GPIOC_POS					(2U)
#define RCC_AHBENR_GPIOC_EN						(0x1UL << RCC_AHBENR_GPIOC_POS)
#define RCC_AHBENR_GPIOD_POS					(3U)
#define RCC_AHBENR_GPIOD_EN						(0x1UL << RCC_AHBENR_GPIOD_POS)
#define RCC_AHBENR_GPIOE_POS					(4U)
#define RCC_AHBENR_GPIOE_EN						(0x1UL << RCC_AHBENR_GPIOE_POS)
#define RCC_AHBENR_GPIOH_POS					(5U)
#define RCC_AHBENR_GPIOH_EN						(0x1UL << RCC_AHBENR_GPIOH_POS)
#define RCC_AHBENR_GPIOF_POS					(6U)
#define RCC_AHBENR_GPIOF_EN						(0x1UL << RCC_AHBENR_GPIOF_POS)
#define RCC_AHBENR_GPIOG_POS					(7U)
#define RCC_AHBENR_GPIOG_EN						(0x1UL << RCC_AHBENR_GPIOG_POS)
#define RCC_AHBENR_CRCEN_POS					(12U)
#define RCC_AHBENR_CRC_EN						(0x1UL << RCC_AHBENR_CRCEN_POS)
#define RCC_AHBENR_FLITFEN_POS					(15U)
#define RCC_AHBENR_FLITF_EN						(0x1UL << RCC_AHBENR_FLITFEN_POS)
#define RCC_AHBENR_DMA1EN_POS					(24U)
#define RCC_AHBENR_DMA1_EN						(0x1UL << RCC_AHBENR_DMA1EN_POS)
#define RCC_AHBENR_DMA2EN_POS					(25U)
#define RCC_AHBENR_DMA2_EN						(0x1UL << RCC_AHBENR_DMA2EN_POS)
#define RCC_AHBENR_AESEN_POS					(27U)
#define RCC_AHBENR_AES_EN						(0x1UL << RCC_AHBENR_AESEN_POS)
#define RCC_AHBENR_FSMCEN_POS					(30U)
#define RCC_AHBENR_FSMC_EN						(0x1UL << RCC_AHBENR_FSMCEN_POS)

/****************** Bit definition for RCC_APB2ENR register  ********************/

/****************** Bit definition for RCC_APB1ENR register  ********************/
#define RCC_APB1ENR_TIM2_POS					(0U)
#define RCC_APB1ENR_TIM2_EN						(0x1UL << RCC_APB1ENR_TIM2_POS)
#define RCC_APB1ENR_TIM3_POS					(1U)
#define RCC_APB1ENR_TIM3_EN						(0x1UL << RCC_APB1ENR_TIM3_POS)
#define RCC_APB1ENR_TIM4_POS					(2U)
#define RCC_APB1ENR_TIM4_EN						(0x1UL << RCC_APB1ENR_TIM4_POS)
#define RCC_APB1ENR_TIM5_POS					(3U)
#define RCC_APB1ENR_TIM5_EN						(0x1UL << RCC_APB1ENR_TIM5_POS)
#define RCC_APB1ENR_TIM6_POS					(4U)
#define RCC_APB1ENR_TIM6_EN						(0x1UL << RCC_APB1ENR_TIM6_POS)
#define RCC_APB1ENR_TIM7_POS					(5U)
#define RCC_APB1ENR_TIM7_EN						(0x1UL << RCC_APB1ENR_TIM7_POS)
#define RCC_APB1ENR_LCD_POS						(9U)
#define RCC_APB1ENR_LCD_EN						(0x1UL << RCC_APB1ENR_LCD_POS)
#define RCC_APB1ENR_WWDG_POS					(11U)
#define RCC_APB1ENR_WWDG_EN						(0x1UL << RCC_APB1ENR_WWDG_POS)
#define RCC_APB1ENR_SPI2_POS					(14U)
#define RCC_APB1ENR_SPI2_EN						(0x1UL << RCC_APB1ENR_SPI2_POS)
#define RCC_APB1ENR_SPI3_POS					(15U)
#define RCC_APB1ENR_SPI3_EN						(0x1UL << RCC_APB1ENR_SPI3_POS)
#define RCC_APB1ENR_USART2_POS					(17U)
#define RCC_APB1ENR_USART2_EN					(0x1UL << RCC_APB1ENR_USART2_POS)
#define RCC_APB1ENR_USART3_POS					(18U)
#define RCC_APB1ENR_USART3_EN					(0x1UL << RCC_APB1ENR_USART3_POS)
#define RCC_APB1ENR_USART4_POS					(19U)
#define RCC_APB1ENR_USART4_EN					(0x1UL << RCC_APB1ENR_USART4_POS)
#define RCC_APB1ENR_USART5_POS					(20U)
#define RCC_APB1ENR_USART5_EN					(0x1UL << RCC_APB1ENR_USART5_POS)
#define RCC_APB1ENR_I2C1_POS					(21U)
#define RCC_APB1ENR_I2C1_EN						(0x1UL << RCC_APB1ENR_I2C1_POS)
#define RCC_APB1ENR_I2C2_POS					(22U)
#define RCC_APB1ENR_I2C2_EN						(0x1UL << RCC_APB1ENR_I2C2_POS)
#define RCC_APB1ENR_USB_POS						(23U)
#define RCC_APB1ENR_USB_EN						(0x1UL << RCC_APB1ENR_USB_POS)
#define RCC_APB1ENR_PWR_POS						(22U)
#define RCC_APB1ENR_PWR_EN						(0x1UL << RCC_APB1ENR_PWR_POS)
#define RCC_APB1ENR_DAC_POS						(22U)
#define RCC_APB1ENR_DAC_EN						(0x1UL << RCC_APB1ENR_DAC_POS)
#define RCC_APB1ENR_COMP_POS					(22U)
#define RCC_APB1ENR_COMP_EN						(0x1UL << RCC_APB1ENR_COMP_POS)

/****************** Bit definition for RCC_AHBLPENR register  ********************/

/****************** Bit definition for RCC_APB2LPENR register  ********************/

/****************** Bit definition for RCC_APB1LPENRregister  ********************/

/****************** Bit definition for RCC_CSRregister  ********************/

/*-----------------------------------------------DEFINE I2C BIT--------------------------------------------------------*/

/****************** Bit definition for I2C_CR1 register  ********************/
#define I2C_CR1_PE_POS			(0UL)
#define I2C_CR1_PE_EN			(0x1UL << I2C_CR1_PE_POS)
#define I2C_CR1_SMBUS_POS		(1UL)
#define I2C_CR1_SMBUS_EN		(0x1UL << I2C_CR1_SMBUS_POS)
#define I2C_CR1_SMBTYPE_POS		(3UL)
#define I2C_CR1_SMBTYPE_EN		(0x1UL << I2C_CR1_SMBTYPE_POS)
#define I2C_CR1_ENARP_POS		(4UL)
#define I2C_CR1_ENARP_EN		(0x1UL << I2C_CR1_ENARP_POS)
#define I2C_CR1_ENPEC_POS		(5UL)
#define I2C_CR1_ENPEC_EN		(0x1UL << I2C_CR1_ENPEC_POS)
#define I2C_CR1_ENGC_POS		(6UL)
#define I2C_CR1_ENGC_EN			(0x1UL << I2C_CR1_ENGC_POS)
#define I2C_CR1_NOSTRETCH_POS	(7UL)
#define I2C_CR1_NOSTRETCH_EN	(0x1UL << I2C_CR1_NOSTRETCH_POS)
#define I2C_CR1_START_POS		(8UL)
#define I2C_CR1_START_EN		(0x1UL << I2C_CR1_START_POS)
#define I2C_CR1_STOP_POS		(9UL)
#define I2C_CR1_STOP_EN			(0x1UL << I2C_CR1_STOP_POS)
#define I2C_CR1_ACK_POS			(10UL)
#define I2C_CR1_ACK_EN			(0x1UL << I2C_CR1_ACK_POS)
#define I2C_CR1_POS_POS			(11UL)
#define I2C_CR1_POS_EN			(0x1UL << I2C_CR1_POS_POS)
#define I2C_CR1_PEC_POS			(12UL)
#define I2C_CR1_PEC_EN			(0x1UL << I2C_CR1_PEC_POS)
#define I2C_CR1_ALERT_POS		(13UL)
#define I2C_CR1_ALERT_EN		(0x1UL << I2C_CR1_ALERT_POS)
#define I2C_CR1_SWRST_POS		(15UL)
#define I2C_CR1_SWRST_EN		(0x1UL << I2C_CR1_SWRST_POS)

/****************** Bit definition for I2C_CR2 register  ********************/
#define I2C_CR2_FREQ_POS			(0UL)
#define I2C_CR2_FREQ_2M				(0x2UL << I2C_CR1_PE_POS)
#define I2C_CR2_ITERREN_POS			(8UL)
#define I2C_CR2_ITERREN_EN			(0x1UL << I2C_CR2_ITERREN_POS)
#define I2C_CR2_ITEVTEN_POS			(9UL)
#define I2C_CR2_ITEVTEN_EN			(0x1UL << I2C_CR2_ITEVTEN_POS)
#define I2C_CR2_ITBUFEN_POS			(10UL)
#define I2C_CR2_ITBUFEN_EN			(0x1UL << I2C_CR2_ITBUFEN_POS)
#define I2C_CR2_DMAEN_POS			(11UL)
#define I2C_CR2_DMAEN_EN			(0x1UL << I2C_CR2_DMAEN_POS)
#define I2C_CR2_LAST_POS			(11UL)
#define I2C_CR2_LAST_EN				(0x1UL << I2C_CR2_LAST_POS)

/****************** Bit definition for I2C_OAR1 register  ********************/
/*CONFIGURE BY YOURSEFL(using by slave mode)*/
/****************** Bit definition for I2C_OAR2 register  ********************/
/*CONFIGURE BY YOURSEFL(using by slave mode)*/
/****************** Bit definition for I2C_DR register  ********************/
/****************** Bit definition for I2C_SR1 register  ********************/
#define I2C_SR1_SB_POS                      (0U)
#define I2C_SR1_SB_EN                      (0x1UL << I2C_SR1_SB_POS)           /*!< Start Bit (Master mode) */
#define I2C_SR1_ADDR_POS                    (1U)
#define I2C_SR1_ADDR_EN                    (0x1UL << I2C_SR1_ADDR_POS)         /*!< Address sent (master mode)/matched (slave mode) */
#define I2C_SR1_BTF_POS                     (2U)
#define I2C_SR1_BTF_EN                     (0x1UL << I2C_SR1_BTF_POS)          /*!< Byte Transfer Finished */
#define I2C_SR1_ADD10_POS                   (3U)
#define I2C_SR1_ADD10_EN                   (0x1UL << I2C_SR1_ADD10_POS)        /*!< 10-bit header sent (Master mode) */
#define I2C_SR1_STOPF_POS                   (4U)
#define I2C_SR1_STOPF_EN                   (0x1UL << I2C_SR1_STOPF_POS)        /*!< Stop detection (Slave mode) */
#define I2C_SR1_RXNE_POS                    (6U)
#define I2C_SR1_RXNE_EN                    (0x1UL << I2C_SR1_RXNE_POS)         /*!< Data Register not Empty (receivers) */
#define I2C_SR1_TXE_POS                     (7U)
#define I2C_SR1_TXE_EN                     (0x1UL << I2C_SR1_TXE_POS)          /*!< Data Register Empty (transmitters) */
#define I2C_SR1_BERR_POS                    (8U)
#define I2C_SR1_BERR_EN                    (0x1UL << I2C_SR1_BERR_POS)         /*!< Bus Error */
#define I2C_SR1_ARLO_POS                    (9U)
#define I2C_SR1_ARLO_EN                    (0x1UL << I2C_SR1_ARLO_POS)         /*!< Arbitration Lost (master mode) */
#define I2C_SR1_AF_POS                      (10U)
#define I2C_SR1_AF_EN                      (0x1UL << I2C_SR1_AF_POS)           /*!< Acknowledge Failure */
#define I2C_SR1_OVR_POS                     (11U)
#define I2C_SR1_OVR_EN                     (0x1UL << I2C_SR1_OVR_POS)          /*!< Overrun/Underrun */
#define I2C_SR1_PECERR_POS                  (12U)
#define I2C_SR1_PECERR_EN                  (0x1UL << I2C_SR1_PECERR_POS)       /*!< PEC Error in reception */
#define I2C_SR1_TIMEOUT_POS                 (14U)
#define I2C_SR1_TIMEOUT_EN                 (0x1UL << I2C_SR1_TIMEOUT_POS)      /*!< Timeout or Tlow Error */
#define I2C_SR1_SMBALERT_POS                (15U)
#define I2C_SR1_SMBALERT_EN                (0x1UL << I2C_SR1_SMBALERT_POS)     /*!< SMBus Alert */
/****************** Bit definition for I2C_SR2 register  ********************/
#define I2C_SR2_MSL_POS                     (0U)
#define I2C_SR2_MSL_EN                     (0x1UL << I2C_SR2_MSL_POS)          /*!< Master/Slave */
#define I2C_SR2_BUSY_POS                    (1U)
#define I2C_SR2_BUSY_EN                    (0x1UL << I2C_SR2_BUSY_POS)         /*!< Bus Busy */
#define I2C_SR2_TRA_POS                     (2U)
#define I2C_SR2_TRA_EN                     (0x1UL << I2C_SR2_TRA_POS)          /*!< Transmitter/Receiver */
#define I2C_SR2_GENCALL_POS                 (4U)
#define I2C_SR2_GENCALL_EN                 (0x1UL << I2C_SR2_GENCALL_POS)      /*!< General Call Address (Slave mode) */
#define I2C_SR2_SMBDEFAULT_POS              (5U)
#define I2C_SR2_SMBDEFAULT_EN              (0x1UL << I2C_SR2_SMBDEFAULT_POS)   /*!< SMBus Device Default Address (Slave mode) */
#define I2C_SR2_SMBHOST_POS                 (6U)
#define I2C_SR2_SMBHOST_EN                 (0x1UL << I2C_SR2_SMBHOST_POS)      /*!< SMBus Host Header (Slave mode) */
#define I2C_SR2_DUALF_POS                   (7U)
#define I2C_SR2_DUALF_EN                   (0x1UL << I2C_SR2_DUALF_POS)        /*!< Dual Flag (Slave mode) */
#define I2C_SR2_PEC_POS                     (8U)
#define I2C_SR2_PEC_EN                     (0xFFUL << I2C_SR2_PEC_POS)         /*!< Packet Error Checking Register */
/****************** Bit definition for I2C_CCR register  ********************/
#define I2C_CCR_CCR_POS                     (0U)
#define I2C_CCR_CCR_EN                     	(0xFFFUL << I2C_CCR_CCR_POS)        /*!< Clock Control Register in Fast/Standard mode (Master mode) */
#define I2C_CCR_DUTY_POS                    (14U)
#define I2C_CCR_DUTY_EN                    	(0x1UL << I2C_CCR_DUTY_POS)         /*!< Fast Mode Duty Cycle */
#define I2C_CCR_FS_POS                      (15U)
#define I2C_CCR_FS_EN                      	(0x1UL << I2C_CCR_FS_POS)           /*!< I2C Master Mode Selection */
#define I2C_CCR_CCR_2M						(0xAUL << I2C_CCR_CCR_POS)

/****************** Bit definition for I2C_TRISE register  ********************/
#define I2C_TRISE_TRISE_POS                 (0U)
#define I2C_TRISE_TRISE_EN                 	(0x3FUL << I2C_TRISE_TRISE_POS)     /*!< Maximum Rise Time in Fast/Standard mode (Master mode) */
#define I2C_TRISE_TRISE_2M					(0x11UL << I2C_TRISE_TRISE_POS)

/*----------------------------------------------------------------------------------------------------------*/

typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t ICSCR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHBRSTR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t AHBLPENR;
	volatile uint32_t APB2LPENR;
	volatile uint32_t APB1LPENR;
	volatile uint32_t CSR;

} RCC_Typedef;

typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t GAFRH;
	volatile uint32_t BRR;
} GPIO_Typedef;

typedef struct
{
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t OAR1;
	volatile uint32_t OAR2;
	volatile uint32_t DR;
	volatile uint32_t SR1;
	volatile uint32_t SR2;
	volatile uint32_t CCR;
	volatile uint32_t TRISE;

} I2C_Typedef;

#define RCC_UR 	((RCC_Typedef*)RCC_BASE_UR)

#define GPIOA_UR 	((GPIO_Typedef*)GPIOA_BASE_UR)
#define GPIOB_UR 	((GPIO_Typedef*)GPIOB_BASE_UR)
#define GPIOC_UR 	((GPIO_Typedef*)GPIOC_BASE_UR)
#define GPIOD_UR 	((GPIO_Typedef*)GPIOD_BASE_UR)
#define GPIOE_UR 	((GPIO_Typedef*)GPIOE_BASE_UR)
#define GPIOH_UR 	((GPIO_Typedef*)GPIOH_BASE_UR)

#define I2C1_UR 	((I2C_Typedef*)I2C1_BASE_UR)
#define I2C2_UR	((I2C_Typedef*)I2C2_BASE_UR)

#endif /* INC_DEFINE_H_ */
