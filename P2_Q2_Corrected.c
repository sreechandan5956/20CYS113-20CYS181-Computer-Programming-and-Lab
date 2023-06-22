#include <stdio.h>

int main() {
    int r;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &r);

    int s = r - 1;

    for (int i = 0; i < r; i++) {
        int p = s - i;

        // Print spaces for center alignment
        for (int j = 0; j < p; j++) {
            printf(" ");
        }

        int n= 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", n);
            n= n * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
