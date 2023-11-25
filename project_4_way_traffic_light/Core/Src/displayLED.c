///*
// * displayLED.c
// *
// *  Created on: Nov 14, 2023
// *      Author: PC
// */
//
//#include "displayLED.h"
//
//void toggle_red() {
//
//}
//void traffic_light(int color) {
//	switch (color) {
//		case INIT:
//			HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, RESET);
//			break;
//		case AUTO_RED1_GREEN2:
//			HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, SET);
//			break;
//		case AUTO_RED1_AMBER2:
//            HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, RESET);
////            HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, SET);
//			break;
//		case AUTO_GREEN1_RED2:
//			HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, RESET);
//			break;
//        case AUTO_AMBER1_RED2:
//			HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, SET);
//            HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, RESET);
//			break;
//		default:
//			break;
//	}
//}
//
//int toggle = 0;
//void set_blinky(int color) {
//	switch (color) {
//        case INIT:
//			HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, RESET);
//            HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, RESET);
//            break;
//		case AUTO_AMBER:
//			if (toggle == 0) {
//                HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, SET);
//                HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, SET);
//                HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, SET);
//                HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, SET);
//                toggle = 1;
//            }
//            else {
//                HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, RESET);
//                HAL_GPIO_WritePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin, RESET);
//                HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, RESET);
//                HAL_GPIO_WritePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin, RESET);
//                toggle = 0;
//            }
//			break;
//		case AUTO_GREEN:
//			HAL_GPIO_TogglePin(TLIGHT12_GPIO_Port, TLIGHT12_Pin);
//            HAL_GPIO_WritePin(TLIGHT11_GPIO_Port, TLIGHT11_Pin, RESET);
//            HAL_GPIO_TogglePin(TLIGHT22_GPIO_Port, TLIGHT22_Pin);
//            HAL_GPIO_WritePin(TLIGHT21_GPIO_Port, TLIGHT21_Pin, RESET);
//			break;
//		default:
//			break;
//	}
//}
//
//void pedestrian_light(int color){
//    switch (color)
//    {
//    case PED_OFF:
//        HAL_GPIO_WritePin(PLIGHT1_GPIO_Port, PLIGHT1_Pin, RESET);
//		HAL_GPIO_WritePin(PLIGHT2_GPIO_Port, PLIGHT2_Pin, RESET);
//        break;
//    case PED_GREEN:
//        HAL_GPIO_WritePin(PLIGHT1_GPIO_Port, PLIGHT1_Pin, RESET);
//		HAL_GPIO_WritePin(PLIGHT2_GPIO_Port, PLIGHT2_Pin, SET);
//        break;
//    case PED_RED:
//        HAL_GPIO_WritePin(PLIGHT1_GPIO_Port, PLIGHT1_Pin, SET);
//		HAL_GPIO_WritePin(PLIGHT2_GPIO_Port, PLIGHT2_Pin, RESET);
//        break;
//    default:
//        break;
//    }
//}