#include "main.h"
#include <stdlib.h>
i

int is_digit_string(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;  // Not a digit
        }
        str++;
    }
    return 1;  // All characters are digits
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2])) {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2);

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

