#include <stdio.h>
int main(){
    int array[50],userchoice,number_to_be_added,numbers_in_array,indexnumber;
    printf("Enter how many numbers you want in the array :  ");
    scanf("%d",&numbers_in_array);
    for (int i = 0; i < numbers_in_array; i++)
    {
        printf("Enter the value of array : ");
        scanf("%d",&array[i]);
    }   
    printf("The old array is : ");
    for (int i = 0; i < numbers_in_array; i++)
    {
        printf("%d",array[i]);
    }   
    printf("\n");
    printf("Where do you want to add the number?\n1.At the starting.\n2.At the middle\n3.At the end\n :  ");
    scanf("%d",&userchoice);
    if(userchoice==1){
        printf("Enter the number you want to add in the starting : ");
        scanf("%d",&number_to_be_added);
        for (int i =numbers_in_array-1; i>=0; i--)
        {
            array[i+1] = array[i];
        }
        array[0] = number_to_be_added;
        printf("The new array is : ");
        for (int i = 0; i <= numbers_in_array; i++)
        {
            printf("%d",array[i]);
        }
        printf("\n");
        
    }
    else if(userchoice==2){
        printf("Enter the number you want to add in the middle : ");
        scanf("%d",&number_to_be_added);
        printf("Enter the value of index number you want the number in : ");
        scanf("%d",&indexnumber);
        for (int i =numbers_in_array; i>=indexnumber; i--)
        {
            array[i+1] = array[i];
        }
        array[indexnumber] = number_to_be_added;
        printf("The new array is : ");
        for (int i = 0; i <= numbers_in_array; i++)
        {
            printf("%d",array[i]);
        }
        printf("\n");
        
    }
    else if(userchoice==3){
        printf("Enter the number you want to add in the end : ");
        scanf("%d",&number_to_be_added);
        array[numbers_in_array] = number_to_be_added;
        printf("The new array is : ");
        for (int i = 0; i <= numbers_in_array; i++)
        {
            printf("%d",array[i]);
        }
        printf("\n");
        
    }
    return 0;
}