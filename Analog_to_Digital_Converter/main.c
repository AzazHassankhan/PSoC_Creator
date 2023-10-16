/*========================================
 *
 *Copyright YOUR COMPANY, THE YEAR
 *All Rights Reserved
 *UNPUBLISHED, LICENSED SOFTWARE.
 *
 *CONFIDENTIAL AND PROPRIETARY INFORMATION
 *WHICH IS THE PROPERTY OF your company.
 *
 *========================================
 */
#include "project.h"
#include "adc_file.h"

int main(void)
{
	CyGlobalIntEnable; /*Enable global interrupts. */

	/*Place your initialization/startup code here (e.g. MyInst_Start()) */
	Component_Starter_Func();

	for (;;)
	{
		UART_func(ADC_Func());
		PWM_1_WriteCompare(ADC_Func());
	}
}

/*[] END OF FILE */