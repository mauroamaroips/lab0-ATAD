#include <stdio.h>
#include "bmi.h"

/**
 * @brief 
 * 
 * @param height 
 * @param weight 
 * @return double 
 */

double bmiCompute(double height, double weight){

    double bmi = (weight)/(height*2);
    return bmi;
}

/**
 * @brief 
 * 
 * @param bmi 
 */

void bmiPrintClassification(double bmi){

    if(bmi < 19){  
        printf("Abaixo do Peso\n");
    } else if (19 <= bmi && bmi < 25){
        printf("Peso Normal\n");
    } else if (25 <= bmi && bmi < 30){
        printf("Sobrepeso\n");        
    } else if (30 <= bmi && bmi < 40){
        printf("Obesidade do Tipo I\n");
    } else if(bmi >= 40){
        printf("Obesidade Mórbida\n");
    }

}

/**
 * @brief 
 * 
 */

void bmiPrintTable(){

    printf("Valor do BMI\t\tClassificação\n");
    printf("BMI < 19\t\tAbaixo do Peso\n");
    printf("19 <= BMI < 25\t\tPeso Normal\n");
    printf("25 <= BMI < 30\t\tSobrepeso\n");
    printf("30 <= BMI < 40\t\tObesidade do Tipo I\n");
    printf("BMI >= 40\t\tObesidade Mórbida\n");


 
}



