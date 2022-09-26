
#include <Std_Types.h>
#include <DIO.h>

extern uint8 currentSwitchState;


/******************************************************************
 * \Syntax          : void LightSW_saveData(uint8 * currentSwitchState)
 * \Description     : Saves the LightSw data in provided address
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 *            name  : currentSwitchState 
 *      description : Variable to save the switch State opened if 0 or closed if 1 
 *            type  :uint8
 *            Range :0 -->1
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
 *            name  : LightSwitchNumber 
 *      description : Variable to indicate the switch numer to initialize
 *            type  :uint8
 *            Range :0 -->1
 * \Parameters (out): None
 * \Return value    : Switch id
 *****************************************************************/

uint32 LightSW_init(uint8 LightSwitchNumber);