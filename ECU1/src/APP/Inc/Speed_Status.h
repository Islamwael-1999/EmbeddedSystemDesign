#include <Std_Types.h>
#define Speed_Refresh_Rate 5

extern uint32 currentSpeed;


/******************************************************************
 * \Syntax          : void Speed_updateData(uint32 * currSpeed)
 * \Description     : This API gets speed data and saves it in the address provided
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : uint32 * currSpeed
 *            name  : currSpeed 
 *      description : Variable used to save current speed 
 *            type  :uint8
 *            Range :0 -->255
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/

void Speed_updateData(uint32 * currSpeed);


