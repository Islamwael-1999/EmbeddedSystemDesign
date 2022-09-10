
#include <Std_Types.h>


/******************************************************************
 * \Syntax          : void LED_init()
 * \Description     : 
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : state the car global state variable
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void CntlLed_init();

/******************************************************************
 * \Syntax          : void LED_ON()
 * \Description     : led on
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : state the car global state variable
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void CntlLed_setON();

/******************************************************************
 * \Syntax          : void LED_OFF()
 * \Description     : led off
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : state the car global state variable
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void CntLed_setOFF();

