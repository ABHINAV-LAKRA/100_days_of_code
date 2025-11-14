// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{

int a,b,sum,difference,product,quotient;

printf("Enter first number :");
scanf("%d",& a);
printf("Enter second number :");
scanf("%d", &b);

sum=a+b;
difference=a-b;
product=a*b;
quotient=a/b;

printf("The Sum is :%d\n ", sum);
printf("The Difference is :%d\n ",difference);
printf("The Product is : %d\n",product);
printf("The Quotient is : %d\n",quotient);









    return 0;
}