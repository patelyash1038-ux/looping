#include<stdio.h>

int main(){
    int income;
    printf("Enter your annual income: ");
    scanf("%d", &income);
    int tax;
    if(income<250000){
        tax=0;
    }
    else if(income<500000&&income>250000){
        tax=income/20;
    }
    else if(income<1000000&&income>500000){
        tax=income/5;
    }
    else{
        tax=(income*3)/10;
    }
    printf("tax= %d", tax);
    
    return 0;
}