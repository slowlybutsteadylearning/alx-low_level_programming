#include "main.h"
#include <stdlib.h>

/**
 * mul - Entry point
 * function thatr reallocates a memory block using malloc and free
 * @ptr:A pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes for the new memory block
 * Return: on Success - NULL if new_size == 0 and ptr is not NULL
 * or ptr if new_size == old_size
 * or a pointer to the allocated memory
 */

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

