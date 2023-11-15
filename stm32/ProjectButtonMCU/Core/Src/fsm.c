/*
 * fsm.c
 *
 *  Created on: Nov 14, 2023
 *      Author: babyh
 */

#include "fsm.h"
/*
#define INIT 1
#define NORMAL_STATE 2
#define LED_GREEN_LANE1 3
#define LED_YELLOW_LANE1 4
#define LED_GREEN_LANE2 5
#define LED_YELLOW_LANE2 6

#define MAN_RED 7
#define MAN_YELLOW 8
#define MAN_GREEN 9
*/

int TimeOfGreen = 3 ;
int TimeOfYellow  = 2;
int TimeOfRed = 5;
int statusLane = 0;

int newCountGreen = 3;
int newCountRed = 5;
int newCountYellow = 2;

int status2HZ = 0;


void fsm_run(){
	switch(status){
		case INIT:

			status = LED_GREEN_LANE1;
			TurnOnLedGreenLane1();
			TurnOnLedRedLane2();
		break;
		case LED_GREEN_LANE1 :
			if(timer1_flag == 1)
			{
				if(TimeOfGreen >= 0)
				{
					TimeOfGreen--;
					TimeOfRed--;
					if(TimeOfGreen < 0)
					{
						status = LED_YELLOW_LANE1;
						TimeOfGreen = newCountGreen;
						TurnOnLedYellowLane1();
						TurnOnLedRedLane2();
					}
				}
				setTimer1(100);
			}

			/*------------ --- Scan 7SEG --- -----------------*/
			  if(timer2_flag == 1)
			  {
				  // Display 7Seg lane 1
				  if(statusLane == 0)
				  {
					  display7SEG(TimeOfGreen/10);
					  update7SEG(0);
					  statusLane = 1;
				  } else if(statusLane == 1){
					  display7SEG(TimeOfGreen%10);
					  update7SEG(1);
					  statusLane = 2;
				  } else if (statusLane == 2){
					  display7SEG(TimeOfRed/10);
					  update7SEG(2);
					  statusLane = 3;
				  } else if (statusLane == 3){
					  display7SEG(TimeOfRed % 10);
					  update7SEG(3);
					  statusLane = 0;
				  }
				  setTimer2(20);
			  }
				/*-----------------------------------------*/

			if(isButton1Pressed())
			{
				status = MAN_RED;
			}
		break;

		case LED_YELLOW_LANE1:
			if(timer1_flag == 1)
			{
				if(TimeOfYellow >= 0)
				{
					TimeOfYellow--;
					TimeOfRed--;
					if(TimeOfYellow < 0)
					{
						status = LED_GREEN_LANE2;
						TimeOfYellow = newCountYellow;
						TimeOfRed = newCountRed;
						TurnOnLedGreenLane2();
						TurnOnLedRedLane1();
					}
					break;
				}
				setTimer1(100);
			}

			/*------------ --- Scan 7SEG --- -----------------*/
			  if(timer2_flag == 1)
			  {
				  // Display 7Seg lane 1
				  if(statusLane == 0)
				  {
					  display7SEG(TimeOfYellow/10);
					  update7SEG(0);
					  statusLane = 1;
				  } else if(statusLane == 1){
					  display7SEG(TimeOfYellow%10);
					  update7SEG(1);
					  statusLane = 2;
				  } else if (statusLane == 2){
					  display7SEG(TimeOfRed/10);
					  update7SEG(2);
					  statusLane = 3;
				  } else if (statusLane == 3){
					  display7SEG(TimeOfRed % 10);
					  update7SEG(3);
					  statusLane = 0;
				  }
				  setTimer2(20);
			  }
				/*-----------------------------------------*/
			if(isButton1Pressed())
			{
				status = MAN_RED;
				setTimer1(25);
			}
		break;

		case LED_GREEN_LANE2:
			if(timer1_flag == 1)
			{
				if(TimeOfGreen >= 0)
				{
					TimeOfGreen--;
					TimeOfRed--;
					if(TimeOfGreen < 0)
					{
						status = LED_YELLOW_LANE2;
						TimeOfGreen = newCountGreen;
						TurnOnLedYellowLane2();
						TurnOnLedRedLane1();
					}
				}
				setTimer1(100);
			}
			/*------------ --- Scan 7SEG --- -----------------*/
			  if(timer2_flag == 1)
			  {
				  // Display 7Seg lane 1
				  if(statusLane == 0)
				  {
					  display7SEG(TimeOfRed/10);
					  update7SEG(0);
					  statusLane = 1;
				  } else if(statusLane == 1){
					  display7SEG(TimeOfRed%10);
					  update7SEG(1);
					  statusLane = 2;
				  } else if (statusLane == 2){
					  display7SEG(TimeOfGreen/10);
					  update7SEG(2);
					  statusLane = 3;
				  } else if (statusLane == 3){
					  display7SEG(TimeOfGreen % 10);
					  update7SEG(3);
					  statusLane = 0;
				  }
				  setTimer2(20);
			  }
				/*-----------------------------------------*/
			if(isButton1Pressed())
			{
				status = MAN_RED;
			}
		break;

		case LED_YELLOW_LANE2:
			if(timer1_flag == 1)
			{
				if(TimeOfYellow >= 0)
				{
					TimeOfYellow--;
					TimeOfRed--;
					if(TimeOfYellow < 0)
					{
						status = LED_GREEN_LANE1;
						TimeOfYellow = newCountYellow;
						TimeOfRed = newCountRed;
						TurnOnLedGreenLane1();
						TurnOnLedRedLane2();
						break;
					}
				}
				setTimer1(100);
			}
			/*------------ --- Scan 7SEG --- -----------------*/
			  if(timer2_flag == 1)
			  {
				  // Display 7Seg lane 1
				  if(statusLane == 0)
				  {
					  display7SEG(TimeOfRed/10);
					  update7SEG(0);
					  statusLane = 1;
				  } else if(statusLane == 1){
					  display7SEG(TimeOfRed%10);
					  update7SEG(1);
					  statusLane = 2;
				  } else if (statusLane == 2){
					  display7SEG(TimeOfYellow/10);
					  update7SEG(2);
					  statusLane = 3;
				  } else if (statusLane == 3){
					  display7SEG(TimeOfYellow% 10);
					  update7SEG(3);
					  statusLane = 0;
				  }
				  setTimer2(20);
			  }
				/*-----------------------------------------*/
			if(isButton1Pressed())
			{
				status = MAN_RED;
			}
		break;

		case MAN_RED:
		// LED red blink 2hz
		if(timer1_flag == 1)
		{
			if(status2HZ == 0){
				TurnOnLedRedLane1();
				TurnOnLedRedLane2();
				status2HZ = 1;
			} else {
				TurnOfAllLed();
				status2HZ = 0;
			}
			setTimer1(25);
		}


		if(isButton2Pressed())
		{
			newCountRed++;
			if(newCountRed > 99)
			{
				newCountRed = 1;
			}
		}
		/*------------ --- Scan 7SEG --- -----------------*/
		  if(timer2_flag == 1)
		  {
			  // Display 7Seg lane 1
			  if(statusLane == 0)
			  {
				  display7SEG(newCountRed/10);
				  update7SEG(0);
				  statusLane = 1;
			  } else if(statusLane == 1){
				  display7SEG(newCountRed%10);
				  update7SEG(1);
				  statusLane = 2;
			  } else if (statusLane == 2){
				  display7SEG(newCountRed/10);
				  update7SEG(0);
				  statusLane = 3;
			  } else if (statusLane == 3){
				  display7SEG(newCountRed% 10);
				  update7SEG(1);
				  statusLane = 0;
			  }
			  setTimer2(20);
		  }
			/*-----------------------------------------*/
		if(isButton3Pressed())
		{
			TimeOfRed = newCountRed;
		}
		if(isButton1Pressed())
		{
			status = MAN_YELLOW;
		}
		break;

		case MAN_YELLOW:
		// LED red blink 2hz
		if(timer1_flag == 1)
		{
			if(status2HZ == 0){
				TurnOnLedYellowLane1();
				TurnOnLedYellowLane2();
				status2HZ = 1;
			} else {
				TurnOfAllLed();
				status2HZ = 0;
			}
			setTimer1(25);
		}

		if(isButton2Pressed())
		{
			newCountYellow++;
			if(newCountYellow > 99)
			{
				newCountYellow = 1;
			}
		}
		/*------------ --- Scan 7SEG --- -----------------*/
		  if(timer2_flag == 1)
		  {
			  // Display 7Seg lane 1
			  if(statusLane == 0)
			  {
				  display7SEG(newCountYellow/10);
				  update7SEG(0);
				  statusLane = 1;
			  } else if(statusLane == 1){
				  display7SEG(newCountYellow%10);
				  update7SEG(1);
				  statusLane = 2;
			  } else if (statusLane == 2){
				  display7SEG(newCountYellow/10);
				  update7SEG(0);
				  statusLane = 3;
			  } else if (statusLane == 3){
				  display7SEG(newCountYellow% 10);
				  update7SEG(1);
				  statusLane = 0;
			  }
			  setTimer2(20);
		  }
			/*-----------------------------------------*/
		if(isButton3Pressed())
		{
			TimeOfYellow = newCountYellow;
		}
		if(isButton1Pressed())
		{
			status = MAN_GREEN;
		}
		break;

		case MAN_GREEN:
			// LED red blink 2hz
			if(timer1_flag == 1)
			{
				if(status2HZ == 0){
					TurnOnLedGreenLane1();
					TurnOnLedGreenLane2();
					status2HZ = 1;
				} else {
					TurnOfAllLed();
					status2HZ = 0;
				}
				setTimer1(25);
			}
			TurnOnLedGreenLane1();
			TurnOnLedGreenLane2();
			if(isButton2Pressed())
			{
				newCountGreen++;
				if(newCountGreen > 99)
				{
					newCountGreen = 1;
				}
			}
			/*------------ --- Scan 7SEG --- -----------------*/
			  if(timer2_flag == 1)
			  {
				  // Display 7Seg lane 1
				  if(statusLane == 0)
				  {
					  display7SEG(newCountGreen/10);
					  update7SEG(0);
					  statusLane = 1;
				  } else if(statusLane == 1){
					  display7SEG(newCountGreen%10);
					  update7SEG(1);
					  statusLane = 2;
				  } else if (statusLane == 2){
					  display7SEG(newCountGreen/10);
					  update7SEG(0);
					  statusLane = 3;
				  } else if (statusLane == 3){
					  display7SEG(newCountGreen% 10);
					  update7SEG(1);
					  statusLane = 0;
				  }
				  setTimer2(20);
			  }
				/*-----------------------------------------*/
			if(isButton3Pressed())
			{
				TimeOfGreen = newCountGreen;
			}
			if(isButton1Pressed())
			{
				setTimer1(25);
				status = LED_GREEN_LANE1;
				TurnOnLedGreenLane1();
				TurnOnLedRedLane2();
			}
		break;
		default:
			break;

	}
}
