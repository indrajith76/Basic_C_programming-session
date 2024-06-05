#include <stdio.h>

int getNum(void)
{
    int n; // <- declear
    printf("Enter a number:");
    scanf("%d", &n);
    return n;
}

void printSum(int n1, int n2)
{
    int sum = n1 + n2;
    printf("%d + %d = %d", n1, n2, sum);
}

int main()
{
    int num1;
    int num2;
    num1 = getNum();
    num2 = getNum();

    printSum(num1, num2);

    return 0;
}
