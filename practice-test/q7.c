#include<stdio.h>
int main()
{
    int i,j,lcm;
    scanf("%d %d", &i,&j);

    lcm = (i>j) ? i:j;
    while(1){
        if(lcm % i == 0 && lcm % j ==0)
        {
            printf("the LCM of %d and %d is %d",i,j,lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}