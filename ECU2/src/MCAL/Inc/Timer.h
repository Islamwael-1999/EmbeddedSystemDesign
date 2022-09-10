/*******************************************************************
 *  FILE DESCIPTION
 *  --------------------------------------------------------------*/
/**     File:  Gpt.h
 *      Module: GPT
 *
 *      Description: header file for Gpt.Module
 *
 *
 ******************************************************************/
#ifndef GPT_H
#define GPT_H
/******************************************************************
 *  INCLUDES
 *****************************************************************/
#include "Std_Types.h"


/******************************************************************
 *  	LOCAL MACROS CONSTANT\FUNCTION
 *****************************************************************/

/******************************************************************
 *  	LOCAL DATA
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

/*Gpt_Tick_ValueType*/

typedef uint32 TIMER_ValueType;

/*Gpt_Notification_Type*/

typedef void (*TIMERNotification)(void);

/*Gpt_ChannelType*/

typedef enum
{
    Timer_0_16_32_Bit = 0,
    Timer_1_16_32_Bit,
    Timer_2_16_32_Bit,
    Timer_3_16_32_Bit,
    Timer_4_16_32_Bit,
    Timer_5_16_32_Bit,
    Wide_Timer_0_32_64_Bit,
    Wide_Timer_1_32_64_Bit,
    Wide_Timer_2_32_64_Bit,
    Wide_Timer_3_32_64_Bit,
    Wide_Timer_4_32_64_Bit,
    Wide_Timer_5_32_64_Bit

} TIMER_ChannelType;

/*Gpt_Mode_Type*/

typedef enum
{

    GPT_CH_MODE_ONESHOT = 0x1,
    GPT_CH_MODE_CONTINOUS = 0x2

} TIMER_Channel_Mode_Type;

/*Gpt_ModeType*/

typedef enum
{
    GPT_MODE_NORMAL = 0,
    GPT_MODE_SLEEP

} TMER_Mode_Type;

/*Gpt_PredefTimerType*/

typedef struct
{
    /*TODO SEE IF YOU WILL ADD TICK FREQURNCY*/
    boolean GPT_PREDEF_TIMER_100US_32BIT;
    boolean GPT_PREDEF_TIMER_US_16BIT;
    boolean GPT_PREDEF_TIMER_1US_24BIT;
    boolean GPT_PREDEF_TIMER_1US_32BIT;

} TIMER_Driver_Cfg_Type;

/*Gpt_ConfigType*/
typedef struct
{
    TIMER_ChannelType channelId;
    TIMER_ValueType tickValue;
    TIMER_ValueType maxTickValue;
    TIMER_Channel_Mode_Type channelMode;
    TIMERNotification gptNotification;

} TIMER_ConfigType;

/******************************************************************
 * \Syntax          : void TIMER_Init(const Gpt_ConfigType *ConfigPtr)
 * \Description     : Initialize the general purpose timers according
 *                    to user configurations
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : ConfigPtr the array of user configurations for each selected timer
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/

void TIMER_Init(const TIMER_ConfigType *ConfigPtr);

/******************************************************************
 * \Syntax          : void TIMER_StartTimer(Gpt_ChannelType Channel)
 * \Description     : disables the Interrupt on a given channel
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : Channel channel to disable its interrupts
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/

void TIMER_StartTimer(TIMER_ChannelType Channel, TIMER_ValueType Value);

/******************************************************************
 * \Syntax          : void TIMER_StopTimer(Gpt_ChannelType Channel)
 * \Description     : disables the timer TEN feild to stop the timer
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : Channel the channel number to stop
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/

void TIMER_StopTimer(TIMER_ChannelType Channel);


/******************************************************************
 *  	GLOBAL DATA PROTOTYPES
 *****************************************************************/
extern const TIMER_ConfigType Gpt_Cfg[];
extern const TIMER_Driver_Cfg_Type Gpt_Driver_Cfg[];
extern boolean Timer0Flag;

#endif /*GPT_H*/

/******************************************************************
 *  	END OF FILE: Gpt.h
 *****************************************************************/
