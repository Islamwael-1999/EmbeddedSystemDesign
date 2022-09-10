
#include <Std_Types.h>
#include <DIO.h>

extern uint8 currentSwitchState;


/******************************************************************
 * \Syntax          : void LightSW_saveData(uint8 * currentSwitchState)
 * \Description     : Saves the LightSw data in provided address
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : currentSwitchState the current switch state reading
 *                    Switch_ID the switch number 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void LightSW_saveData(uint8 * currentSwitchState);


/******************************************************************
 * \Syntax          : uint32 LightSW_init(uint8 LightSwitchNumber)
 * \Description     : initialize a switch  
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : pin switch pin number
 *                    port switch port number
 * \Parameters (out): None
 * \Return value    : Switch id
 *****************************************************************/

uint32 LightSW_init();