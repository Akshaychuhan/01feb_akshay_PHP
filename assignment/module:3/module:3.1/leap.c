#include<stdio.h>
int main()
    {
int year;
        printf("enter the year:");
            scanf("%d",&year);
            if (year % 400==0)
            {
                printf("%d \nis a leap year",year);
            }
     else if (year % 100==0)
        {
            printf("%d \nis not a leap year",year);
        }
    else if (year % 4==0)
        {
            printf("%d \nis a leap year",year);
        }
     else {
            printf("%d \nis not a leap year",year);
        }
            /*hello world enter your value */
          }
        
    
 
