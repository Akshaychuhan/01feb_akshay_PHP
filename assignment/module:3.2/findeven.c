#include<stdio.h>
int main()
{
    int no,sum = 0;
    printf("Find Even number  1 to= ");
    scanf("%d",&no);
    printf("\nEven Numbers  1 to %d is : ",no);
    for (int i = 1; i < no ; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d, ",i);
            sum = sum + i;
        }
        
    }
    printf("\n\nSum even number total 1 to %d is : %d ",no,sum);
    
    
}