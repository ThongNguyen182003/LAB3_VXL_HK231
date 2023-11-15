/*
 * display7SEG.c
 *
 *  Created on: Nov 14, 2023
 *      Author: babyh
 */

#include "display7SEG.h"

void display7SEG(int num){
	if (num==0){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, SET);
	}
	else if (num==1){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, SET);
	}

	else if (num==2){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, RESET);
	}

	else if (num==3){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, RESET);
	}

	else if (num==4){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, RESET);
	}

	else if (num==5){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, RESET);
	}

	else if (num==6){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, RESET);
	}

	else if (num==7){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, SET);
	}
	else if (num==8){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, RESET);
	}

	else if (num==9){
		HAL_GPIO_WritePin(GPIOB, FS0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, FS5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, FS6_Pin, RESET);
	}

}

void update7SEG(int index){
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, RESET);
			break;
		default:
			break;
	}
}

