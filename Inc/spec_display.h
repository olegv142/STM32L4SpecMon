#pragma once

#include "arm_math.h"
#include "lcd.h"

#define SPEC_LEN LCD_W

#ifdef __cplusplus
extern "C" {
#endif

void spec_display_init(void);
void spec_display_show(float32_t spec[SPEC_LEN]);

#ifdef __cplusplus
}
#endif