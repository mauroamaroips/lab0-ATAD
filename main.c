#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "bmi.h"

int main() {

    /* Program code. */
    double bmi = 0, height = 0, weight = 0;
    bmiPrintTable();
    printf("\nIntroduza a sua altura: ");
    scanf("%lf", &height);
    printf("Introduza o seu peso: ");
    scanf("%lf", &weight);

    bmi = bmiCompute(height, weight);
    bmiPrintClassification(bmi);

    return EXIT_SUCCESS;
}
