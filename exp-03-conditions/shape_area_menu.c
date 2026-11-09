#include <stdio.h>

int main(void) {
    int choice;
    float a, b, area;
    const float pi = 3.14159265f;
    printf("1.Triangle 2.Square 3.Circle 4.Rectangle\nChoose: ");
    if (scanf("%d", &choice) != 1) return 1;
    switch (choice) {
        case 1: printf("Enter base and height: "); if (scanf("%f %f", &a, &b) != 2) return 1; area = 0.5f * a * b; break;
        case 2: printf("Enter side: "); if (scanf("%f", &a) != 1) return 1; area = a * a; break;
        case 3: printf("Enter radius: "); if (scanf("%f", &a) != 1) return 1; area = pi * a * a; break;
        case 4: printf("Enter length and breadth: "); if (scanf("%f %f", &a, &b) != 2) return 1; area = a * b; break;
        default: printf("Invalid choice.\n"); return 1;
    }
    printf("Area = %.2f\n", area);
    return 0;
}
