#include <stdio.h>
#include <stdlib.h>

int main() {
    int decpt, sign;
    double num = 123.456;
    char *result = fcvt(num, 1, &decpt, &sign); //(тільки один знак після коми)

    printf("Result: %s\n", result);
    printf("Decimal point position: %d\n", decpt); // 3
    printf("Sign: %d\n", sign);

    return 0;
}

