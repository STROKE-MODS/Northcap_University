#include <stdio.h>
#include <math.h>
int main(){
    int method,decimal,i=0,rem=0,number_in_binary,number_in_decimal=0,j=0;
    int binary[32];
    printf("1.Decimal to binary\n2.Binary to decimal\nChoose a method : ");
    scanf("%d",&method);
    if(method==1){
        printf("Enter the value of the decimal : ");
        scanf("%d",&decimal);
        while(decimal!=0){
           binary[i] = decimal%2;
            decimal = decimal/2;
            i++;
        }
        printf("The number in binary is : ");
        for (int j =i-1; j>=0 ;j--)
        {
            printf("%d",binary[j]);
        }
    }
    else{
        printf("Enter the value in binary : ");
        scanf("%d",&number_in_binary);
        while(number_in_binary!=0){
            rem = number_in_binary%10;
            number_in_decimal += rem*(1<<j);
            number_in_binary= number_in_binary/10;
            j++;
        }
        printf("The number in decimal is : %d\n",number_in_decimal);
    }
        
    return 0;
}