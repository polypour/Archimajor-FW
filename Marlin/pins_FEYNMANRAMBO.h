/****************************************************************************************
* FeynmanRambo pin assignment (pins_FEYNMANRAMBO.h)
*
****************************************************************************************/
#if MOTHERBOARD == BOARD_FEYNMANRAMBO
#ifndef __SAMG55J19__
 #error Oops!  Make sure you have 'Feynman' selected from the 'Tools -> Boards' menu.
#endif
#define KNOWN_BOARD 1
#define HAVE_TMC2130_DRIVERS 1
#define TMC2130_USES_HW_SPI
//#define TMC2130_USES_SW_ENABLE

//SAMG55 XPLAINED PRO
//PA02 SW0
//PA06 Yellow LED0

// Crystal
//PA07 XIN32
//PA08 XOUT32

//USB
//PA22 DP
//PA21 DM
//PB02 USB ID

// Serial Wire Debug
//PB07 SWD clock
//PB06 SWD data
//PB05 SWD trace data

//EDBG to VCOM
//PA28 UART TXD (SAM G55 TX line)
//PA27 UART RXD (SAM G55 RX line)


#undef X_MS1_PIN
#undef X_MS2_PIN
#undef Y_MS1_PIN
#undef Y_MS2_PIN
#undef Z_MS1_PIN
#undef Z_MS2_PIN
#undef E0_MS1_PIN
#undef E0_MS2_PIN
#undef E1_MS1_PIN
#undef E1_MS2_PIN
//#undef DIGIPOTSS_PIN
//#undef HEATER_3_PIN
//#undef TEMP_3_PIN

#define X_STEP_PIN          43 //PB11 S2_STEP
#define X_DIR_PIN           42 //PB10 S2_DIR
#define X_ENABLE_PIN        -1
#define X_MIN_PIN           -1
#define X_MAX_PIN           -1
#define X_TMC2130_CS        45 //PB13 S0_nCS

#define Y_STEP_PIN          43 //PB11 S2_STEP
#define Y_DIR_PIN           42 //PB10 S2_DIR
#define Y_ENABLE_PIN        -1 //13
#define Y_MIN_PIN          -1
#define Y_MAX_PIN          -1
#define Y_TMC2130_CS       47

#define Z_STEP_PIN         23 //PA23 S0_STEP
#define Z_DIR_PIN          46 //PB14 S0_DIR
#define Z_ENABLE_PIN        5 //PA5 STEP_EN
#define Z_MIN_PIN          -1
#define Z_MAX_PIN          -1
#define Z_TMC2130_CS       30 //PA30 S2_nCS

#define E0_STEP_PIN        43 //PB11 S2_STEP
#define E0_DIR_PIN         42 //PB10 S2_DIR
#define E0_ENABLE_PIN      -1 //5
#define E0_TMC2130_CS      30 //PA30 S2_nCS

#define E1_STEP_PIN        -1
#define E1_DIR_PIN         -1
#define E1_ENABLE_PIN      -1

#define E2_STEP_PIN        -1
#define E2_DIR_PIN         -1
#define E2_ENABLE_PIN      -1
/*
#define X_MS1_PIN          39 //PC7 MOD0E1 //As listed in schematic
#define X_MS2_PIN          38 //PC6 MOD1E1
#define X_MS3_PIN          37 //PC5 MOD2E1
#define Y_MS1_PIN          50 //PC13 MODE0E2
#define Y_MS2_PIN          51 //PC12 MODE1E2
#define Y_MS3_PIN          92 //PC11 MODE2E2 -AddOns
#define Z_MS1_PIN          44 //PC19 MOD0E Z
#define Z_MS2_PIN          45 //PC18 MOD1E Z
#define Z_MS3_PIN          46 //PC17 MOD2E Z
#define E0_MS1_PIN        105 //PB22 MOD0E3 -AddOns
#define E0_MS2_PIN        106 //PC27 MOD1E3 -AddOns
#define E0_MS3_PIN        104 //PC20 MOD2E3 -AddOns
#define E1_MS1_PIN         25 //PD0 MOD0E4
#define E1_MS2_PIN         18 //PA11 MOD1E4
#define E1_MS3_PIN         19 //PA10 MOD2E4
*/

#define Y2_STEP_PIN        -1
#define Y2_DIR_PIN         -1
#define Y2_ENABLE_PIN      -1
#undef Y2_STEP_PIN
#undef Y2_DIR_PIN
#undef Y2_ENABLE_PIN

#define Z2_STEP_PIN        29 //PA29 S1_STEP
#define Z2_DIR_PIN         24 //PA24 S1_DIR
#define Z2_ENABLE_PIN       5 //PA5 STEP_EN
/*
#define MOTOR_CURRENT_PWM_X_PIN   12 //PD8  REF1 TIOB8
#define MOTOR_CURRENT_PWM_Y_PIN   58 //PA6  REF2 TIOB2
#define MOTOR_CURRENT_PWM_Z_PIN   10 //PC29 REFZ TIOB7
#define MOTOR_CURRENT_PWM_E0_PIN   3 //PC28 REF3 TIOA7
#define MOTOR_CURRENT_PWM_E1_PIN  11 //PD7  REF4 TIOA8

#define MOTOR_CURRENT_PWM_RANGE 2750 // 3.3 volts * (100 kOhm / (100 kOhm + 20 kOhm) ) = 2.75 max voltage out
#define DEFAULT_PWM_MOTOR_CURRENT  {1000, 1000, 1000, 1000, 1000} //X Y Z E0 E1, 1000 = 1000mAh
*/
#define SDPOWER            -1


//#define SDSS             -1

#define LED_PIN            -1
#define PS_ON_PIN          -1
//#define Z_PROBE_PIN      -1
#define CONTROLLERFAN_PIN  -1

#define FAN_PIN             15
#define FAN2_PIN            -1

#define HEATER_0_PIN        16
#define HEATER_1_PIN        -1
#define HEATER_2_PIN        -1
#define HEATER_BED_PIN      31



#define TEMP_0_PIN          17
#define TEMP_1_PIN          -1
#define TEMP_BED_PIN        18
#define TEMP_2_PIN          -1

#ifdef Z_PROBE_SLED
  #define SLED_PIN         -1
#endif

#ifdef ULTRA_LCD
  #define KILL_PIN           -1 //Button is connected directly to NRST Hardware Reset Pin on SAM3X
  #ifdef NEWPANEL
    #define BEEPER          -1 //arduino pin which triggers an piezzo beeper
    #define LCD_PINS_RS     -1
    #define LCD_PINS_ENABLE -1
    #define LCD_PINS_D4     -1
    #define LCD_PINS_D5     -1
    #define LCD_PINS_D6     -1
    #define LCD_PINS_D7     -1
    
    #define SDCARDDETECT    -1
    #define SDSS            -1
    
    //buttons are directly attached using AUX-2
    #define BTN_EN1         -1
    #define BTN_EN2         -1
    #define BTN_ENC         -1

    #define BLEN_C 2
    #define BLEN_B 1
    #define BLEN_A 0

    //encoder rotation values
    #define encrot0 0
    #define encrot1 2
    #define encrot2 3
    #define encrot3 1
  #endif  //NEWPANEL
#else
  #define SDSS            87 //only defined to prevent compile errors
#endif //ULTRA_LCD

//#ifndef SDSUPPORT
  // these pins are defined in the SD library if building with SD support
  //#define SCK_PIN          76
  //#define MISO_PIN         74
  //#define MOSI_PIN         75
//#endif

#endif /* TIGERSHARK */

