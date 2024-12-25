
#include <stdio.h>
void main() {
    float a, b, c, result1, result2;
    printf("Enter values for a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    result1 = a * (b + c);       // a(b + c)
    result2 = (a * b) + (a * c); // ab + ac
    printf("Formula 1:\n");
    printf("a(b + c) = %.2f | ab + ac = %.2f\n", result1, result2);
}
