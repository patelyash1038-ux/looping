#include<stdio.h>

int main(){
    int a=4;
    printf("%d, %d , %d", a, ++a , a++);
    // 6 6 4 (right to left) & 4 5 5 (left to right){both are correct}
    return 0;
}