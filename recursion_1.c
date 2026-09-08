#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n=7;
    // printf("enter no. of term=");
    // scanf("%d", &n);
    printf("the fibonacci term is %d", fibonacci(n));
    return 0;
}