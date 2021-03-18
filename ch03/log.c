/**
* The natural logarithm can be approximated by the following series.  
* If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series. 
*
*  (x -1 / x) + 1/2 (x -1 /x)^2 ....
*
*
 * ***********/

#include<stdio.h>
#include<math.h>
int main(){
    int i;
    float x, sum = 0.0;
    
    printf("Enter value of X : ");
    scanf("%d", &x);
    for(i = 1; i <= 7; i++){
        if(i == 1){
            sum = (x-1) / x;
        }else{
            sum = sum + pow((x - 1) / x, i) * 0.5; 
        }
    }

    printf("\n Sum is : %f", sum);
    return 0;
}