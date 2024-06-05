#include <stdio.h>

int getNum(void)
{
    int n; // <- declear
    printf("Enter a number:");
    scanf("%d", &n);
    return n;
}

int main()
{
    int age = getNum();

    if (age < 18)
    {
        if (age >= 0 && age < 10)
        {
            printf("Baby");
        }
        else
        {
            printf("Child");
        }
    }
    else if (age < 30 && age >= 18)
    {
        printf("JUBOK");
    }
    else
    {
        printf("Old");
    }
}