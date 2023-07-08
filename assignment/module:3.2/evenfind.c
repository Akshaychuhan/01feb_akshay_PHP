#include<stdio.h>
int main()
{
    int no;
 
    printf("Find Even number from 1 to --> ");
    scanf("%d",&no);
    printf("\nEven Numbers From 1 to %d is : ",no);

     for (int i = 1; i < no ; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d, ",i);
        }
        
    }

    
    
}