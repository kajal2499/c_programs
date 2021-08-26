/**
 * - N=10, Where N is the number of candies available, K<=5,
 *  Where K is the number of minimum candies that must be inside JAR ever
 * 
 * EXample1: (N=10,K=<5)

Input #1:

3

Output :

Number of Candies Sold: 3

Number of Candies available:7



Input #2:

4
 * .
  * */
/*********************************************
 * The distance between two cities (in km.) is input through the keyboard. 
 * Write a program to convert and print this distance in meters,
 *  feet, inches and centimeters. 
 *  
 * *******************************************/
#include<stdio.h>
int main(){

    int N = 10, k;
    printf("%s", "Enter the valuer of k");
    scanf("%d", &k);

    if(k == 0){
        printf("Invalid Input");
    } else{
        printf("Number of Candies Sold: %d\n", k);
        printf("Number of Candies available:%d\n", N-k);

    }

 
 return 0;   
}