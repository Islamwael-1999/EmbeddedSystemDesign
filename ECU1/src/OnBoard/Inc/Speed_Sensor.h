#include <Std_Types.h>

#define Speed uint32

/******************************************************************
 * \Syntax          : void Speed_Init(void)
 * \Description     : Initialize the Speed sensor module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Speed_Init(void);

/******************************************************************
 * \Syntax          : Speed_GetSensorReading(void)
 * \Description     : get the current speed reading 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : Speed the speed reading in km/h
 *****************************************************************/
Speed Speed_GetSensorReading(void);
