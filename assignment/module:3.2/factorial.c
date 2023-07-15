#include<stdio.h>
int main()
{
    int n,i;
    long int fact = 1;
        printf("Enter Numbers : ");
    scanf("%d",&n); 
    for ( i = 1 ; i < n ; i++)
    {
        fact *= i;
    } 
    printf("\nFactorial of %d is : %ld",n,fact);

    return 0;

       
}