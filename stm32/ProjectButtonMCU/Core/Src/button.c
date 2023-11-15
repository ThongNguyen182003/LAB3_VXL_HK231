/*
 * button.c
 *
 *  Created on: Oct 16, 2023
 *      Author: babyh
 */
#include"button.h"


static GPIO_PinState buttonBuffer[NO_OF_BUTTONS];
static GPIO_PinState KeyReg0[NO_OF_BUTTONS];
static GPIO_PinState KeyReg1[NO_OF_BUTTONS];
static GPIO_PinState KeyReg2[NO_OF_BUTTONS];
static GPIO_PinState KeyReg3[NO_OF_BUTTONS];

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

void setUpButton()
{
	for(int i = 0 ; i < NO_OF_BUTTONS ; i++)
	{
		KeyReg0[i] = NORMAL_STATE;
		KeyReg1[i] = NORMAL_STATE;
		KeyReg2[i] = NORMAL_STATE;
		KeyReg3[i] = NORMAL_STATE;
	}
}
int button1Pressed2s_flag = 0;

int TimerForKeyPress = 200;

void subKeyProcess(int i){
	switch (i) {
		case 0:
			button1_flag = 1;
			break;
		case 1:
			button2_flag = 1;
			break;
		case 2:
			button3_flag = 1;
			break;

		default:
			break;
	}
}

int isButton1Pressed(){
	if(button1_flag == 1)
	{
		button1_flag = 0;
		return 1;
	} else return 0;
}
int isButton2Pressed(){
	if(button2_flag == 1)
	{
		button2_flag = 0;
		return 1;
	} else return 0;
}

int isButton3Pressed(){
	if(button3_flag == 1)
	{
		button3_flag = 0;
		return 1;
	} else return 0;
}


int isButton1Pressed2s(){
	if(button1Pressed2s_flag == 1)
	{
		button1Pressed2s_flag =0;
		return 1;
	} else return 0;
}

void getKeyInput(){
	for(int i = 0 ; i < NO_OF_BUTTONS ; i++)
	{
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
			switch(i){

			case 0:
				KeyReg2[i] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
				break;

			case 1:
				KeyReg2[i] = HAL_GPIO_ReadPin(BTN2_GPIO_Port, BTN2_Pin);
				break;

			case 2:
				KeyReg2[i] = HAL_GPIO_ReadPin(BTN3_GPIO_Port, BTN3_Pin);
				break;
			default:
				break;
			}
			if((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i]== KeyReg2[i])){
				if(KeyReg3[i] != KeyReg2[i]){
					KeyReg3[i] = KeyReg2[i];
					if(KeyReg2[i] == PRESSED_STATE)
					{
						//TODO
						subKeyProcess(i);
						TimerForKeyPress = 200;
					}
				} else {
					TimerForKeyPress--;
					if(TimerForKeyPress <= 0)
					{
						KeyReg3[i] = NORMAL_STATE;
					}
				}
			}
	}
}
