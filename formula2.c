
#include <stdio.h>
void main() {
    float a, b, c, d, result1, result2;
    printf("Enter values for a, b, c, and d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    result1 = (a / b) * (c / d);     // a/b * c/d
    result2 = (a * c) / (b * d);     // ac/bd
    printf("Formula 2:\n");
    printf("a/b * c/d = %.2f | ac/bd = %.2f\n", result1, result2);
}
