/*
 * Copyright (c) 2016 Freescale Semiconductor
 * Copyright 2017 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/****************************************************************************
  * \file     ov10642_config.h
  * \brief    definition of OV10642 camera registers configuration
  *           for mipi
  * \author   Thomas Brown
  * \version  0.1
  * \date     06.03.2018
  * \note
 ****************************************************************************/

/*==============================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==============================================================================*/

/*
** Generic structure for I2C Scripts
*/
typedef struct I2CInitScript
{
  unsigned char regaddH;
  unsigned char regaddL;
  unsigned char regval;
  unsigned char postamble;
} I2CInitScript_t;

/*
** OV10642 Init Script
** 1280x1080x30 - Single L - RAW12
*/
I2CInitScript Ov10642_1080p60_L[] = {
  {0x30, 0x13, 0x01, 100},
  {0x30, 0xbe, 0x01, 0},
  {0x31, 0x33, 0xb7, 0},
  {0x31, 0x34, 0xca, 0},
  {0x31, 0x35, 0xcc, 0},
  {0x31, 0x3f, 0x80, 0},
  {0x31, 0x32, 0x24, 0},
  {0x30, 0x00, 0x03, 0}, // Charge Pump Current
  {0x30, 0x01, 0x48, 0}, // PLL Multiplier
  {0x30, 0x02, 0x07, 0}, // PLL Post Divider
  {0x30, 0x04, 0x03, 0}, // PLL PCLK Pre Divider
  {0x30, 0x05, 0x48, 0}, // PLL PCLK Multiplier
  {0x30, 0x06, 0x07, 0}, // PLL PCLK Post Divider
  {0x30, 0x07, 0x01, 0}, // PCLK PLL Enable
  {0x30, 0x23, 0x05, 0}, // Drive Strength Controls
  {0x30, 0x32, 0x35, 0},
  {0x30, 0x33, 0x04, 0},
  {0x30, 0x54, 0x00, 0},
  {0x30, 0x55, 0x0f, 0},
  {0x30, 0x56, 0x01, 0},
  {0x30, 0x57, 0xff, 0},
  {0x30, 0x58, 0xaf, 0},
  {0x30, 0x59, 0x44, 0},
  {0x30, 0x5a, 0x02, 0},
  {0x30, 0x5b, 0x00, 0},
  {0x30, 0x5c, 0x30, 0},
  {0x30, 0x5d, 0x9e, 0},
  {0x30, 0x5e, 0x19, 0},
  {0x30, 0x5f, 0x18, 0},
  {0x30, 0x60, 0xf9, 0},
  {0x30, 0x61, 0xf0, 0},
  {0x30, 0x8c, 0x03, 0},
  {0x30, 0x8f, 0x10, 0},
  {0x30, 0x90, 0x00, 0},
  {0x30, 0x91, 0x00, 0},
  {0x30, 0xeb, 0x00, 0},
  {0x30, 0xa3, 0x08, 0},
  {0x30, 0xad, 0x03, 0},
  {0x30, 0xae, 0x80, 0},
  {0x30, 0xaf, 0x80, 0},
  {0x30, 0xb0, 0xff, 0},
  {0x30, 0xb1, 0x3f, 0},
  {0x30, 0xb2, 0x22, 0},
  {0x30, 0xb9, 0x22, 0},
  {0x30, 0xbb, 0x00, 0},
  {0x30, 0xbc, 0x00, 0},
  {0x30, 0xbd, 0x00, 0},
  {0x30, 0xbe, 0x00, 0},
  {0x30, 0xbf, 0x00, 0},
  {0x30, 0xc0, 0x00, 0},
  {0x30, 0xc1, 0x00, 0},
  {0x30, 0xc2, 0x00, 0},
  {0x30, 0xc3, 0x00, 0},
  {0x30, 0xc4, 0x80, 0},
  {0x30, 0xc5, 0x00, 0},
  {0x30, 0xc6, 0x80, 0},
  {0x30, 0xc7, 0x00, 0},
  {0x30, 0xc8, 0x80, 0},
  {0x31, 0x19, 0x45, 0},
  {0x31, 0x1a, 0x01, 0},
  {0x31, 0x1b, 0x4a, 0},
  {0x30, 0x74, 0x00, 0},
  {0x30, 0x75, 0x00, 0},
  {0x30, 0x76, 0x00, 0},
  {0x30, 0x77, 0x02, 0},
  {0x30, 0x78, 0x05, 0},
  {0x30, 0x79, 0x07, 0},
  {0x30, 0x7a, 0x04, 0},
  {0x30, 0x7b, 0x41, 0},
  {0x30, 0x7c, 0x05, 0},
  {0x30, 0x7d, 0x00, 0},
  {0x30, 0x7e, 0x04, 0},
  {0x30, 0x7f, 0x38, 0},
  {0x30, 0x80, 0x05, 0},
  {0x30, 0x81, 0xb2, 0},
  {0x30, 0x82, 0x04, 0},
  {0x30, 0x83, 0x76, 0},
  {0x30, 0x84, 0x00, 0},
  {0x30, 0x85, 0x04, 0},
  {0x30, 0x86, 0x00, 0},
  {0x30, 0x87, 0x04, 0},
  {0x30, 0x88, 0x00, 0},
  {0x30, 0x89, 0x40, 0},
  {0x30, 0x8d, 0x92, 0},
  {0x30, 0x94, 0xa5, 0},
  {0x30, 0xe6, 0x04, 0},
  {0x30, 0xe7, 0x48, 0},
  {0x30, 0xe8, 0x04, 0},
  {0x30, 0xe9, 0x48, 0},
  {0x30, 0xea, 0x11, 0},
  {0x30, 0xec, 0x01, 0},
  {0x30, 0xfa, 0x06, 0},
  {0x31, 0x20, 0x00, 0},
  {0x31, 0x21, 0x01, 0},
  {0x31, 0x22, 0x00, 0},
  {0x31, 0x27, 0x63, 0},
  {0x31, 0x28, 0xc0, 0},
  {0x31, 0x29, 0x00, 0},
  {0x31, 0xbe, 0x02, 0},
  {0x30, 0xa5, 0x78, 0},
  {0x30, 0xa6, 0x40, 0},
  {0x30, 0xa7, 0x78, 0},
  {0x30, 0xa8, 0x80, 0},
  {0x30, 0xa9, 0x79, 0},
  {0x30, 0xaa, 0x00, 0},
  {0x30, 0xab, 0x79, 0},
  {0x30, 0xac, 0xf8, 0},
  {0x34, 0x40, 0x04, 0},
  {0x34, 0x44, 0x28, 0},
  {0x34, 0x4e, 0x2c, 0},
  {0x34, 0x57, 0x33, 0},
  {0x34, 0x5e, 0x38, 0},
  {0x34, 0x61, 0xa8, 0},
  {0x70, 0x02, 0xaa, 0},
  {0x70, 0x01, 0xdf, 0},
  {0x70, 0x48, 0x00, 0},
  {0x70, 0x49, 0x02, 0},
  {0x70, 0x4a, 0x02, 0},
  {0x70, 0x4b, 0x00, 0},
  {0x70, 0x4c, 0x01, 0},
  {0x70, 0x4d, 0x00, 0},
  {0x70, 0x43, 0x04, 0},
  {0x70, 0x40, 0x3c, 0},
  {0x70, 0x47, 0x00, 0},
  {0x70, 0x44, 0x01, 0},
  {0x70, 0x00, 0x1f, 0},
  {0x70, 0x84, 0x01, 0},
  {0x70, 0x85, 0x03, 0},
  {0x70, 0x86, 0x02, 0},
  {0x70, 0x87, 0x40, 0},
  {0x70, 0x88, 0x01, 0},
  {0x70, 0x89, 0x20, 0},
  {0x70, 0x7f, 0x04, 0},
  {0x70, 0x7c, 0x3c, 0},
  {0x70, 0x83, 0x00, 0},
  {0x70, 0x80, 0x01, 0},
  {0x70, 0x03, 0xdf, 0},
  {0x70, 0xc0, 0x00, 0},
  {0x70, 0xc1, 0x02, 0},
  {0x70, 0xc2, 0x02, 0},
  {0x70, 0xc3, 0x00, 0},
  {0x70, 0xc4, 0x01, 0},
  {0x70, 0xc5, 0x00, 0},
  {0x70, 0xb8, 0x03, 0},
  {0x70, 0xb9, 0x98, 0},
  {0x70, 0xbc, 0x00, 0},
  {0x70, 0xbd, 0x80, 0},
  {0x70, 0x04, 0x02, 0},
  {0x70, 0x05, 0x00, 0},
  {0x70, 0x06, 0x01, 0},
  {0x70, 0x07, 0x80, 0},
  {0x70, 0x08, 0x02, 0},
  {0x70, 0x09, 0x00, 0},
  {0x70, 0x0a, 0x04, 0},
  {0x70, 0x0b, 0x00, 0},
  {0x70, 0x0e, 0x00, 0},
  {0x70, 0x0f, 0x60, 0},
  {0x70, 0x1a, 0x02, 0},
  {0x70, 0x1b, 0x00, 0},
  {0x70, 0x1c, 0x01, 0},
  {0x70, 0x1d, 0x80, 0},
  {0x70, 0x1e, 0x02, 0},
  {0x70, 0x1f, 0x00, 0},
  {0x70, 0x20, 0x04, 0},
  {0x70, 0x21, 0x00, 0},
  {0x70, 0x24, 0x00, 0},
  {0x70, 0x25, 0x60, 0},
  {0x70, 0xe7, 0x00, 0},
  {0x70, 0xe4, 0x10, 0},
  {0x70, 0xe5, 0x00, 0},
  {0x70, 0xe6, 0x00, 0},
  {0x70, 0xeb, 0x00, 0},
  {0x70, 0xe8, 0x10, 0},
  {0x70, 0xe9, 0x00, 0},
  {0x70, 0xea, 0x00, 0},
  {0x70, 0xef, 0x00, 0},
  {0x70, 0xec, 0xfd, 0},
  {0x70, 0xed, 0x00, 0},
  {0x70, 0xee, 0x00, 0},
  {0x70, 0xeb, 0x00, 0},
  {0x70, 0xf0, 0xfd, 0},
  {0x70, 0xf1, 0x00, 0},
  {0x70, 0xf2, 0x00, 0},
  {0x30, 0xfb, 0x06, 0},
  {0x30, 0xfc, 0x80, 0},
  {0x30, 0xfd, 0x02, 0},
  {0x30, 0xfe, 0x93, 0},
  {0x60, 0x00, 0xc1, 0},
  {0x60, 0x01, 0xb9, 0},
  {0x60, 0x02, 0xba, 0},
  {0x60, 0x03, 0xa4, 0},
  {0x60, 0x04, 0xa4, 0},
  {0x60, 0x05, 0xb5, 0},
  {0x60, 0x06, 0xa0, 0},
  {0x60, 0x07, 0x82, 0},
  {0x60, 0x08, 0xa7, 0},
  {0x60, 0x09, 0xa7, 0},
  {0x60, 0x0a, 0xb7, 0},
  {0x60, 0x0b, 0x5c, 0},
  {0x60, 0x0c, 0x9e, 0},
  {0x60, 0x0d, 0xc0, 0},
  {0x60, 0x0e, 0xd2, 0},
  {0x60, 0x0f, 0x33, 0},
  {0x60, 0x10, 0xcc, 0},
  {0x60, 0x11, 0xe2, 0},
  {0x60, 0x12, 0xc1, 0},
  {0x60, 0x13, 0xab, 0},
  {0x60, 0x14, 0xab, 0},
  {0x60, 0x15, 0xb7, 0},
  {0x60, 0x16, 0x00, 0},
  {0x60, 0x17, 0x00, 0},
  {0x60, 0x18, 0x00, 0},
  {0x60, 0x19, 0x00, 0},
  {0x60, 0x1a, 0x00, 0},
  {0x60, 0x1b, 0x00, 0},
  {0x60, 0x1c, 0x00, 0},
  {0x60, 0x1d, 0x00, 0},
  {0x60, 0x1e, 0x00, 0},
  {0x60, 0x1f, 0x00, 0},
  {0x60, 0x20, 0x00, 0},
  {0x60, 0x21, 0x00, 0},
  {0x60, 0x22, 0x00, 0},
  {0x60, 0x23, 0x9c, 0},
  {0x60, 0x24, 0x94, 0},
  {0x60, 0x25, 0x90, 0},
  {0x60, 0x26, 0xc5, 0},
  {0x60, 0x27, 0x00, 0},
  {0x60, 0x28, 0x54, 0},
  {0x60, 0x29, 0x2a, 0},
  {0x60, 0x2a, 0x61, 0},
  {0x60, 0x2b, 0xd2, 0},
  {0x60, 0x2c, 0xcc, 0},
  {0x60, 0x2d, 0x04, 0},
  {0x60, 0x2e, 0x35, 0},
  {0x60, 0x2f, 0xb1, 0},
  {0x60, 0x30, 0xb2, 0},
  {0x60, 0x31, 0xb3, 0},
  {0x60, 0x32, 0xd2, 0},
  {0x60, 0x33, 0xd3, 0},
  {0x60, 0x34, 0x11, 0},
  {0x60, 0x35, 0x31, 0},
  {0x60, 0x36, 0xcc, 0},
  {0x60, 0x37, 0x06, 0},
  {0x60, 0x38, 0xd2, 0},
  {0x60, 0x39, 0x00, 0},
  {0x60, 0x3a, 0xce, 0},
  {0x60, 0x3b, 0x18, 0},
  {0x60, 0x3c, 0xcf, 0},
  {0x60, 0x3d, 0x1e, 0},
  {0x60, 0x3e, 0xd0, 0},
  {0x60, 0x3f, 0x24, 0},
  {0x60, 0x40, 0xc5, 0},
  {0x60, 0x41, 0xd2, 0},
  {0x60, 0x42, 0xbc, 0},
  {0x60, 0x43, 0xcc, 0},
  {0x60, 0x44, 0x52, 0},
  {0x60, 0x45, 0x2b, 0},
  {0x60, 0x46, 0xd2, 0},
  {0x60, 0x47, 0xd3, 0},
  {0x60, 0x48, 0x01, 0},
  {0x60, 0x49, 0xcc, 0},
  {0x60, 0x4a, 0x0a, 0},
  {0x60, 0x4b, 0xd2, 0},
  {0x60, 0x4c, 0xd3, 0},
  {0x60, 0x4d, 0x0f, 0},
  {0x60, 0x4e, 0x1a, 0},
  {0x60, 0x4f, 0x2a, 0},
  {0x60, 0x50, 0xd4, 0},
  {0x60, 0x51, 0xe3, 0},
  {0x60, 0x52, 0xba, 0},
  {0x60, 0x53, 0x56, 0},
  {0x60, 0x54, 0xd3, 0},
  {0x60, 0x55, 0x2e, 0},
  {0x60, 0x56, 0x54, 0},
  {0x60, 0x57, 0x26, 0},
  {0x60, 0x58, 0xd2, 0},
  {0x60, 0x59, 0xcc, 0},
  {0x60, 0x5a, 0x60, 0},
  {0x60, 0x5b, 0xd2, 0},
  {0x60, 0x5c, 0xd3, 0},
  {0x60, 0x5d, 0x27, 0},
  {0x60, 0x5e, 0x27, 0},
  {0x60, 0x5f, 0x08, 0},
  {0x60, 0x60, 0x1a, 0},
  {0x60, 0x61, 0xcc, 0},
  {0x60, 0x62, 0x88, 0},
  {0x60, 0x63, 0x00, 0},
  {0x60, 0x64, 0x12, 0},
  {0x60, 0x65, 0x2c, 0},
  {0x60, 0x66, 0x60, 0},
  {0x60, 0x67, 0xc2, 0},
  {0x60, 0x68, 0xb9, 0},
  {0x60, 0x69, 0xa5, 0},
  {0x60, 0x6a, 0xa5, 0},
  {0x60, 0x6b, 0xb5, 0},
  {0x60, 0x6c, 0xa0, 0},
  {0x60, 0x6d, 0x82, 0},
  {0x60, 0x6e, 0x5c, 0},
  {0x60, 0x6f, 0xd4, 0},
  {0x60, 0x70, 0xab, 0},
  {0x60, 0x71, 0xd4, 0},
  {0x60, 0x72, 0xab, 0},
  {0x60, 0x73, 0xd3, 0},
  {0x60, 0x74, 0x01, 0},
  {0x60, 0x75, 0x7c, 0},
  {0x60, 0x76, 0x74, 0},
  {0x60, 0x77, 0x00, 0},
  {0x60, 0x78, 0x61, 0},
  {0x60, 0x79, 0x2a, 0},
  {0x60, 0x7a, 0xd2, 0},
  {0x60, 0x7b, 0xcc, 0},
  {0x60, 0x7c, 0xdf, 0},
  {0x60, 0x7d, 0xc6, 0},
  {0x60, 0x7e, 0x35, 0},
  {0x60, 0x7f, 0xd2, 0},
  {0x60, 0x80, 0xcc, 0},
  {0x60, 0x81, 0x06, 0},
  {0x60, 0x82, 0x31, 0},
  {0x60, 0x83, 0xd2, 0},
  {0x60, 0x84, 0x00, 0},
  {0x60, 0x85, 0xbb, 0},
  {0x60, 0x86, 0xcc, 0},
  {0x60, 0x87, 0x18, 0},
  {0x60, 0x88, 0xc6, 0},
  {0x60, 0x89, 0xd2, 0},
  {0x60, 0x8a, 0xbd, 0},
  {0x60, 0x8b, 0xcc, 0},
  {0x60, 0x8c, 0x52, 0},
  {0x60, 0x8d, 0x2b, 0},
  {0x60, 0x8e, 0xd2, 0},
  {0x60, 0x8f, 0xd3, 0},
  {0x60, 0x90, 0x01, 0},
  {0x60, 0x91, 0xcc, 0},
  {0x60, 0x92, 0x0a, 0},
  {0x60, 0x93, 0xd2, 0},
  {0x60, 0x94, 0xd3, 0},
  {0x60, 0x95, 0x0f, 0},
  {0x60, 0x96, 0x1a, 0},
  {0x60, 0x97, 0x71, 0},
  {0x60, 0x98, 0x2a, 0},
  {0x60, 0x99, 0xd4, 0},
  {0x60, 0x9a, 0xe3, 0},
  {0x60, 0x9b, 0xd3, 0},
  {0x60, 0x9c, 0x22, 0},
  {0x60, 0x9d, 0x70, 0},
  {0x60, 0x9e, 0xca, 0},
  {0x60, 0x9f, 0x26, 0},
  {0x60, 0xa0, 0xd2, 0},
  {0x60, 0xa1, 0xcc, 0},
  {0x60, 0xa2, 0x60, 0},
  {0x60, 0xa3, 0xd2, 0},
  {0x60, 0xa4, 0xd3, 0},
  {0x60, 0xa5, 0x27, 0},
  {0x60, 0xa6, 0x27, 0},
  {0x60, 0xa7, 0x08, 0},
  {0x60, 0xa8, 0x1a, 0},
  {0x60, 0xa9, 0xcc, 0},
  {0x60, 0xaa, 0x88, 0},
  {0x60, 0xab, 0x00, 0},
  {0x60, 0xac, 0x12, 0},
  {0x60, 0xad, 0x2c, 0},
  {0x60, 0xae, 0x60, 0},
  {0x60, 0xaf, 0x00, 0},
  {0x60, 0xb0, 0x00, 0},
  {0x60, 0xb1, 0xc0, 0},
  {0x60, 0xb2, 0xb9, 0},
  {0x60, 0xb3, 0xa3, 0},
  {0x60, 0xb4, 0xa3, 0},
  {0x60, 0xb5, 0xb5, 0},
  {0x60, 0xb6, 0x00, 0},
  {0x60, 0xb7, 0xa0, 0},
  {0x60, 0xb8, 0x82, 0},
  {0x60, 0xb9, 0x5c, 0},
  {0x60, 0xba, 0xd4, 0},
  {0x60, 0xbb, 0x8b, 0},
  {0x60, 0xbc, 0x9d, 0},
  {0x60, 0xbd, 0xd3, 0},
  {0x60, 0xbe, 0x21, 0},
  {0x60, 0xbf, 0xb0, 0},
  {0x60, 0xc0, 0xb0, 0},
  {0x60, 0xc1, 0xb7, 0},
  {0x60, 0xc2, 0x05, 0},
  {0x60, 0xc3, 0xd3, 0},
  {0x60, 0xc4, 0x0a, 0},
  {0x60, 0xc5, 0xd3, 0},
  {0x60, 0xc6, 0x10, 0},
  {0x60, 0xc7, 0x9c, 0},
  {0x60, 0xc8, 0x94, 0},
  {0x60, 0xc9, 0x90, 0},
  {0x60, 0xca, 0xc8, 0},
  {0x60, 0xcb, 0xba, 0},
  {0x60, 0xcc, 0x7c, 0},
  {0x60, 0xcd, 0x74, 0},
  {0x60, 0xce, 0x00, 0},
  {0x60, 0xcf, 0x61, 0},
  {0x60, 0xd0, 0x2a, 0},
  {0x60, 0xd1, 0x00, 0},
  {0x60, 0xd2, 0xd2, 0},
  {0x60, 0xd3, 0xcc, 0},
  {0x60, 0xd4, 0xdf, 0},
  {0x60, 0xd5, 0xc4, 0},
  {0x60, 0xd6, 0x35, 0},
  {0x60, 0xd7, 0xd3, 0},
  {0x60, 0xd8, 0x13, 0},
  {0x60, 0xd9, 0xd2, 0},
  {0x60, 0xda, 0xcc, 0},
  {0x60, 0xdb, 0x06, 0},
  {0x60, 0xdc, 0x31, 0},
  {0x60, 0xdd, 0xd2, 0},
  {0x60, 0xde, 0xcc, 0},
  {0x60, 0xdf, 0x15, 0},
  {0x60, 0xe0, 0xd2, 0},
  {0x60, 0xe1, 0xbb, 0},
  {0x60, 0xe2, 0xcc, 0},
  {0x60, 0xe3, 0x1a, 0},
  {0x60, 0xe4, 0xd2, 0},
  {0x60, 0xe5, 0xbe, 0},
  {0x60, 0xe6, 0xce, 0},
  {0x60, 0xe7, 0x52, 0},
  {0x60, 0xe8, 0xcf, 0},
  {0x60, 0xe9, 0x56, 0},
  {0x60, 0xea, 0xd0, 0},
  {0x60, 0xeb, 0x5b, 0},
  {0x60, 0xec, 0x2b, 0},
  {0x60, 0xed, 0xd2, 0},
  {0x60, 0xee, 0xd3, 0},
  {0x60, 0xef, 0x01, 0},
  {0x60, 0xf0, 0xcc, 0},
  {0x60, 0xf1, 0x0a, 0},
  {0x60, 0xf2, 0xd2, 0},
  {0x60, 0xf3, 0xd3, 0},
  {0x60, 0xf4, 0x0f, 0},
  {0x60, 0xf5, 0xd9, 0},
  {0x60, 0xf6, 0xb4, 0},
  {0x60, 0xf7, 0xda, 0},
  {0x60, 0xf8, 0xbb, 0},
  {0x60, 0xf9, 0x1a, 0},
  {0x60, 0xfa, 0xd4, 0},
  {0x60, 0xfb, 0xe3, 0},
  {0x60, 0xfc, 0xd4, 0},
  {0x60, 0xfd, 0x96, 0},
  {0x60, 0xfe, 0x27, 0},
  {0x60, 0xff, 0x00, 0},
  {0x61, 0x00, 0xd2, 0},
  {0x61, 0x01, 0xcc, 0},
  {0x61, 0x02, 0x60, 0},
  {0x61, 0x03, 0xd2, 0},
  {0x61, 0x04, 0xd3, 0},
  {0x61, 0x05, 0x2d, 0},
  {0x61, 0x06, 0xd9, 0},
  {0x61, 0x07, 0xcc, 0},
  {0x61, 0x08, 0xda, 0},
  {0x61, 0x09, 0xd2, 0},
  {0x61, 0x0a, 0x1a, 0},
  {0x61, 0x0b, 0x12, 0},
  {0x61, 0x0c, 0xcc, 0},
  {0x61, 0x0d, 0x88, 0},
  {0x61, 0x0e, 0xd6, 0},
  {0x61, 0x0f, 0x9e, 0},
  {0x61, 0x10, 0xb9, 0},
  {0x61, 0x11, 0xba, 0},
  {0x61, 0x12, 0xaf, 0},
  {0x61, 0x13, 0xdc, 0},
  {0x61, 0x14, 0x00, 0},
  {0x61, 0x15, 0xd5, 0},
  {0x61, 0x16, 0xba, 0},
  {0x61, 0x17, 0x00, 0},
  {0x61, 0x18, 0x00, 0},
  {0x61, 0x19, 0x00, 0},
  {0x61, 0x1a, 0x00, 0},
  {0x61, 0x1b, 0x00, 0},
  {0x61, 0x1c, 0x00, 0},
  {0x61, 0x1d, 0x00, 0},
  {0x61, 0x1e, 0x00, 0},
  {0x61, 0x1f, 0xaa, 0},
  {0x61, 0x20, 0xaa, 0},
  {0x61, 0x21, 0xb7, 0},
  {0x61, 0x22, 0x00, 0},
  {0x61, 0x23, 0x00, 0},
  {0x61, 0x24, 0x00, 0},
  {0x61, 0x25, 0x00, 0},
  {0x61, 0x26, 0x00, 0},
  {0x61, 0x27, 0xa6, 0},
  {0x61, 0x28, 0xa6, 0},
  {0x61, 0x29, 0xb7, 0},
  {0x61, 0x2a, 0x00, 0},
  {0x61, 0x2b, 0xd5, 0},
  {0x61, 0x2c, 0x71, 0},
  {0x61, 0x2d, 0xd3, 0},
  {0x61, 0x2e, 0x30, 0},
  {0x61, 0x2f, 0xba, 0},
  {0x61, 0x30, 0x00, 0},
  {0x61, 0x31, 0x00, 0},
  {0x61, 0x32, 0x00, 0},
  {0x61, 0x33, 0x00, 0},
  {0x61, 0x34, 0xd3, 0},
  {0x61, 0x35, 0x10, 0},
  {0x61, 0x36, 0x70, 0},
  {0x61, 0x37, 0x00, 0},
  {0x61, 0x38, 0x00, 0},
  {0x61, 0x39, 0x00, 0},
  {0x61, 0x3a, 0x00, 0},
  {0x61, 0x3b, 0xd5, 0},
  {0x61, 0x3c, 0xba, 0},
  {0x61, 0x3d, 0xb0, 0},
  {0x61, 0x3e, 0xb0, 0},
  {0x61, 0x3f, 0xb7, 0},
  {0x61, 0x40, 0x9d, 0},
  {0x61, 0x41, 0x02, 0},
  {0x61, 0x42, 0xd3, 0},
  {0x61, 0x43, 0x0a, 0},
  {0x61, 0x44, 0x9d, 0},
  {0x61, 0x45, 0x9d, 0},
  {0x61, 0x46, 0xd3, 0},
  {0x61, 0x47, 0x10, 0},
  {0x61, 0x48, 0x9c, 0},
  {0x61, 0x49, 0x94, 0},
  {0x61, 0x4a, 0x90, 0},
  {0x61, 0x4b, 0xc8, 0},
  {0x61, 0x4c, 0xba, 0},
  {0x61, 0x4d, 0xd2, 0},
  {0x61, 0x4e, 0x60, 0},
  {0x61, 0x4f, 0x2c, 0},
  {0x61, 0x50, 0x50, 0},
  {0x61, 0x51, 0x11, 0},
  {0x61, 0x52, 0xcc, 0},
  {0x61, 0x53, 0x00, 0},
  {0x61, 0x54, 0x30, 0},
  {0x61, 0x55, 0xd5, 0},
  {0x61, 0x56, 0xba, 0},
  {0x61, 0x57, 0xb0, 0},
  {0x61, 0x58, 0xb0, 0},
  {0x61, 0x59, 0xb7, 0},
  {0x61, 0x5a, 0x9d, 0},
  {0x61, 0x5b, 0x02, 0},
  {0x61, 0x5c, 0xd3, 0},
  {0x61, 0x5d, 0x0a, 0},
  {0x61, 0x5e, 0x9d, 0},
  {0x61, 0x5f, 0x9d, 0},
  {0x61, 0x60, 0xd3, 0},
  {0x61, 0x61, 0x10, 0},
  {0x61, 0x62, 0x9c, 0},
  {0x61, 0x63, 0x94, 0},
  {0x61, 0x64, 0x90, 0},
  {0x61, 0x65, 0xc8, 0},
  {0x61, 0x66, 0xba, 0},
  {0x61, 0x67, 0xd5, 0},
  {0x61, 0x68, 0x01, 0},
  {0x61, 0x69, 0x1a, 0},
  {0x61, 0x6a, 0xcc, 0},
  {0x61, 0x6b, 0x12, 0},
  {0x61, 0x6c, 0x12, 0},
  {0x61, 0x6d, 0x00, 0},
  {0x61, 0x6e, 0xcc, 0},
  {0x61, 0x6f, 0x9c, 0},
  {0x61, 0x70, 0xd2, 0},
  {0x61, 0x71, 0xcc, 0},
  {0x61, 0x72, 0x60, 0},
  {0x61, 0x73, 0xd2, 0},
  {0x61, 0x74, 0x04, 0},
  {0x61, 0x75, 0xd5, 0},
  {0x61, 0x76, 0x1a, 0},
  {0x61, 0x77, 0xcc, 0},
  {0x61, 0x78, 0x12, 0},
  {0x61, 0x79, 0x00, 0},
  {0x61, 0x7a, 0x12, 0},
  {0x61, 0x7b, 0xcc, 0},
  {0x61, 0x7c, 0x9c, 0},
  {0x61, 0x7d, 0xd2, 0},
  {0x61, 0x7e, 0xcc, 0},
  {0x61, 0x7f, 0x60, 0},
  {0x61, 0x80, 0xd2, 0},
  {0x61, 0x81, 0x1a, 0},
  {0x61, 0x82, 0xcc, 0},
  {0x61, 0x83, 0x12, 0},
  {0x61, 0x84, 0x00, 0},
  {0x61, 0x85, 0x12, 0},
  {0x61, 0x86, 0xcc, 0},
  {0x61, 0x87, 0x9c, 0},
  {0x61, 0x88, 0xd2, 0},
  {0x61, 0x89, 0xcc, 0},
  {0x61, 0x8a, 0x60, 0},
  {0x61, 0x8b, 0xd2, 0},
  {0x61, 0x8c, 0x1a, 0},
  {0x61, 0x8d, 0xcc, 0},
  {0x61, 0x8e, 0x12, 0},
  {0x61, 0x8f, 0x00, 0},
  {0x61, 0x90, 0x12, 0},
  {0x61, 0x91, 0xcc, 0},
  {0x61, 0x92, 0x9c, 0},
  {0x61, 0x93, 0xd2, 0},
  {0x61, 0x94, 0xcc, 0},
  {0x61, 0x95, 0x60, 0},
  {0x61, 0x96, 0xd2, 0},
  {0x61, 0x97, 0xd5, 0},
  {0x61, 0x98, 0x1a, 0},
  {0x61, 0x99, 0xcc, 0},
  {0x61, 0x9a, 0x12, 0},
  {0x61, 0x9b, 0x12, 0},
  {0x61, 0x9c, 0x00, 0},
  {0x61, 0x9d, 0xcc, 0},
  {0x61, 0x9e, 0x8a, 0},
  {0x61, 0x9f, 0xd2, 0},
  {0x61, 0xa0, 0xcc, 0},
  {0x61, 0xa1, 0x74, 0},
  {0x61, 0xa2, 0xd2, 0},
  {0x61, 0xa3, 0xd5, 0},
  {0x61, 0xa4, 0x1a, 0},
  {0x61, 0xa5, 0xcc, 0},
  {0x61, 0xa6, 0x12, 0},
  {0x61, 0xa7, 0x00, 0},
  {0x61, 0xa8, 0x12, 0},
  {0x61, 0xa9, 0xcc, 0},
  {0x61, 0xaa, 0x8a, 0},
  {0x61, 0xab, 0xd2, 0},
  {0x61, 0xac, 0xcc, 0},
  {0x61, 0xad, 0x74, 0},
  {0x61, 0xae, 0xd2, 0},
  {0x61, 0xaf, 0x1a, 0},
  {0x61, 0xb0, 0xcc, 0},
  {0x61, 0xb1, 0x12, 0},
  {0x61, 0xb2, 0x00, 0},
  {0x61, 0xb3, 0x12, 0},
  {0x61, 0xb4, 0xcc, 0},
  {0x61, 0xb5, 0x8a, 0},
  {0x61, 0xb6, 0xd2, 0},
  {0x61, 0xb7, 0xcc, 0},
  {0x61, 0xb8, 0x74, 0},
  {0x61, 0xb9, 0xd2, 0},
  {0x61, 0xba, 0x1a, 0},
  {0x61, 0xbb, 0xcc, 0},
  {0x61, 0xbc, 0x12, 0},
  {0x61, 0xbd, 0x00, 0},
  {0x61, 0xbe, 0x12, 0},
  {0x61, 0xbf, 0xcc, 0},
  {0x61, 0xc0, 0x8a, 0},
  {0x61, 0xc1, 0xd2, 0},
  {0x61, 0xc2, 0xcc, 0},
  {0x61, 0xc3, 0x74, 0},
  {0x61, 0xc4, 0xd2, 0},
  {0x61, 0xc5, 0xd5, 0},
  {0x61, 0xc6, 0xcc, 0},
  {0x61, 0xc7, 0x12, 0},
  {0x61, 0xc8, 0x00, 0},
  {0x61, 0xc9, 0x12, 0},
  {0x61, 0xca, 0xcc, 0},
  {0x61, 0xcb, 0x9c, 0},
  {0x61, 0xcc, 0xd5, 0},
  {0x64, 0x00, 0x04, 0},
  {0x64, 0x01, 0x04, 0},
  {0x64, 0x02, 0x00, 0},
  {0x64, 0x03, 0xff, 0},
  {0x64, 0x04, 0x00, 0},
  {0x64, 0x05, 0x08, 0},
  {0x64, 0x06, 0x00, 0},
  {0x64, 0x07, 0xff, 0},
  {0x64, 0x08, 0x04, 0},
  {0x64, 0x09, 0x70, 0},
  {0x64, 0x0a, 0x00, 0},
  {0x64, 0x0b, 0xff, 0},
  {0x64, 0x0c, 0x05, 0},
  {0x64, 0x0d, 0x14, 0},
  {0x64, 0x0e, 0x04, 0},
  {0x64, 0x0f, 0x71, 0},
  {0x64, 0x10, 0x05, 0},
  {0x64, 0x11, 0x74, 0},
  {0x64, 0x12, 0x00, 0},
  {0x64, 0x13, 0xff, 0},
  {0x64, 0x14, 0x05, 0},
  {0x64, 0x15, 0x54, 0},
  {0x64, 0x16, 0x05, 0},
  {0x64, 0x17, 0x44, 0},
  {0x64, 0x18, 0x04, 0},
  {0x64, 0x19, 0x30, 0},
  {0x64, 0x1a, 0x05, 0},
  {0x64, 0x1b, 0x46, 0},
  {0x64, 0x1c, 0x00, 0},
  {0x64, 0x1d, 0xff, 0},
  {0x64, 0x1e, 0x04, 0},
  {0x64, 0x1f, 0x31, 0},
  {0x64, 0x20, 0x04, 0},
  {0x64, 0x21, 0x30, 0},
  {0x64, 0x22, 0x00, 0},
  {0x64, 0x23, 0xff, 0},
  {0x64, 0x24, 0x04, 0},
  {0x64, 0x25, 0x20, 0},
  {0x64, 0x26, 0x05, 0},
  {0x64, 0x27, 0x06, 0},
  {0x64, 0x28, 0x00, 0},
  {0x64, 0x29, 0xff, 0},
  {0x64, 0x2a, 0x08, 0},
  {0x64, 0x2b, 0x2a, 0},
  {0x64, 0x2c, 0x08, 0},
  {0x64, 0x2d, 0x31, 0},
  {0x64, 0x2e, 0x00, 0},
  {0x64, 0x2f, 0xff, 0},
  {0x64, 0x30, 0x08, 0},
  {0x64, 0x31, 0x2a, 0},
  {0x64, 0x32, 0x08, 0},
  {0x64, 0x33, 0x31, 0},
  {0x64, 0x34, 0x06, 0},
  {0x64, 0x35, 0x20, 0},
  {0x64, 0x36, 0x07, 0},
  {0x64, 0x37, 0x00, 0},
  {0x64, 0x38, 0x08, 0},
  {0x64, 0x39, 0x40, 0},
  {0x64, 0x3a, 0x00, 0},
  {0x64, 0x3b, 0xff, 0},
  {0x64, 0x3c, 0x08, 0},
  {0x64, 0x3d, 0x2a, 0},
  {0x64, 0x3e, 0x08, 0},
  {0x64, 0x3f, 0x36, 0},
  {0x64, 0x40, 0x06, 0},
  {0x64, 0x41, 0x10, 0},
  {0x64, 0x42, 0x07, 0},
  {0x64, 0x43, 0x00, 0},
  {0x64, 0x44, 0x08, 0},
  {0x64, 0x45, 0x40, 0},
  {0x64, 0x46, 0x00, 0},
  {0x64, 0x47, 0xff, 0},
  {0x64, 0x48, 0x08, 0},
  {0x64, 0x49, 0x2a, 0},
  {0x64, 0x4a, 0x08, 0},
  {0x64, 0x4b, 0x3b, 0},
  {0x64, 0x4c, 0x06, 0},
  {0x64, 0x4d, 0x00, 0},
  {0x64, 0x4e, 0x07, 0},
  {0x64, 0x4f, 0x00, 0},
  {0x64, 0x50, 0x08, 0},
  {0x64, 0x51, 0x40, 0},
  {0x64, 0x52, 0x00, 0},
  {0x64, 0x53, 0xff, 0},
  {0x64, 0x54, 0x06, 0},
  {0x64, 0x55, 0x00, 0},
  {0x64, 0x56, 0x07, 0},
  {0x64, 0x57, 0x05, 0},
  {0x64, 0x58, 0x01, 0},
  {0x64, 0x59, 0xaf, 0},
  {0x64, 0x5a, 0x01, 0},
  {0x64, 0x5b, 0x0f, 0},
  {0x64, 0x5c, 0x01, 0},
  {0x64, 0x5d, 0x90, 0},
  {0x64, 0x5e, 0x01, 0},
  {0x64, 0x5f, 0xc8, 0},
  {0x64, 0x60, 0x00, 0},
  {0x64, 0x61, 0xff, 0},
  {0x64, 0x62, 0x01, 0},
  {0x64, 0x63, 0xac, 0},
  {0x64, 0x64, 0x01, 0},
  {0x64, 0x65, 0x0c, 0},
  {0x64, 0x66, 0x01, 0},
  {0x64, 0x67, 0x90, 0},
  {0x64, 0x68, 0x01, 0},
  {0x64, 0x69, 0xe8, 0},
  {0x64, 0x6a, 0x00, 0},
  {0x64, 0x6b, 0xff, 0},
  {0x64, 0x6c, 0x01, 0},
  {0x64, 0x6d, 0xad, 0},
  {0x64, 0x6e, 0x01, 0},
  {0x64, 0x6f, 0x0d, 0},
  {0x64, 0x70, 0x01, 0},
  {0x64, 0x71, 0x90, 0},
  {0x64, 0x72, 0x01, 0},
  {0x64, 0x73, 0xe8, 0},
  {0x64, 0x74, 0x00, 0},
  {0x64, 0x75, 0xff, 0},
  {0x64, 0x76, 0x01, 0},
  {0x64, 0x77, 0xae, 0},
  {0x64, 0x78, 0x01, 0},
  {0x64, 0x79, 0x0e, 0},
  {0x64, 0x7a, 0x01, 0},
  {0x64, 0x7b, 0x90, 0},
  {0x64, 0x7c, 0x01, 0},
  {0x64, 0x7d, 0xe8, 0},
  {0x64, 0x7e, 0x00, 0},
  {0x64, 0x7f, 0xff, 0},
  {0x64, 0x80, 0x01, 0},
  {0x64, 0x81, 0xb0, 0},
  {0x64, 0x82, 0x01, 0},
  {0x64, 0x83, 0xb1, 0},
  {0x64, 0x84, 0x01, 0},
  {0x64, 0x85, 0xb2, 0},
  {0x64, 0x86, 0x01, 0},
  {0x64, 0x87, 0xb3, 0},
  {0x64, 0x88, 0x01, 0},
  {0x64, 0x89, 0xb4, 0},
  {0x64, 0x8a, 0x01, 0},
  {0x64, 0x8b, 0xb5, 0},
  {0x64, 0x8c, 0x01, 0},
  {0x64, 0x8d, 0xb6, 0},
  {0x64, 0x8e, 0x01, 0},
  {0x64, 0x8f, 0xb7, 0},
  {0x64, 0x90, 0x01, 0},
  {0x64, 0x91, 0xb8, 0},
  {0x64, 0x92, 0x01, 0},
  {0x64, 0x93, 0xb9, 0},
  {0x64, 0x94, 0x01, 0},
  {0x64, 0x95, 0xba, 0},
  {0x64, 0x96, 0x01, 0},
  {0x64, 0x97, 0xbb, 0},
  {0x64, 0x98, 0x01, 0},
  {0x64, 0x99, 0xbc, 0},
  {0x64, 0x9a, 0x01, 0},
  {0x64, 0x9b, 0xbd, 0},
  {0x64, 0x9c, 0x01, 0},
  {0x64, 0x9d, 0xbe, 0},
  {0x64, 0x9e, 0x01, 0},
  {0x64, 0x9f, 0xbf, 0},
  {0x64, 0xa0, 0x01, 0},
  {0x64, 0xa1, 0xc0, 0},
  {0x64, 0xa2, 0x00, 0},
  {0x64, 0xa3, 0xff, 0},
  {0x64, 0xa4, 0x06, 0},
  {0x64, 0xa5, 0x00, 0},
  {0x64, 0xa6, 0x01, 0},
  {0x64, 0xa7, 0xf6, 0},
  {0x64, 0xa8, 0x04, 0},
  {0x64, 0xa9, 0x30, 0},
  {0x64, 0xaa, 0x00, 0},
  {0x64, 0xab, 0xff, 0},
  {0x64, 0xac, 0x06, 0},
  {0x64, 0xad, 0x10, 0},
  {0x64, 0xae, 0x01, 0},
  {0x64, 0xaf, 0xf6, 0},
  {0x64, 0xb0, 0x04, 0},
  {0x64, 0xb1, 0x30, 0},
  {0x64, 0xb2, 0x06, 0},
  {0x64, 0xb3, 0x00, 0},
  {0x64, 0xb4, 0x00, 0},
  {0x64, 0xb5, 0xff, 0},
  {0x64, 0xb6, 0x06, 0},
  {0x64, 0xb7, 0x20, 0},
  {0x64, 0xb8, 0x01, 0},
  {0x64, 0xb9, 0xf6, 0},
  {0x64, 0xba, 0x04, 0},
  {0x64, 0xbb, 0x30, 0},
  {0x64, 0xbc, 0x06, 0},
  {0x64, 0xbd, 0x00, 0},
  {0x64, 0xbe, 0x00, 0},
  {0x64, 0xbf, 0xff, 0},
  {0x64, 0xc0, 0x04, 0},
  {0x64, 0xc1, 0x31, 0},
  {0x64, 0xc2, 0x04, 0},
  {0x64, 0xc3, 0x30, 0},
  {0x64, 0xc4, 0x01, 0},
  {0x64, 0xc5, 0x20, 0},
  {0x64, 0xc6, 0x01, 0},
  {0x64, 0xc7, 0x31, 0},
  {0x64, 0xc8, 0x01, 0},
  {0x64, 0xc9, 0x32, 0},
  {0x64, 0xca, 0x01, 0},
  {0x64, 0xcb, 0x33, 0},
  {0x64, 0xcc, 0x01, 0},
  {0x64, 0xcd, 0x34, 0},
  {0x64, 0xce, 0x01, 0},
  {0x64, 0xcf, 0x35, 0},
  {0x64, 0xd0, 0x01, 0},
  {0x64, 0xd1, 0x36, 0},
  {0x64, 0xd2, 0x01, 0},
  {0x64, 0xd3, 0x37, 0},
  {0x64, 0xd4, 0x01, 0},
  {0x64, 0xd5, 0x38, 0},
  {0x64, 0xd6, 0x01, 0},
  {0x64, 0xd7, 0x39, 0},
  {0x64, 0xd8, 0x01, 0},
  {0x64, 0xd9, 0x3a, 0},
  {0x64, 0xda, 0x01, 0},
  {0x64, 0xdb, 0x3b, 0},
  {0x64, 0xdc, 0x01, 0},
  {0x64, 0xdd, 0x3c, 0},
  {0x64, 0xde, 0x01, 0},
  {0x64, 0xdf, 0x3d, 0},
  {0x64, 0xe0, 0x01, 0},
  {0x64, 0xe1, 0x3e, 0},
  {0x64, 0xe2, 0x01, 0},
  {0x64, 0xe3, 0x3f, 0},
  {0x64, 0xe4, 0x02, 0},
  {0x64, 0xe5, 0xa0, 0},
  {0x64, 0xe6, 0x00, 0},
  {0x64, 0xe7, 0xff, 0},
  {0x64, 0xe8, 0x04, 0},
  {0x64, 0xe9, 0x31, 0},
  {0x64, 0xea, 0x04, 0},
  {0x64, 0xeb, 0x30, 0},
  {0x64, 0xec, 0x01, 0},
  {0x64, 0xed, 0x00, 0},
  {0x64, 0xee, 0x01, 0},
  {0x64, 0xef, 0x11, 0},
  {0x64, 0xf0, 0x01, 0},
  {0x64, 0xf1, 0x12, 0},
  {0x64, 0xf2, 0x01, 0},
  {0x64, 0xf3, 0x13, 0},
  {0x64, 0xf4, 0x01, 0},
  {0x64, 0xf5, 0x14, 0},
  {0x64, 0xf6, 0x01, 0},
  {0x64, 0xf7, 0x15, 0},
  {0x64, 0xf8, 0x01, 0},
  {0x64, 0xf9, 0x16, 0},
  {0x64, 0xfa, 0x01, 0},
  {0x64, 0xfb, 0x17, 0},
  {0x64, 0xfc, 0x01, 0},
  {0x64, 0xfd, 0x18, 0},
  {0x64, 0xfe, 0x01, 0},
  {0x64, 0xff, 0x19, 0},
  {0x65, 0x00, 0x01, 0},
  {0x65, 0x01, 0x1a, 0},
  {0x65, 0x02, 0x01, 0},
  {0x65, 0x03, 0x1b, 0},
  {0x65, 0x04, 0x01, 0},
  {0x65, 0x05, 0x1c, 0},
  {0x65, 0x06, 0x01, 0},
  {0x65, 0x07, 0x1d, 0},
  {0x65, 0x08, 0x01, 0},
  {0x65, 0x09, 0x1e, 0},
  {0x65, 0x0a, 0x01, 0},
  {0x65, 0x0b, 0x1f, 0},
  {0x65, 0x0c, 0x02, 0},
  {0x65, 0x0d, 0xa0, 0},
  {0x65, 0x0e, 0x00, 0},
  {0x65, 0x0f, 0xff, 0},
  {0x65, 0x10, 0x04, 0},
  {0x65, 0x11, 0x20, 0},
  {0x65, 0x12, 0x05, 0},
  {0x65, 0x13, 0x86, 0},
  {0x65, 0x14, 0x03, 0},
  {0x65, 0x15, 0x0b, 0},
  {0x65, 0x16, 0x05, 0},
  {0x65, 0x17, 0x86, 0},
  {0x65, 0x18, 0x00, 0},
  {0x65, 0x19, 0x00, 0},
  {0x65, 0x1a, 0x05, 0},
  {0x65, 0x1b, 0x06, 0},
  {0x65, 0x1c, 0x00, 0},
  {0x65, 0x1d, 0x04, 0},
  {0x65, 0x1e, 0x05, 0},
  {0x65, 0x1f, 0x04, 0},
  {0x65, 0x20, 0x00, 0},
  {0x65, 0x21, 0x04, 0},
  {0x65, 0x22, 0x05, 0},
  {0x65, 0x23, 0x00, 0},
  {0x65, 0x24, 0x05, 0},
  {0x65, 0x25, 0x0a, 0},
  {0x65, 0x26, 0x03, 0},
  {0x65, 0x27, 0x9a, 0},
  {0x65, 0x28, 0x05, 0},
  {0x65, 0x29, 0x86, 0},
  {0x65, 0x2a, 0x00, 0},
  {0x65, 0x2b, 0x00, 0},
  {0x65, 0x2c, 0x05, 0},
  {0x65, 0x2d, 0x06, 0},
  {0x65, 0x2e, 0x00, 0},
  {0x65, 0x2f, 0x01, 0},
  {0x65, 0x30, 0x05, 0},
  {0x65, 0x31, 0x04, 0},
  {0x65, 0x32, 0x00, 0},
  {0x65, 0x33, 0x04, 0},
  {0x65, 0x34, 0x05, 0},
  {0x65, 0x35, 0x00, 0},
  {0x65, 0x36, 0x05, 0},
  {0x65, 0x37, 0x0a, 0},
  {0x65, 0x38, 0x03, 0},
  {0x65, 0x39, 0x99, 0},
  {0x65, 0x3a, 0x05, 0},
  {0x65, 0x3b, 0x06, 0},
  {0x65, 0x3c, 0x00, 0},
  {0x65, 0x3d, 0x00, 0},
  {0x65, 0x3e, 0x05, 0},
  {0x65, 0x3f, 0x04, 0},
  {0x65, 0x40, 0x00, 0},
  {0x65, 0x41, 0x04, 0},
  {0x65, 0x42, 0x05, 0},
  {0x65, 0x43, 0x00, 0},
  {0x65, 0x44, 0x05, 0},
  {0x65, 0x45, 0x0a, 0},
  {0x65, 0x46, 0x03, 0},
  {0x65, 0x47, 0x98, 0},
  {0x65, 0x48, 0x05, 0},
  {0x65, 0x49, 0x06, 0},
  {0x65, 0x4a, 0x00, 0},
  {0x65, 0x4b, 0x00, 0},
  {0x65, 0x4c, 0x05, 0},
  {0x65, 0x4d, 0x04, 0},
  {0x65, 0x4e, 0x00, 0},
  {0x65, 0x4f, 0x04, 0},
  {0x65, 0x50, 0x05, 0},
  {0x65, 0x51, 0x00, 0},
  {0x65, 0x52, 0x05, 0},
  {0x65, 0x53, 0x0a, 0},
  {0x65, 0x54, 0x03, 0},
  {0x65, 0x55, 0x97, 0},
  {0x65, 0x56, 0x05, 0},
  {0x65, 0x57, 0x06, 0},
  {0x65, 0x58, 0x05, 0},
  {0x65, 0x59, 0x04, 0},
  {0x65, 0x5a, 0x00, 0},
  {0x65, 0x5b, 0x04, 0},
  {0x65, 0x5c, 0x05, 0},
  {0x65, 0x5d, 0x00, 0},
  {0x65, 0x5e, 0x05, 0},
  {0x65, 0x5f, 0x0a, 0},
  {0x65, 0x60, 0x03, 0},
  {0x65, 0x61, 0x96, 0},
  {0x65, 0x62, 0x05, 0},
  {0x65, 0x63, 0x06, 0},
  {0x65, 0x64, 0x05, 0},
  {0x65, 0x65, 0x04, 0},
  {0x65, 0x66, 0x00, 0},
  {0x65, 0x67, 0x04, 0},
  {0x65, 0x68, 0x05, 0},
  {0x65, 0x69, 0x00, 0},
  {0x65, 0x6a, 0x05, 0},
  {0x65, 0x6b, 0x0a, 0},
  {0x65, 0x6c, 0x03, 0},
  {0x65, 0x6d, 0x95, 0},
  {0x65, 0x6e, 0x05, 0},
  {0x65, 0x6f, 0x06, 0},
  {0x65, 0x70, 0x05, 0},
  {0x65, 0x71, 0x04, 0},
  {0x65, 0x72, 0x00, 0},
  {0x65, 0x73, 0x04, 0},
  {0x65, 0x74, 0x05, 0},
  {0x65, 0x75, 0x00, 0},
  {0x65, 0x76, 0x05, 0},
  {0x65, 0x77, 0x0a, 0},
  {0x65, 0x78, 0x03, 0},
  {0x65, 0x79, 0x94, 0},
  {0x65, 0x7a, 0x05, 0},
  {0x65, 0x7b, 0x06, 0},
  {0x65, 0x7c, 0x00, 0},
  {0x65, 0x7d, 0x00, 0},
  {0x65, 0x7e, 0x05, 0},
  {0x65, 0x7f, 0x04, 0},
  {0x65, 0x80, 0x00, 0},
  {0x65, 0x81, 0x04, 0},
  {0x65, 0x82, 0x05, 0},
  {0x65, 0x83, 0x00, 0},
  {0x65, 0x84, 0x05, 0},
  {0x65, 0x85, 0x0a, 0},
  {0x65, 0x86, 0x03, 0},
  {0x65, 0x87, 0x93, 0},
  {0x65, 0x88, 0x05, 0},
  {0x65, 0x89, 0x06, 0},
  {0x65, 0x8a, 0x00, 0},
  {0x65, 0x8b, 0x00, 0},
  {0x65, 0x8c, 0x05, 0},
  {0x65, 0x8d, 0x04, 0},
  {0x65, 0x8e, 0x00, 0},
  {0x65, 0x8f, 0x04, 0},
  {0x65, 0x90, 0x05, 0},
  {0x65, 0x91, 0x00, 0},
  {0x65, 0x92, 0x05, 0},
  {0x65, 0x93, 0x0a, 0},
  {0x65, 0x94, 0x03, 0},
  {0x65, 0x95, 0x92, 0},
  {0x65, 0x96, 0x05, 0},
  {0x65, 0x97, 0x06, 0},
  {0x65, 0x98, 0x05, 0},
  {0x65, 0x99, 0x04, 0},
  {0x65, 0x9a, 0x00, 0},
  {0x65, 0x9b, 0x04, 0},
  {0x65, 0x9c, 0x05, 0},
  {0x65, 0x9d, 0x00, 0},
  {0x65, 0x9e, 0x05, 0},
  {0x65, 0x9f, 0x0a, 0},
  {0x65, 0xa0, 0x03, 0},
  {0x65, 0xa1, 0x91, 0},
  {0x65, 0xa2, 0x05, 0},
  {0x65, 0xa3, 0x06, 0},
  {0x65, 0xa4, 0x05, 0},
  {0x65, 0xa5, 0x04, 0},
  {0x65, 0xa6, 0x00, 0},
  {0x65, 0xa7, 0x04, 0},
  {0x65, 0xa8, 0x05, 0},
  {0x65, 0xa9, 0x00, 0},
  {0x65, 0xaa, 0x05, 0},
  {0x65, 0xab, 0x0a, 0},
  {0x65, 0xac, 0x03, 0},
  {0x65, 0xad, 0x90, 0},
  {0x65, 0xae, 0x05, 0},
  {0x65, 0xaf, 0x06, 0},
  {0x65, 0xb0, 0x05, 0},
  {0x65, 0xb1, 0x04, 0},
  {0x65, 0xb2, 0x00, 0},
  {0x65, 0xb3, 0x04, 0},
  {0x65, 0xb4, 0x05, 0},
  {0x65, 0xb5, 0x00, 0},
  {0x65, 0xb6, 0x05, 0},
  {0x65, 0xb7, 0x0a, 0},
  {0x65, 0xb8, 0x02, 0},
  {0x65, 0xb9, 0x90, 0},
  {0x65, 0xba, 0x05, 0},
  {0x65, 0xbb, 0x06, 0},
  {0x65, 0xbc, 0x00, 0},
  {0x65, 0xbd, 0xff, 0},
  {0x65, 0xbe, 0x04, 0},
  {0x65, 0xbf, 0x70, 0},
  {0x65, 0xc0, 0x08, 0},
  {0x65, 0xc1, 0x76, 0},
  {0x65, 0xc2, 0x00, 0},
  {0x65, 0xc3, 0xff, 0},
  {0x65, 0xc4, 0x08, 0},
  {0x65, 0xc5, 0x76, 0},
  {0x65, 0xc6, 0x04, 0},
  {0x65, 0xc7, 0x0c, 0},
  {0x65, 0xc8, 0x05, 0},
  {0x65, 0xc9, 0x07, 0},
  {0x65, 0xca, 0x04, 0},
  {0x65, 0xcb, 0x04, 0},
  {0x65, 0xcc, 0x00, 0},
  {0x65, 0xcd, 0xff, 0},
  {0x65, 0xce, 0x00, 0},
  {0x65, 0xcf, 0xff, 0},
  {0x65, 0xd0, 0x00, 0},
  {0x65, 0xd1, 0xff, 0},
  {0x30, 0xeb, 0x04, 0},
  {0x30, 0xed, 0x5a, 0},
  {0x30, 0xee, 0x01, 0},
  {0x30, 0xef, 0x80, 0},
  {0x30, 0xf1, 0x5a, 0},
  {0x30, 0x3a, 0x04, 0},
  {0x30, 0x3b, 0x7f, 0},
  {0x30, 0x3c, 0xfe, 0},
  {0x30, 0x3d, 0x19, 0},
  {0x30, 0x3e, 0xd7, 0},
  {0x30, 0x3f, 0x09, 0},
  {0x30, 0x40, 0x78, 0},
  {0x30, 0x42, 0x05, 0}//, HOLD OFF STREAM UNTIL START API
  //{0x30, 0x12, 0x01, 100} // start stream
};
