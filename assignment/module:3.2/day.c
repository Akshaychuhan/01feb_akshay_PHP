#include<stdio.h>
int main()
{
    int ch;
    printf("enter day name:");
    printf("\n1.monday");
    printf("\n2.tuesday");
    printf("\n3.wednesday");
    printf("\n4.tuesday");
    printf("\n5.friday");
    printf("\n6.saturday");
    printf("\n7.sunday");
    printf("\nenter day name:");
    scanf("%d",&ch);
    switch (ch)
    {   
 case 1:
        printf("monday");
        break;
case 2:
        printf("tuesday");
        break;
case 3:
        printf("wednesday");
        break;
case 4:
        printf("tuesday");
        break;
case 5:
        printf("friday");
        break;
case 6:
        printf("saturday");
        break;
 case 7:
         printf("sunday");
         break;
  default:
     printf("invalid day ");

    }
}   
