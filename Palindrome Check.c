#include <stdio.h>
int main() {
  int n, x, a, y;
  x=0;
    scanf("%d", &n);
    y = n;
    while (n != 0) {
        a = n % 10;
        x = x* 10 + a;
        n /= 10;
    }
    if (y == x)
        printf("Is a palindrome.");
    else
        printf("Is not a palindrome.");

    return 0;
}