/*****************************************************************************************
 *
 * [FILE NAME] : 
 *
 * [AUTHOR(S)] : Ahmed Hassan
 *
 * [DATE CREATED]: 
 *
 * [DESCRIPTION]: This Project is to design
 *
 *  		  Design Considerations for MCU:
 *
 *	 	  - Target: AVR MCU ATmega 16 (F_CPU = 8 MHZ).
 *		  - 
 *
 *                The sequence of the Program:
 *
 *                 Phase 1:
 *
 *		   Phase 2:			   	
 *
 *****************************************************************************************/

/*****************************************************************************************
 *                               Global Variables                                        *
 *****************************************************************************************/




/*****************************************************************************************
 *                                MAIN FUNCTION                                          *
 *****************************************************************************************/

int main(void)
{
	/********************************************************************************
	 *                           SYSTEM INITIALIZATION                              *
	 ********************************************************************************/

	SREG |= (1 << 7);	/* Enable Global Interrupt, I-bit in SREG register */


	/********************************************************************************
	 *                        APPLICATION	(SUPER LOOP)			        *
	 ********************************************************************************/

	while(1)
	{
		/****************************************************************************
		 *                             USER DECISION			            *
		 ****************************************************************************/


	}	/* END OF SUPER LOOP */
}	/* END OF MAIN FUNCTION */
