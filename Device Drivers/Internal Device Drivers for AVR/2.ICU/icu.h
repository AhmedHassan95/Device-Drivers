 /******************************************************************************
 *
 * [MODULE]: ICU
 *
 * [FILE NAME]: icu.h
 *
 * [DESCRIPTION]: Header file for the AVR ICU driver
 *
 * [AUTHOR]: Ahmed Hassan
 *
 *******************************************************************************/

#ifndef ICU_H_
#define ICU_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/
 
typedef enum
{
	NO_CLOCK,F_CPU_CLOCK,F_CPU_8,F_CPU_64,F_CPU_256,F_CPU_1024
}ICU_Clock;

typedef enum
{
	FALLING,RISING
}ICU_EdgeType;

typedef struct
{
	ICU_Clock clock;
	ICU_EdgeType edge;
}ICU_ConfigType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description : Function to initialize the ICU driver
 * 					- Set the required clock
 * 					- Set the required edge detection
 * 					- Enable the Input Capture Interrupt
 * 					- Initialize Timer1 Registers
 */
void ICU_init(const ICU_ConfigType * Config_Ptr);

/* 
 * Description: Function to set the Call Back function address
 */
void ICU_setCallBack(void(*a_ptr)(void));

/* 
 * Description: Function to set the required edge detection
 */
void ICU_setEdgeDetectionType(const ICU_EdgeType a_edgeType);

/*
 * Description: Function to get the Timer1 Value when the input is captured
 *              The value stored at Input Capture Register ICR1
 */
uint16 ICU_getInputCaptureValue(void);

/*
 * Description: Function to clear the Timer1 Value to start count from ZERO
 */
void ICU_clearTimerValue(void);

/* 
 * Description: Function to disable the Timer1 to stop the ICU driver
 */
void ICU_DeInit(void);

#endif /* ICU_H_ */
