#include<stdio.h>

int main(){
    int n,i,prime=0;
    printf("Enter one no:");
    scanf("%d", &n);
    if(n==0||n==1){
        prime=1;
    }
    else
    {
    for(i=2;i<n;i++){

        if(n%i==0&&n!=2){
            prime=1;
            break;
        }       
    }
}
        if(prime){
            printf("%d is not prime",n);
        }
        else{
            printf("%d is prime",n);
        }
    
    
    return 0;
}