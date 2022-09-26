#include <Std_Types.h>
 
 typedef enum{
    CLOSE,
    OPEN
}LightSW_State;

/******************************************************************
 * \Syntax          : void LightSw_init(void)
 * \Description     : Initialize the Door sensor module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void LightSw_init(void);

/******************************************************************
 * \Syntax          : Door_State LightSW_getLightSenReading(void)
 * \Description     : get the current sensor reading 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): LightSW_State
 * \Return value    : Door_State the sensor reading (open/close)
 *****************************************************************/
LightSW_State LightSW_getLightSenReading(void);
