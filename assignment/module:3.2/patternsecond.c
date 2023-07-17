#include<stdio.h>
int main()
{
    int i,j,rows,count = 1;
    printf("How Many Rows You Want ? ");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d ",count);
            count ++;

        }
        printf("\n");
    }
    
}
