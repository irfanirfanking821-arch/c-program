#include <stdio.h>

int main() {
    char a;
    int b;
    float c;
    double d;
    

    printf("Enter a character: ");
    scanf(" %c", &a);
    
    printf("Enter an integer: ");
    scanf("%d", &b);
    
    printf("Enter a float: ");
    scanf("%f", &c);

    printf("Enter a double: ");
    scanf("%f", &d);
    
    printf("\nSize of char: %zu byte(s)\n", sizeof(a));
    printf("Size of int: %zu byte(s)\n", sizeof(b));
    printf("Size of float: %zu byte(s)\n", sizeof(c));
    printf("Size of double: %zu byte(s)\n", sizeof(d));
    
    return 0;
}
