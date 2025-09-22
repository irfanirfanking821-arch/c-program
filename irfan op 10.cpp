#include <stdio.h>
int main()
{
    int num, firstDigit, lastDigit, sum;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    firstDigit = num / 100;
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}

