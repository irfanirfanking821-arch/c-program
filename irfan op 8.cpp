#include <stdio.h>
int main()
{
    int N, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &N);
    lastDigit = N % 10;
    printf("Last digit of %d is %d\n", N, lastDigit);
    return 0;
}

