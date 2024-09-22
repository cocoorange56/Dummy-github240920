#ifndef LOOP_H  //#ifndef...#endif,条件编译预编译命令,防止头文件的重复包含和编译.
/*如果一个项目里有两个.c文件（A/B）同时include了同一个头文件（H），而编译时，这两个.c文件要一同编译成一个可运行文件，
 * 在文件A中include了头文件H，在文件B中再次include头文件的话，会产生声明冲突。而将头文件内容放到
 * #ifndef
 * #endif中，会在include之前判断该头文件是否已经被include过，避免重复引用。*/
#define LOOP_H
/*
 * */
#ifdef __cplusplus
extern "C" {
#endif
/*---------------------------- C Scope ---------------------------*/
#include "stdint-gcc.h"

void Main();
void OnUartCmd(uint8_t* _data, uint16_t _len);
void OnCanCmd(uint8_t _cmd, uint8_t* _data, uint32_t _len);

#ifdef __cplusplus
}
/*---------------------------- C++ Scope ---------------------------*/
#include <cstdio>
#include "Motor/motor.h"
#include "mt6816_stm32.h"
#include "tb67h450_stm32.h"
#include "encoder_calibrator_stm32.h"
#include "button_stm32.h"
#include "led_stm32.h"
#include "adc.h"
#endif
#endif
