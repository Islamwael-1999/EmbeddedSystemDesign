/*******************************************************************
 *  FILE DESCIPTION
 *  --------------------------------------------------------------*/
/**     File:  Platform_Types.h
 *      Module: -
 *
 *      Description: Provides Standrad Types platform dependent
 *
 *
 ******************************************************************/
 #ifndef Platform_Types_H
 #define Platform_Types_H
/******************************************************************
 *  INCLUDES
 *****************************************************************/

/******************************************************************
 *  	GLOBAL CONSTANT MACROS\FUNCTIONS
 *****************************************************************/


#define SET_BIT(REG,PIN) (REG) |=  (1 << (PIN))
#define CLR_BIT(REG,PIN) (REG) &= ~(1 << (PIN))
#define TOG_BIT(REG,PIN) (REG) ^=  (1 << (PIN))
#define GET_BIT(REG,PIN) (((REG) >> (PIN)) & 0x01)
#define GET_BIT_MASK(portAdress,pin) portAdress+((0x1<<pin)<<2)
#define GET_REGISTER_POINTER(RegisterAdress)   *((volatile uint32 *)(RegisterAdress))

#define WORD_LENGTH_BITS 32u
#define WORD_LENGTH_BYTES 4u
#define MSB_FIRST         0u
#define LSB_FISRT         1u

#define HIGH_BYTE_FIRST   0u
#define LOW_BYTE_FIRST    1u

#ifdef TRUE
    #define TRUE 1u
#endif

#ifdef FALSE
    #define FALSE 0u
#endif

#define ENABLE  1u
#define DISABLE 0u

#define CPU_BIT_ORDER   LSB_FISRT
#define CPU_BYTE_ORDER  LOW_BYTE_FIRST


#define NULL_PTR       ((void *)0)
#define NULL					0
/******************************************************************
 *  	LOCAL MACROS CONSTANT\FUNCTION
 *****************************************************************/

/******************************************************************
 *  	LOCAL DATA
 *****************************************************************/
 
/******************************************************************
 *  	GLOBAL DATA PROTOTYPES
 *****************************************************************/


/******************************************************************
 *  	LOCAL FUNCTION PROTOTYPES
 *****************************************************************/
  
/******************************************************************
 *  	LOCAL FUNCTIONS
 *****************************************************************/
 
/******************************************************************
 *  	GLOBAL FUNCTIONS
 *****************************************************************/

/******************************************************************
 *  	GLOBAL DATA TYPES AND STRUCTURES
 *****************************************************************/

/******************************************************************
 * \Syntax          : void IntCtrl_Init(void)
 * \Description     : initialize Nvic\SCB Module by parsing the configuration
 *                    into Nvic\SCB registers
 * 
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/   

#endif /*Platform_Types_H*/

/******************************************************************
 *  	END OF FILE: Platform_Types.h
 *****************************************************************/

