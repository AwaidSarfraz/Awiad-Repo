
#include <stdio.h>
void main() {
    float a, b, result1, result2, result3;
    printf("Enter values for a and b: ");
    scanf("%f %f", &a, &b);
    result1 = -(a / b);   // -a/b
    result2 = -(a / b);   // Same as above
    result3 = a / (-b);   // a/-b
    printf("Formula 5:\n");
    printf("-a/b = %.2f | -a/b = %.2f | a/-b = %.2f\n", result1, result2, result3);
}
