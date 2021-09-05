#include<stdio.h>
#include<math.h>

int main()
{
    float r, Area,perimeter;
   
    scanf("%f",&r);
    Area = 3.14*r*r;
    perimeter = 2*3.14*r;
    
    printf("the area of the circle is %f \n",Area);
    printf("the perimeter of the circle is %f \n",perimeter);
    return 0;

}