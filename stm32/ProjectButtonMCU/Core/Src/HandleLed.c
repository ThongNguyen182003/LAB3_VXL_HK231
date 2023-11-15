/*
 * HandleLed.c
 *
 *  Created on: Nov 14, 2023
 *      Author: babyh
 */


#include "HandleLed.h"

void TurnOnLedRedLane1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
}
void TurnOnLedYellowLane1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
}
void TurnOnLedGreenLane1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
}

void TurnOnLedRedLane2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
}
void TurnOnLedYellowLane2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
}
void TurnOnLedGreenLane2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
}

void TurnOfAllLed()
{
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
}
