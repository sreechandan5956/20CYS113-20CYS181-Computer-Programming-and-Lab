#include<stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    int a[x][y];
    int b[x][y];
    int c[x][x];

    int i, j, k;
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < x; i++) {
        for(j = 0; j < x; j++) {
            c[i][j] = 0;
            for (k = 0; k < y; k++) { 
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < x; i++) {
        for(j = 0; j < x; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}