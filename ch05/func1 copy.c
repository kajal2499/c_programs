#include<stdio.h>


int main(){
    int i = 3, j = 4;
    printf("Before Swap = %d  %d \n", i , j);
    //swap(i, j);
    swapByAddress(&i, &j);
    printf("After Swap from main = %d  %d \n", i , j);
   return 0;
}

void swap(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("After Swap in swap function = %d  %d \n", a , b);
}

void swapByAddress(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("After Swap in swap function = %d  %d \n", *a , *b);
}