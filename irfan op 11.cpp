#include <stdio.h>
int main()
{
    int num, middleDigit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    middleDigit = (num / 10) % 10;
    printf("Middle digit = %d\n", middleDigit);
    return 0;
}

