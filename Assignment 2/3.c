#include <stdio.h>
int main()
{
    int main_array[10], even_elements[10], odd_elements[10],t=0,h=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &main_array[i]);
    }
    for (int k = 0; k < 10; k++)
    {
        if (main_array[k] % 2 == 0)
        {
            even_elements[t]=main_array[k];
            t++;
        }
        else{
            odd_elements[h]=main_array[k];
            h++;
        }
    }
    printf("The elements of even array are : ");
    for(int i = 0 ; i<t ; i++){
        printf("%d,",even_elements[i]);
    }
    printf("The elements of odd array are : ");
    for (int i = 0; i < h; i++)
    {
        printf("%d,",odd_elements[i]);
    }
    
    return 0;
}