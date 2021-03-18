#include<stdio.h>
int main(){
    int a = 1;
    // a++ ++a -- increments value
    display(a, ++a, a++);
    //      3   3   1
    // 1 2 3
    return 0;
}


void display(int a, int b, int c){
    printf("%d, %d, %d", a, b , c);
}