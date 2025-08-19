#include <stdio.h>

int main()
{
    char name[] = "Martin Andersen";
    int gender = 'F' / 'M';
    int age = 37;
    float bmi = 19.3;

    if (gender == 'F')
    {
        printf("%s, Female, alder=%i, bmi=%f\n", name, age, bmi);
    }
    else
    {
        printf("%s, Male, alder=%i, bmi=%.1f\n", name, age, bmi);
    }

    return 0;
}
