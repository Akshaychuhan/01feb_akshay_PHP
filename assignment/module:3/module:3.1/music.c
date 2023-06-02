#include<stdio.h>
void main(){
        int a,b,ch;
    printf("(+)add,(-)sub,(*)multi,(/)devi:\n");
    printf("Enter the value:");
        scanf("%d",&a);
    printf("enter the oprater");
        scanf("%d",&ch);
    printf("enter the value");
        scanf("%d",&b);
switch (ch)
        {
        case 1:
                printf("addition:%d",a+b);
                break;
        case 2:
                 printf("substracton:%d",a-b);
             break;
         case 3:
                printf("multiplay:%d",a*b);
             break;
         case 4:
             printf("devision:%d",a/b);
         break;
                default:
         printf("invaild number:");
         break;
    }
}