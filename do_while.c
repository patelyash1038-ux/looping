#include<stdio.h>

int main(){
    int i=0,n,sum;
    printf("Enter one no. :");
    scanf("%d", &n);
    do
    {
        i++;
        sum=sum+i;
    } while (i<n);
    printf("sum = %d",sum);
    return 0;
}