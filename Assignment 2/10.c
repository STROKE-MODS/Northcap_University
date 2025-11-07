#include <stdio.h>
int main()
{
    int a[6] = {1, 2, 2, 3, 3, 5}, flag=0, k = 0,already_entered=0;
    int repeated_numbers[6];
    for (int i = 0; i < 6; i++)
    {
        already_entered=0;
        for (int j = i+1; j < 6; j++)
        {
            if (a[i] == a[j] && i!=j)
            {
                flag = 1;
                if (already_entered!=1)
                {
                    
                    while (flag<=1)
                    {   
                        already_entered=1;
                        repeated_numbers[k] = a[i];
                    k++;
                    flag++;
                }
            }
            }
        }
    }
    printf("The numbers which are copied are : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d",repeated_numbers[i]);
    }
    

    return 0;
}