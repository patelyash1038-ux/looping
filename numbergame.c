#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int randomnumber;
    srand(time(NULL));
    randomnumber=rand()%100 +1;
    int no_of_guess,guessed_no;
    printf("ENTER  NO.");
    scanf("%d", &guessed_no);
    for(no_of_guess=0;guessed_no!=randomnumber;no_of_guess++){
        
        if(guessed_no>randomnumber){
            printf("lower no. please\n");
        }
        else if(guessed_no<randomnumber){
            printf("higher no. please\n");

        }
        printf("ENTER  NO.");
        scanf("%d", &guessed_no);
        
    }
    printf("you guessed it in %d guesses", no_of_guess+1);


    return 0;
}