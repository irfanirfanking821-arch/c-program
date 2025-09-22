#include <stdio.h>

int main()
{
    int num1, num2, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    remainder = num1 % num2;
    printf("Remainder when %d is divided by %d = %d\n", num1, num2, remainder);
    return 0;
}

