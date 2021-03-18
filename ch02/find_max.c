/********************************************
 * You have 3 numeric values as input from user find the biggest number in them.
 * I/p
 * int a , b , c; 
 * 
 * O/p
 * if a is bigger than b and c then a
 * if b is bigger than a and c then b
 * if c is bigger than a and b then c
 * 
 * **********************************************/
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numerioc values : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b){ // a is bigger than b
        if(a > c){ // a is bigger than c
            // a is bigger
            printf("a is bigger");
        } else { // c is bigger than a
            // c is bigger
            printf("c is bigger");
        }
    } else { // b is bigger than a
        if(b > c){// b is bigger than c
            printf("b is bigger");
        } else{ // c is bigger than b
            printf("c is bigger");
        }
    }

    if(a > b && a > c){
        printf("a is bigger");
    } else if(b > a && b > c){
         printf("b is bigger");
    } else if(c > a && c > b){
         printf("c is bigger");
    }
  return 0;  
}