#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int number,count=0,armstrong,final=0,temp2;
    int temp,temp_second;
    printf("Enter a number : ");
    scanf("%d",&number);
    temp = number;
    temp_second = number;
    for (int i = 0; i <= temp; i++)
    {
        armstrong = temp%10;
        temp= temp/10;
        count+=1;
    }
    for (int i = 0; i <=temp_second; i++)
    {
        temp2 = temp_second%10;
        final+=pow(temp2,count);
        temp_second=temp_second/10;
    }
    if(final==number){
        printf("it is an armstrong.");
    }
    else{
        printf("it is not an armstrong.");
    }
    
    return 0;
}