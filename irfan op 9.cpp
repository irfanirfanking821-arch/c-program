#include <stdio.h>
int main()
{
    int N, withoutLast;
    printf("Enter a number: ");
    scanf("%d", &N);
    withoutLast = N / 10;
    printf("Number without last digit = %d\n", withoutLast);
    return 0;
}

