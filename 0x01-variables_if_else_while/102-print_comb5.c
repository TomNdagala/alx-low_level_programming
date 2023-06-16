#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            // Print first two-digit number
            putchar('0' + (i / 10));
            putchar('0' + (i % 10));

            // Print space separator
            putchar(' ');

            // Print second two-digit number
            putchar('0' + (j / 10));
            putchar('0' + (j % 10));

            // Print comma and space separator if not the last combination
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
