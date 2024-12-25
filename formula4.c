
#include <stdio.h>
void main() {
    float a, result;
    printf("Enter value for a: ");
    scanf("%f", &a);
    result = -(-a); // Simplification of -(-a)
    printf("Formula 4:\n");
    printf("-(-a) = %.2f\n", result);
}
