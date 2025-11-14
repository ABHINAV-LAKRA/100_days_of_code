//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
int a,b;



    printf("The Length is :");
    scanf("%d",&a);
    printf("The Breadth is :");
    scanf("%d",&b);

    int area,perimeter;

    area=a*b;
    perimeter=2*(a+b);

    printf("The Area is :%d\n",area);
    printf("The Perimeter is :%d\n",perimeter);










    return 0;
}