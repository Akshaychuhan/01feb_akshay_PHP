#include<stdio.h>
int main()
{
    int no;
 
    printf("Find odd number from 1 to --> ");
    scanf("%d",&no);
    printf("\nodd Numbers From 1 to %d is : ",no);

     for (int i = 1; i<no ; i++)
    {

        if (i % 1 == 0)
        {
            printf("%d, ",i);
        }
        
    }

    
    
}