#include <Std_Types.h>
#include <Door_Sensor.h>
#define Door_State_Refresh_Rate 10

extern Door_State currentDoorState;





/******************************************************************
 * \Syntax          : void Door_save_State(Door_State * currDoorState)
 * \Description     : Saves door Status in Provided address
 * 
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : currentDoorState the current Door state reading
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/

void Door_save_State(Door_State * currDoorState);