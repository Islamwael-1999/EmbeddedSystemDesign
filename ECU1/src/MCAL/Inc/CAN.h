#include <Std_Types.h>


/******************************************************************
 * \Syntax          : void CAN_init(void)
 * \Description     : Initialize the CAN module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void CAN_init(void);


/******************************************************************
 * \Syntax          : void CAN_Send(uint32 value)
 * \Description     : Write a word on the CAN bus
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : value the word to be written on CAN bus
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void CAN_Send(uint32 value);

/******************************************************************
 * \Syntax          : uint32 CAN_recieve(void)
 * \Description     : read a word from the CAN bus
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : word recieved on CAN bus
 *****************************************************************/
uint32 CAN_recieve(void);