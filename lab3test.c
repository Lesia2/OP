#include <stdio.h>

int main() {
    float a, b, c;

    // Input numbers
    printf("Enter three real numbers a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (((int)a + (int)b) % 2 == 0) {
        printf("The sum of the pair (a, b) is even: %.2f + %.2f = %.2f\n", a, b, a + b);
    }

    if (((int)a + (int)c) % 2 == 0) {
        printf("The sum of the pair (a, c) is even: %.2f + %.2f = %.2f\n", a, c, a + c);
    }

    // Check the pair (b, c)
    if (((int)b + (int)c) % 2 == 0) {
        printf("The sum of the pair b and c is even: %.2f + %.2f = %.2f\n", b, c, b + c);
    }

    return 0;
}
