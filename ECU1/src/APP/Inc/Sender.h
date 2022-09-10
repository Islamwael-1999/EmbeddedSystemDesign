
#include <Std_Types.h>
#include <DIO.h>



/******************************************************************
 * \Syntax          :void Sender_sendData(uint8 * data)
 * \Description     : Sends Sensor's data provided in array
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : currentSwitchState the current switch state reading
 *                    Switch_ID the switch number 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Sender_sendData(uint8 * data);


/******************************************************************
 * \Syntax          : uint32 Sender_init();
 * \Description     : 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : pin switch pin number
 *                    port switch port number
 * \Parameters (out): None
 * \Return value    : Switch id
 *****************************************************************/

uint32 Sender_init();