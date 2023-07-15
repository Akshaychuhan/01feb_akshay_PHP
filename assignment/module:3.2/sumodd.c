#include<stdio.h>
int main()
{
    int no,sum = 0; 
    printf("Find Odd number star 1 to --> ");
    scanf("%d",&no);
    printf("\nOdd number star 1 to %d is : ",no);
    for (int  i = 1; i < no ; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d, ",i);
            sum = sum + i; 
        }
    }
    printf("\n\nSum of All Odd Numbers total 1 to %d is %d ",no,sum);

}