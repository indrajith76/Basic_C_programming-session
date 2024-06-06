#include <stdio.h>

int main()
{
    int numArr[] = {10, 3, 11, 6, 8}; // 36 8 10 11 
    int temp;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (numArr[i] < numArr[j])
            {
                temp = numArr[i];
                numArr[i] = numArr[j];
                numArr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numArr[i]);
    }
}