//Find the nth term of the series.

//1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243,64, 729, 128, 2187 ….

//This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series. Write a program to find the Nth term in the series.

//The value N in a positive integer that should be read from STDIN.
//The Nth term that is calculated by the program should be written to STDOUT.
//Other than value of n th term,no other character / string or message should be written to STDOUT.
//For example , if N=16, the 16th term in the series is 2187, so only value 2187 should be printed to STDOUT.
//You can assume that N will not exceed 30.

#include<stdio.h>
#include<math.h>

int three(int n)
{
    int x;
    //n-1 because powers start from 0 not 1
    x = pow(3,n-1);
    printf("%d",x);
}

int two(int n)
{
    int x;
    //n-1 because powers start from 0 not 1
    x = pow(2,n-1);
    printf("%d",x);
}

int main()
{
    int n;
    scanf("%d",&n);
    
    //Checking of the nth term will be at even position or odd position
    //Odd positions are powers of 2
    //Even positions are powers of 3
    if(n%2==0)
    {
        //nth position(if even) will be at n/2 position for sub GP-2
        three(n/2);
    }
    else
    {
        //nth position(if odd) will be at (n/2 + 1) position for sub GP-1
        two(n/2 + 1);
    }
    return 0;
}