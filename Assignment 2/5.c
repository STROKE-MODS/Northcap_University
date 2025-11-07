#include <stdio.h>
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > array[i + 1])
        {
            if (array[i] > array[i - 1])
            {
                printf("The number with index %d is the highest amongst its neigbours.\n", i + 1);
            }
        }
    }
}