/*
 * arch/arm/mach-sunxi/include/mach/irqs.h
 *
 * (C) Copyright 2012
 * Mateusz Krawczuk <willingmagic@cybrix.pl>
 * 
 * Original code by:
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Benn Huang <benn@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SUNXI_IRQS_H
#define __SUNXI_IRQS_H

#define NR_IRQS				96

#define SUNXI_IRQ_ENMI			0
#define SUNXI_IRQ_UART0			1
#define SUNXI_IRQ_UART1			2
#define SUNXI_IRQ_UART2			3
#define SUNXI_IRQ_UART3			4
#define SUNXI_IRQ_IR0			5
#define SUNXI_IRQ_IR1			6
#define SUNXI_IRQ_TWI0			7
#define SUNXI_IRQ_TWI1			8
#define SUNXI_IRQ_TWI2			9
#define SUNXI_IRQ_SPI00			10
#define SUNXI_IRQ_SPI01			11
#define SUNXI_IRQ_SPI02			12
#define SUNXI_IRQ_SPDIF			13
#define SUNXI_IRQ_AC97			14
#define SUNXI_IRQ_TS			15
#define SUNXI_IRQ_I2S			16
#define SUNXI_IRQ_UART4			17
#define SUNXI_IRQ_UART5			18
#define SUNXI_IRQ_UART6			19
#define SUNXI_IRQ_UART7			20
#define SUNXI_IRQ_KEYPAD		21
#define SUNXI_IRQ_TIMER0		22
#define SUNXI_IRQ_TIMER1		23
#define SUNXI_IRQ_ALARM			24
#define SUNXI_IRQ_TIMER2		24
#define SUNXI_IRQ_TIMER3		25
#define SUNXI_IRQ_CAN			26
#define SUNXI_IRQ_DMA			27
#define SUNXI_IRQ_PIO			28
#define SUNXI_IRQ_TOUCH_PANEL		29
#define SUNXI_IRQ_AUDIO_CODEC		30
#define SUNXI_IRQ_LRADC			31
#define SUNXI_IRQ_SDMC0			32
#define SUNXI_IRQ_SDMC1			33
#define SUNXI_IRQ_SDMC2			34
#define SUNXI_IRQ_SDMC3			35
#define SUNXI_IRQ_MEMSTICK		36
#define SUNXI_IRQ_NAND			37
#define SUNXI_IRQ_USB0			38
#define SUNXI_IRQ_USB1			39
#define SUNXI_IRQ_USB2			40
#define SUNXI_IRQ_SCR			41
#define SUNXI_IRQ_CSI0			42
#define SUNXI_IRQ_CSI1			43
#define SUNXI_IRQ_LCDCTRL0		44
#define SUNXI_IRQ_LCDCTRL1		45
#define SUNXI_IRQ_MP			46
#define SUNXI_IRQ_DEFEBE0		47
#define SUNXI_IRQ_DEFEBE1		48
#define SUNXI_IRQ_PMU			49
#define SUNXI_IRQ_SPI3			50
#define SUNXI_IRQ_TZASC			51
#define SUNXI_IRQ_PATA			52
#define SUNXI_IRQ_VE			53
#define SUNXI_IRQ_SS			54
#define SUNXI_IRQ_EMAC			55
#define SUNXI_IRQ_SATA			56
#define SUNXI_IRQ_GPS			57
#define SUNXI_IRQ_HDMI			58
#define SUNXI_IRQ_TVE			59
#define SUNXI_IRQ_ACE			60
#define SUNXI_IRQ_TVD			61
#define SUNXI_IRQ_PS2_0			62
#define SUNXI_IRQ_PS2_1			63
#define SUNXI_IRQ_USB3			64
#define SUNXI_IRQ_USB4			65
#define SUNXI_IRQ_PLE_PFM		66
#define SUNXI_IRQ_TIMER4		67
#define SUNXI_IRQ_TIMER5		68
#define SUNXI_IRQ_GPU_GP		69
#define SUNXI_IRQ_GPU_GPMMU		70
#define SUNXI_IRQ_GPU_PP0		71
#define SUNXI_IRQ_GPU_PPMMU0		72
#define SUNXI_IRQ_GPU_PMU		73
#define SUNXI_IRQ_GPU_RSV0		74
#define SUNXI_IRQ_GPU_RSV1		75
#define SUNXI_IRQ_GPU_RSV2		76
#define SUNXI_IRQ_GPU_RSV3		77
#define SUNXI_IRQ_GPU_RSV4		78
#define SUNXI_IRQ_GPU_RSV5		79
#define SUNXI_IRQ_GPU_RSV6		80

#endif