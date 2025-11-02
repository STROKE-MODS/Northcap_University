#include <stdio.h>
int main(){
    int a,n1=0,n2=1,next;
    printf("Enter the number till you require the fabonacci series : ");
    scanf("%d",&a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d ",n1);
        next = n1+n2;
        n1 = n2;
        n2 = next;
    }
    printf("\n");
    return 0;
}