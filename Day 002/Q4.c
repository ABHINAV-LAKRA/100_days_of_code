//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
{
float r;


printf("radius :");
scanf("%f",&r);


float area,circumference;

area=2*3.14*r*r;
circumference=2*3.14*r;
printf("The Area is :%.2f\n",area);
printf("The Circumference is : %.2f\n",circumference);









    return 0;
}