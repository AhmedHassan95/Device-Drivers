/******************************************************************************
 *
 * [MODULE]: Seven Segment
 *
 * [FILE NAME]: seven_segment.h
 *
 * [DESCRIPTION]: Source file for the Seven Segment Driver
 *
 * [AUTHOR]: Ahmed Hassan
 *
 *******************************************************************************/

#include "seven_segment.h"

/*******************************************************************************
 *                           Functions Definitions                             *
 *******************************************************************************/

/*******************************************************************************
 * [Function Name]: SEGMENT_init
 *
 * [Description]: 	Function to Initialize the Seven Segment Driver
 *
 * [Args]:			None
 *
 * [in]			  	None
 *
 * [out]		  	None
 *
 * [in/out]		 	None
 *
 * [Returns]:       None
 *******************************************************************************/
void SEGMENT_init(void)
{
	/* Configure First 4 pins in the Seven Segment as output pins */
	SEGMENT_DATA_PORT_DIR = 0x0F;
	/* Configure First 6 pins in the Seven Segment as output pins */
	SEGMENT_CTRL_PORT_DIR = 0x3F;

	/* Set First 4 pins in 7-SEG DATA PORT with value 0 at the beginning (LEDs OFF) */
	SEGMENT_DATA_PORT &= 0xF0;
	/* Set First 6 pins in 7-SEG CTRL PORT with value 0 to disable All 7-Segments */
	SEGMENT_CTRL_PORT &= 0xC0;
}

/*******************************************************************************
 * [Function Name]: SEGMENT_displayDigitalNUmbers
 *
 * [Description]: 	Function to display digital numbers on the Seven Segment
 *
 * [Args]:			digit
 *
 * [in]			  	digit: Unsigned Character to store number to be displayed on 7-SEG
 *
 * [out]		  	None
 *
 * [in/out]		 	None
 *
 * [Returns]:       None
 *******************************************************************************/
void SEGMENT_displayDigitalNUmbers(uint8 digit)
{
	switch(digit)
	{
	case 0 :
		SEGMENT_DATA_PORT &= ~(1<<0);
		SEGMENT_DATA_PORT &= ~(1<<1);
		SEGMENT_DATA_PORT &= ~(1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 1 :
		SEGMENT_DATA_PORT |=  (1<<0);
		SEGMENT_DATA_PORT &= ~(1<<1);
		SEGMENT_DATA_PORT &= ~(1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 2 :
		SEGMENT_DATA_PORT &= ~(1<<0);
		SEGMENT_DATA_PORT |=  (1<<1);
		SEGMENT_DATA_PORT &= ~(1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 3 :
		SEGMENT_DATA_PORT |=  (1<<0);
		SEGMENT_DATA_PORT |=  (1<<1);
		SEGMENT_DATA_PORT &= ~(1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 4 :
		SEGMENT_DATA_PORT &= ~(1<<0);
		SEGMENT_DATA_PORT &= ~(1<<1);
		SEGMENT_DATA_PORT |=  (1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 5 :
		SEGMENT_DATA_PORT |=  (1<<0);
		SEGMENT_DATA_PORT &= ~(1<<1);
		SEGMENT_DATA_PORT |=  (1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 6 :
		SEGMENT_DATA_PORT &= ~(1<<0);
		SEGMENT_DATA_PORT |=  (1<<1);
		SEGMENT_DATA_PORT |=  (1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 7 :
		SEGMENT_DATA_PORT |=  (1<<0);
		SEGMENT_DATA_PORT |=  (1<<1);
		SEGMENT_DATA_PORT |=  (1<<2);
		SEGMENT_DATA_PORT &= ~(1<<3);
		break;
	case 8 :
		SEGMENT_DATA_PORT &= ~(1<<0);
		SEGMENT_DATA_PORT &= ~(1<<1);
		SEGMENT_DATA_PORT &= ~(1<<2);
		SEGMENT_DATA_PORT |=  (1<<3);
		break;
	case 9 :
		SEGMENT_DATA_PORT |=  (1<<0);
		SEGMENT_DATA_PORT &= ~(1<<1);
		SEGMENT_DATA_PORT &= ~(1<<2);
		SEGMENT_DATA_PORT |=  (1<<3);
		break;
	}
}
