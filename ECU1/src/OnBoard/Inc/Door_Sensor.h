#include <Std_Types.h>
 
 typedef enum{
    CLOSE,
    OPEN
}Door_State;

/******************************************************************
 * \Syntax          : void Door_init(void)
 * \Description     : Initialize the Door sensor module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Door_init(void);

/******************************************************************
 * \Syntax          : Door_State Door_getSensorReading(void)
 * \Description     : get the current sensor reading 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : Door_State the sensor reading (open/close)
 *****************************************************************/
Door_State Door_getSensorReading(void);
