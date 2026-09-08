#include<stdio.h>
int sum(int);
int sum(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    int n=10;
    printf("sum of first %d natural no. is %d",n ,sum(n));
    return 0;
}