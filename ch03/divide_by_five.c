/**********************************
 * print all values less than 100 divisible by 5;
 * 
 * 
 * *******************************************************************/
 
 #include<stdio.h>
 int main(){
    int a = 0;
    while(a < 100){
        if(a % 5 == 0){
            printf("\n%d", a);
        }
        //a = a + 1;
        //a += 1;
        a++;
    }
    return 0;
 }
