#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("\n\t welcome Calculation:   ");
    printf("\n\n\t' 1. Addition    \t+ '\n\t' 2. Subtraction \t- '\n\t' 3. Division     \t/ '\n\t' 4. Multiplication \t* '");
    printf("\n\n Enter First Value :");
    scanf("%d", &a);
    printf("\n\n choice option :");
    scanf("%d", &ch);
    printf("\n\n Enter Second Value :");
    scanf("%d", &b);

    switch (ch)
    {
    case 1:
        printf("\n %d + %d = %d", a, b, a + b);
        break;

    case 2:
        printf("\n %d - %d = %d", a, b, a - b);
        break;

    case 3:
        printf("\n %d / %d = %d", a, b, a / b);
        break;

    case 4:
        printf("\n %d * %d = %d", a, b, a * b);
        break;

    default:
        printf("\n invaild value");
        printf("\n try again");
        break;
    }
}