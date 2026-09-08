#include<stdio.h>
float conversion( float );
float conversion( float C){
       
       return ((1.8)*C +32);
}

int main(){
    float C=45;
    printf("Fahrenheit value is %f", conversion(C));
    return 0;
}