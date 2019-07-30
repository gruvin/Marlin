/*
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// PT100 with E3D INA826 amp on 3.3V SKR 1.3 (Smoothieboard)
/// *** SOME TEMPS EXTRAPOLATED *** See table below.
// The PT100 in the Ultimaker v2.0 electronics has a high sample value for a high temperature.
// This does not match the normal thermistor behavior so we need to set the following defines
#if THERMISTOR_HEATER_0 == 21
  #define HEATER_0_RAW_HI_TEMP 16383
  #define HEATER_0_RAW_LO_TEMP 0
#endif
#if THERMISTOR_HEATER_1 == 21
  #define HEATER_1_RAW_HI_TEMP 16383
  #define HEATER_1_RAW_LO_TEMP 0
#endif
#if THERMISTOR_HEATER_2 == 21
  #define HEATER_2_RAW_HI_TEMP 16383
  #define HEATER_2_RAW_LO_TEMP 0
#endif
#if THERMISTOR_HEATER_3 == 21
  #define HEATER_3_RAW_HI_TEMP 16383
  #define HEATER_3_RAW_LO_TEMP 0
#endif
#if THERMISTOR_HEATER_4 == 21
  #define HEATER_4_RAW_HI_TEMP 16383
  #define HEATER_4_RAW_LO_TEMP 0
#endif
#if THERMISTOR_HEATER_5 == 21
  #define HEATER_5_RAW_HI_TEMP 16383
  #define HEATER_5_RAW_LO_TEMP 0
#endif
#if THERMISTORBED == 21
  #define HEATER_BED_RAW_HI_TEMP 16383
  #define HEATER_BED_RAW_LO_TEMP 0
#endif
#if THERMISTORCHAMBER == 21
  #define HEATER_CHAMBER_RAW_HI_TEMP 16383
  #define HEATER_CHAMBER_RAW_LO_TEMP 0
#endif
const short temptable_21[][2] PROGMEM = {
  { OV(  0),    0 },  // EXTRAPOLATED
  { OV(218),    1 },  // EXTRAPOLATED
  { OV(229),   10 },  // EXTRAPOLATED
  { OV(240),   20 },  // EXTRAPOLATED
  { OV(251),   30 },  // EXTRAPOLATED
  { OV(262),   40 },  // MEASURED ºC
  { OV(273),   50 },  // MEASURED ºC
  { OV(284),   60 },  // MEASURED ºC
  { OV(293),   70 },  // MEASURED ºC
  { OV(303),   80 },  // MEASURED ºC
  { OV(313),   90 },  // MEASURED ºC
  { OV(324),  100 },  // MEASURED ºC
  { OV(332),  110 },  // MEASURED ºC
  { OV(342),  120 },  // MEASURED ºC
  { OV(351),  130 },  // MEASURED ºC
  { OV(361),  140 },  // MEASURED ºC
  { OV(369),  150 },  // MEASURED ºC
  { OV(379),  160 },  // MEASURED ºC
  { OV(385),  170 },  // MEASURED ºC
  { OV(393),  180 },  // MEASURED ºC
  { OV(402),  190 },  // MEASURED ºC
  { OV(412),  200 },  // MEASURED ºC
  { OV(422),  210 },  // MEASURED ºC
  { OV(432),  220 },  // MEASURED ºC
  { OV(440),  230 },  // MEASURED ºC
  { OV(450),  240 },  // MEASURED ºC
  { OV(460),  250 },  // MEASURED ºC
  { OV(469),  260 },  // MEASURED ºC
  { OV(478),  270 },  // MEASURED ºC
  { OV(487),  280 },  // MEASURED ºC
  { OV(496),  290 },  // MEASURED ºC
  { OV(506),  300 },  // EXTRAPOLATED
  { OV(515),  310 },  // EXTRAPOLATED
  { OV(525),  320 },  // EXTRAPOLATED
  { OV(535),  330 },  // EXTRAPOLATED
  { OV(545),  340 },  // EXTRAPOLATED
  { OV(554),  350 },  // EXTRAPOLATED
  { OV(564),  360 },  // EXTRAPOLATED
  { OV(574),  370 },  // EXTRAPOLATED
  { OV(583),  380 },  // EXTRAPOLATED
  { OV(593),  390 },  // EXTRAPOLATED
  { OV(603),  400 },  // EXTRAPOLATED
  { OV(698),  500 },  // EXTRAPOLATED
  { OV(681),  600 },  // EXTRAPOLATED
  { OV(776),  700 },  // EXTRAPOLATED
  { OV(870),  800 },  // EXTRAPOLATED
  { OV(964),  900 },  // EXTRAPOLATED
  { OV(1056), 1000 }, // EXTRAPOLATED
  { OV(1149), 1100 }  // EXTRAPOLATED
};
