#include <stdio.h>

int main(void) {
    float purchase, salvage, depreciation;
    int years;
    printf("Enter purchase price, years of service, and salvage value: ");
    if (scanf("%f %d %f", &purchase, &years, &salvage) != 3 || years <= 0) return 1;
    depreciation = (purchase - salvage) / years;
    printf("Yearly depreciation = %.2f\n", depreciation);
    return 0;
}
