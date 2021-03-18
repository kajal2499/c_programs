#include<stdio.h>

int main(){
    
    int factorialOfFive = factorialByRecurssion(5);
    printf("Fact of 5 is %d \n", factorialOfFive);
    return 0;
}

int factorial(int i){
    int fact = 1;
    while(i > 0){
        fact = fact * i;
        i--;
    }
    return fact;
}

int factorialByRecurssion(int i){
    int fact;
    if(i == 1){
        return 1;
    }else{
        fact = i * factorialByRecurssion(i - 1);
    }

    
    
    return fact;
}