#include <stdio.h>

int main()
{
    char name[] = "Martin Andersen";
    int gender = 'F' / 'M';
    int age = 37;
    float bmi = 19.3;

    if (gender == 'F')
    {
        printf("%s, Female, alder=%i, bmi=%f, meaning she is ", name, age, bmi);
    }
    else
    {
        printf("%s, Male, alder=%i, bmi=%.1f, meaning he is ", name, age, bmi);
    }

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi < 25.0)
    {
        printf("Normal Weight\n");
    }
    else if (bmi < 30.0)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obese\n");
    }

    return 0;
}
