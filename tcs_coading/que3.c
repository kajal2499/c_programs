//numbers as input, find the difference between the sum of odd and even position digits
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    int odd = 0,even = 0,i = 0, n,diff;
    long long num;
    scanf("%lld",&num);    //get the input up to 100 digit
    
    while(num != 0){
        if(i%2==0){
            even = even + num%10;
            num = num/10;
            i++;
        }
        else{
            odd = odd + num%10;
            num = num/10;
            i++;
        }
        
    }
    
    printf("%d",abs(odd - even));
    
    return 0;
}