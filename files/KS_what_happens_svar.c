/* Question 1a*/
#include <stdio.h>
int main()
{
    //  When a is -1 this is evaluated as true
    int a = -1;
    printf("\nWhen value of a is: %d", a);
    if (a)
        printf(", it evaluates to TRUE\n");
    else
        printf(", it evaluates to FALSE\n");

    //  When a is 10 this is evaluated as true
    a = 10;
    printf("\nWhen value of a is: %d", a);
    if (a)
        printf(", it evaluates to TRUE\n");
    else
        printf(", it evaluates to FALSE\n");

    //  When a is 0 this is evaluated as false (and only here!)
    a = 0;
    printf("\nWhen value of a is: %d", a);
    if (a)
        printf(", it evaluates to TRUE\n");
    else
        printf(", it evaluates to FALSE\n");
}
