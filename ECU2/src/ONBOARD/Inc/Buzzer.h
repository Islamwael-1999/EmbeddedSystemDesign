#include <Std_Types.h>
#include <DIO.h>

uint8 buzzerID; 
typedef struct 
{
    Pin_Num pin ;
    Port_Num port;
}Buzzer_config_t;


/******************************************************************
 * \Syntax          :  Buzzer_init();
 * \Description     : initialize a Buzzer with port and pin numbers 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : pin Buzzer pin number
 *                    port Buzzer port number
 * \Parameters (out): None
 * \Return value    : 
 *****************************************************************/
void Buzzer_init(Buzzer_config_t * config);

/******************************************************************
 * \Syntax          : void Buzzer_setON(uint32 buzzerID)

 * \Description     : set the value on the buzzer to high
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : buzzerID the buzzer number
 * \Parameters (out): None
 * \Return value    : None 
 *****************************************************************/
void Buzzer_setON(uint32 buzzerID);

/******************************************************************
 * \Syntax          :void Buzzer_setOFF(uint32 buzzerID)

 * \Description     : set the value on the buzzer to low
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : buzzerID the buzzer number
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Buzzer_setOFF(uint32 buzzerID);
