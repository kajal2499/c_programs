/****************************************
 * The length & breadth of a rectangle and radius of a circle are input through the keyboard.
 *  Write a program to calculate the area & perimeter of the rectangle,
 *  and the area & circumference of the circle.
 * 
 * 
 * Input rectangle l b 
 * 
 * *** Area - l * b;
 * *** 2*(l + b)
 * 
 * Input circle r
 * ***** Perimeter  - 2 * pi * r;
 * ***** Area - pi * r * r;
 * ******************************************/
#include<stdio.h>

int main(){
    // Assuming the inputs are in int
    int length, breadth, radius;
    int area_of_rectangle, perimeter_of_rectangle;
    float area_of_circle, perimeter_of_circle;
    
    printf("Enter length of Rectangle:");
    scanf("%d", &length);
    printf("Enter breadth of Rectangle:");
    scanf("%d", &breadth);
    printf("Enter Radius of Circle:");
    scanf("%d",&radius);

    // Calculations for Rectangle
    area_of_rectangle = length * breadth;
    perimeter_of_rectangle = 2 * (length + breadth);

    // Calculations for Circle
    // TODO: Need to use PI value from math.h
    area_of_circle = 3.14 * radius * radius;
    perimeter_of_circle = 2 * 3.14 * radius;


    // Display
    printf("Area of Rectangle %d \n", area_of_rectangle);
    printf("Perimeter of Rectangle %d \n", perimeter_of_rectangle);
    printf("Area of Circle %f \n", area_of_circle);
    printf("Perimeter of Circle %f \n", perimeter_of_circle);
    
    return 0;
}
