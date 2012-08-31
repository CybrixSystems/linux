/*
 * arch/arm/mach-sunxi/include/mach/sys_config.h
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

#ifndef __SUNXI_SYS_CONFIG_H
#define __SUNXI_SYS_CONFIG_H


typedef enum
{
	PIN_PULL_DEFAULT		=	0xFF,
	PIN_PULL_DISABLE		=	0x00,
	PIN_PULL_UP			=	0x01,
	PIN_PULL_DOWN			=	0x02,
	PIN_PULL_RESERVED		=	0x03
} pin_pull_level_t;

typedef	enum
{
	PIN_MULTI_DRIVING_DEFAULT	=	0xFF,
	PIN_MULTI_DRIVING_0		=	0x00,
	PIN_MULTI_DRIVING_1		=	0x01,
	PIN_MULTI_DRIVING_2		=	0x02,
	PIN_MULTI_DRIVING_3		=	0x03
} pin_drive_level_t;

typedef enum
{
	PIN_DATA_LOW,
	PIN_DATA_HIGH,
	PIN_DATA_DEFAULT		=	0XFF
} pin_data_t;

#define	PIN_PHY_GROUP_A				0x00
#define	PIN_PHY_GROUP_B				0x01
#define	PIN_PHY_GROUP_C				0x02
#define	PIN_PHY_GROUP_D				0x03
#define	PIN_PHY_GROUP_E				0x04
#define	PIN_PHY_GROUP_F				0x05
#define	PIN_PHY_GROUP_G				0x06
#define	PIN_PHY_GROUP_H				0x07
#define	PIN_PHY_GROUP_I				0x08
#define	PIN_PHY_GROUP_J				0x09

