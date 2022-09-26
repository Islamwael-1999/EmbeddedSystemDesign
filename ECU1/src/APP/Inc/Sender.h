
#include <Std_Types.h>
#include <DIO.h>



/******************************************************************
 * \Syntax          :void Sender_sendData(uint8 * data)
 * \Description     : Sends Sensor's data provided in array
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 *            name  : data 
 *      description : Variable that holds data value to be sent 
 *            type  :uint8
 *            Range :0 -->255                   
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
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : Switch id
 *****************************************************************/

uint32 Sender_init();