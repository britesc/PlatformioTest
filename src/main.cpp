/**
 * @file main.cpp
 * @author Julian (51fiftyone51fiftyone@gmail.com)
 * @brief Test of PlatformIO with LVGL Library
 * @version 0.1
 * @date 20251024
 * @copyright Copyright (c) 2025
 * 
 */

/*
 * Start of Arduino Includes
 */
#include <Arduino.h>
/*
 * End Arduino Includes
 */

/*
 * Start Arduino_GFX settings
 */
#include "Arduino_GFX_library.h"
#include "lcd_defines/lcd_defines.h"
#include "i2c_defines/i2c_defines.h"
#include "Arduino_RPiPicoSPI.h"// provide the definition of Arduino_RPiPicoSPI

Arduino_DataBus *bus = new Arduino_RPiPicoSPI(LCD_DC_PIN, LCD_CS_PIN, LCD_SCK_PIN, LCD_MOSI_PIN, LCD_MISO_PIN, LCD_SPI_NUM);

/* More display class: https://github.com/moononournation/Arduino_GFX/wiki/Display-Class */
Arduino_GFX *gfx = new Arduino_ST7789(
  bus, LCD_RST_PIN, LCD_Orientation /* rotation */, true /* IPS */);
 /*
 * End Arduino_GFX settings
 */

#include "lvgl.h"

#include "bsp_cst328.h"



// put function declarations here:


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
}

void setup1() {
  // put your setup code here, to run once:

}

void loop1() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
