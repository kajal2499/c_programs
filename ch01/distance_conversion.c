/*********************************************
 * The distance between two cities (in km.) is input through the keyboard. 
 * Write a program to convert and print this distance in meters,
 *  feet, inches and centimeters. 
 *  
 * *******************************************/
#include<stdio.h>
int main(){
 //Declaration
 float km_value;
 float meter_value, feet_value, inches_value, centimeter_value;
 
 //Input from stdio
 printf("Enter distance in KM : \n");
 scanf("%f", &km_value);

 //CALCULATION /CONVERSION
 meter_value = km_value * 1000;
 feet_value = km_value * 3280.84;
 inches_value = feet_value * 12;
 centimeter_value = km_value * 100 *1000;

// OUTPUT TO stdio
printf("Meter Value : %f \n", meter_value);
printf("Feet Value : %f \n", feet_value);
printf("Inches Value : %f \n", inches_value);
printf("CentMeter Value : %f \n", centimeter_value);

 return 0;   
}