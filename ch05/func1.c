#include<stdio.h>
// Declaration
void greetToWorld();

int main(){
    int x = 10;
    int y = 30;
    int z;

    printf("In main Function\n");
    greetToWorld();
    printf("I am performing a summation from sum function\n");
    z = sum(x, y); //z = 40
    printf("Sum of %d and %d = %d\n", x, y, z);
    printf("Back in main");
    return 0;
}

// Definiton
// <returntype> <name>(<params (optiopnal)>){ .... return <returntype>}
void greetToWorld(){
    printf("Hello World\n");
}

int sum(int a, int b){
    return a+b;
}