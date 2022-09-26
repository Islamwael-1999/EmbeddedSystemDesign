#include <Std_Types.h>
#include <DIO.h>

uint8 LDE_ID;
/******************************************************************
 * \Syntax          : uint8 LED_init(Pin_Num pin , Port_Num port);
 * \Description     : initialize a LED with port and pin numbers 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 *            name  : pin 
 *      description : Chooses pin number led is connected to 
 *            type  :uint8
 *            Range :0 -->8                    
  *            
  *           name  : port 
 *      description : Chooses port number led is connected to 
 *            type  :uint8
 *            Range :0 -->8                     
 *              
 * \Parameters (out): None
 * \Return value    : uint32 LED id
 *****************************************************************/
uint32 LED_init(Pin_Num pin, Port_Num port);

/******************************************************************
 * \Syntax          : void LED_setHIGH(uint32 LDE_ID)
 * \Description     : set the value on the LED to high
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : LDE_ID the LED number
 *           name  : LDE_ID 
 *      description : Chooses led number to set High 
 *            type  :uint8
 *            Range :0 -->8  
 * \Parameters (out): None
 * \Return value    : None 
 *****************************************************************/
void LED_setHIGH(uint8 LDE_ID);
/******************************************************************
 * \Syntax          : void LED_setLOW(uint32 LDE_ID)
 * \Description     : set the value on the LED to low
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 *           name   : LDE_ID 
 *      description : Chooses led number to set Low 
 *            type  :uint8
 *            Range :0 -->8 
 * \Parameters (out): None
 * \Return value    : None 
 *****************************************************************/
void LED_setLOW(uint8 LDE_ID);