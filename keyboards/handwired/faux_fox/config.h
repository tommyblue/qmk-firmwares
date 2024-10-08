// Copyright 2024 Tommaso Visconti (@tommyblue)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* SPI & PMW3360 settings. */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP10
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP11
#define POINTING_DEVICE_CS_PIN GP13

#define ROTATIONAL_TRANSFORM_ANGLE -90
#define POINTING_DEVICE_INVERT_X
// #define POINTING_DEVICE_INVERT_Y

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
