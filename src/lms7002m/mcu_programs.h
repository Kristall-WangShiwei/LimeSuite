#ifndef LMS7_MCU_PROGRAMS_H
#define LMS7_MCU_PROGRAMS_H

#include <stdint.h>

#define MCU_PROGRAM_SIZE 16384

#define MCU_ID_DC_IQ_CALIBRATIONS 0x01
#define MCU_ID_CALIBRATIONS_SINGLE_IMAGE 0x03

#define MCU_FUNCTION_CALIBRATE_TX 1
#define MCU_FUNCTION_CALIBRATE_RX 2
#define MCU_FUNCTION_UPDATE_BW 3
#define MCU_FUNCTION_UPDATE_REF_CLK 4
#define MCU_FUNCTION_TUNE_TX_FILTER 5
#define MCU_FUNCTION_TUNE_RX_FILTER 6

extern const uint8_t mcu_program_lms7_dc_iq_calibration_bin[16384];

#endif

