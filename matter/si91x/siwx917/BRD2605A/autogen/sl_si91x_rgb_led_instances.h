/***************************************************************************/ /**
 * @file sl_si91x_rgb_led_instances.h.jinja
 * @brief RGB LED Instances
 *******************************************************************************
 * # License
 * <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef SL_SI91x_RGB_LED_INSTANCES_H
#define SL_SI91x_RGB_LED_INSTANCES_H

#include "sl_si91x_rgb_led.h"

#ifdef SI917_RGB_DRIVER_OLD
extern const sl_led_t led_red;
extern const sl_led_t led_green;
extern const sl_led_t led_blue;
#else
  extern const sl_rgb_led_t led_led0;
#endif

void rgb_led_init_instances(void);

#endif // SL_SI91x_RGB_LED_INSTANCES_H
