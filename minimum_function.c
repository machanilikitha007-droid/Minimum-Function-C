#include <stdio.h>

int findMinimum(int numbers[], int size)
{
    int i;
    int minimum = numbers[0];

    for (i = 1; i < size; i++)
    {
        if (numbers[i] < minimum)
            minimum = numbers[i];
    }

    return minimum;
}

int main()
{
    int numbers[5] = {42, 17, 29, 8, 35};
    int minimum;

    minimum = findMinimum(numbers, 5);

    printf("Smallest Number = %d\n", minimum);

    return 0;
}
