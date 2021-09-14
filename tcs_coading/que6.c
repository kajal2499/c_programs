#include<stdio.h>
#define MAX 99999

void fibonacci(int n)
{
    /* Variable initialization */
    int a = 0, b = 1, next;
    //the below code is for fibonacci series till nth position
    for (int i = 1; i<=n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }

    //will print a not b or next as they are stored to calculate next  and next to next term
    printf("%d", a);
}

void prime(int n)
{
    int i, j, flag, count =0;
    //as prime numbers in given question start from 2
    for (i=2; i<=MAX; i++)
    {
        flag = 0;
        //to check if divisible apart from 1 & itself
        //loop starts from 2 to ignore divisibilty by 1 & ends before the number itself
        for (j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                //number is not prime
                flag = 1;
                break;
            }
        }
        //is prime
        if (flag == 0){
            //if found the nth prime number
            if(++count == n)
            {
                printf("%d", i);
                break;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    
    /*if n is odd
        nth number in main series will be found at (n/2 + 1) position 
        in fibonacci sub series
    else 
        if n is even then it will be found in (n/2) position in prime sub series */
    
    if(n%2 == 1) 
        fibonacci (n/2 + 1);
    else 
        prime(n/2);
    
    
    return 0;
}