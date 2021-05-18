 /******************************************************************************
 *
 * [MODULE]: Seven Segment
 *
 * [FILE NAME]: seven_segment.h
 *
 * [DESCRIPTION]: Header file for the Seven Segment Driver
 *
 * [AUTHOR]: Ahmed Hassan
 *
 *******************************************************************************/

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

/*******************************************************************************
 *                             Preprocessor Macros                             *
 *******************************************************************************/

/* Seven Segment Pin Configurations */

#define SEGMENT_CTRL_PORT       PORTA
#define SEGMENT_CTRL_PORT_DIR   DDRA
#define SEGMENT_DATA_PORT       PORTC
#define SEGMENT_DATA_PORT_DIR   DDRC

/*******************************************************************************
 *                             Functions Prototypes                            *
 *******************************************************************************/

/*******************************************************************************
 * [Function Name]: SEGMENT_init
 *
 * [Description]: Function to Initialize the Seven Segment Driver
 *
 * [Args]:	  None
 *
 * [in]	          None
 *
 * [out]	  None
 *
 * [in/out]	  None
 *
 * [Returns]:     None
 *******************************************************************************/
void SEGMENT_init(void);

/*******************************************************************************
 * [Function Name]: SEGMENT_displayDigitalNUmbers
 *
 * [Description]: Function to display digital numbers on the Seven Segment
 *
 * [Args]:	  digit
 *
 * [in]		  digit: Unsigned Character to store number to be displayed on 7-SEG
 *
 * [out]	  None
 *
 * [in/out]	  None
 *
 * [Returns]:     None
 *******************************************************************************/
void SEGMENT_displayDigitalNUmbers(uint8 digit);

#endif /* SEVEN_SEGMENT_H_ */
