#include <Std_Types.h>
 

extern char [3] data ;

/******************************************************************
 * \Syntax          : void Receiver_recieveData();
 * \Description     : Saves data recieved by CAN to be used when
 *                      checking vehicles condition
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Receiver_recieveData();
/******************************************************************
 * \Syntax          : void Receiver_init();
 * \Description     : Initializes the receiver
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) :
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Receiver_init();

