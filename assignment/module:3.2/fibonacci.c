#include <stdio.h>
void main()
{
    int number, n1 = 0, n2 = 1, n3;
    printf("Enter Number to create Fibonacci Series : ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {  
        printf("%d, ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}