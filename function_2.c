#include<stdio.h>
float force(float);
float force(float F){
    return (9.8)*(F);
}

int main(){
    float m=10;
    printf("The value of foce exerted on mass %.2f is %.2f", m, force(m));
    return 0;
}