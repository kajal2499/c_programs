// C program to find the greatest of three numbers

#include<stdio.h>
int main()
{
//Fill the code
int num1, num2, num3;
scanf("%d %d %d",&num1,&num2,&num3);
if(num1 > num2 && num1 > num3)
{ 
printf("%d is greater",num1);
}
else if(num2 > num1 && num2 > num3)
{
printf("%d is greater",num2);
}
else
{
printf("%d is greater",num3);
}
return 0;
}