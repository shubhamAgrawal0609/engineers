#include <stdio.h>

int main() {
  int n, sum = 0, r, o;
    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;
    while (n != 0) {
        r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    if (o == sum)
        printf("%d is a palindrome.", o);
    else
        printf("it is not a palindrome number%d", o);
    return 0;
}
