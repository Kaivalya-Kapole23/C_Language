#include <stdio.h>

int main(void) {
    float weight, height, bmi;
    printf("Enter weight in kg and height in metres: ");
    if (scanf("%f %f", &weight, &height) != 2 || height <= 0) return 1;
    bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);
    if (bmi < 18.5f) printf("Underweight\n");
    else if (bmi < 25.0f) printf("Normal Weight\n");
    else if (bmi < 30.0f) printf("Overweight\n");
    else printf("Obese\n");
    return 0;
}
