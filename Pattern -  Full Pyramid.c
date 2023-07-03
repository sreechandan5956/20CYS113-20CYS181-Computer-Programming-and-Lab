#include <stdio.h>

int main() {
    int rows, i, j, space;
    scanf("%d", &rows);

    if (rows <= 0 || rows >= 25) {
        printf("Invalid Input\n");
        return 0;
    }

    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (j = 0; j <= 2 * i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}