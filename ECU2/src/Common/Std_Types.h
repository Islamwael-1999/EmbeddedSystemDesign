/*******************************************************************
 *  FILE DESCIPTION
 *  --------------------------------------------------------------*/
/**     File:  Std_Types.h
 *      Module: -
 *
 *      Description: Provides Standrad Types
 *
 *
 ******************************************************************/
 #ifndef Std_Types_H
 #define Std_Types_H
/******************************************************************
 *  INCLUDES
 *****************************************************************/
#include "Platform_Types.h"
#include "Compiler.h"
  
/******************************************************************
 *  	LOCAL MACROS CONSTANT\FUNCTION
 *****************************************************************/
 
/******************************************************************
 *  	LOCAL DATA
 *****************************************************************/
 
/******************************************************************
 *  	GLOBAL DATA PROTOTYPES
 *****************************************************************/
typedef unsigned char  boolean;

typedef signed char      sint8;
typedef unsigned char    uint8;
typedef signed short    sint16;
typedef unsigned short  uint16;
typedef signed long     sint32;
typedef unsigned long   uint32;

typedef float          float32;
typedef double         float64;

#ifdef  PLATFORM_SUPPORT_SINT64_UINT64
typedef signed long long sint64;
typedef unsigned long long uint64;
#endif

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

#endif /*Std_Types_H*/

/******************************************************************
 *  	END OF FILE: Std_Types.h
 *****************************************************************/

