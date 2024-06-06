#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array Length:");
    scanf("%d", &n);

    int numArr[n];
    int temp;
    int arrLength = sizeof(numArr) / 4;

    for (int i = 0; i < arrLength; i++)
    {
        scanf("%d", &numArr[i]);
    }

    for (int i = 1; i < arrLength; i++)
    {
        for (int j = 0; j < arrLength; j++)
        {
            if (numArr[i] < numArr[j])
            {
                temp = numArr[i];
                numArr[i] = numArr[j];
                numArr[j] = temp;
            }
        }
    }

    printf("Output:\n");
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d\n", numArr[i]);
    }
}