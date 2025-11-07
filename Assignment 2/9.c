#include <stdio.h>
int main(){
    int numbers_in_array,userchoice,number_to_be_added,indexnumber;
    printf("Enter how many numbers you want in the array :  ");
    scanf("%d",&numbers_in_array);
    int array[numbers_in_array];
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
    printf("Where do you want to delete the number?\n1.At the starting.\n2.At the middle\n3.At the end\n :  ");
    scanf("%d",&userchoice);
    if(userchoice==1){
        for (int i =0; i<=numbers_in_array; i++)
        {
            array[i] = array[i+1];
        }
        numbers_in_array--;
        printf("The new array is : ");
        for (int i = 0; i < numbers_in_array; i++)
        {
            printf("%d",array[i]);
        }
        printf("\n"); 
    
    }
    else if(userchoice==2){
        
        printf("Enter the value of index number you want to delete : ");
        scanf("%d",&indexnumber);
        for (int i =indexnumber; i<=numbers_in_array; i++)
        {
            array[i] = array[i+1];
        }
        numbers_in_array--;
        // array[indexnumber] = number_to_be_added;
        printf("The new array is : ");
        for (int i = 0; i < numbers_in_array; i++)
        {
            printf("%d",array[i]);
        }
        printf("\n");
        
    }
    else if(userchoice==3){
        array[numbers_in_array] = number_to_be_added;
        printf("The new array is : ");
        numbers_in_array--;
        
        for (int i = 0; i < numbers_in_array; i++)
        {
            printf("%d",array[i]);
        }
        printf("\n");
        
    }
    else{
        printf("Invalid operation...");
    }
    return 0;
}