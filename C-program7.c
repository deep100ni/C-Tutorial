/*Divy Raj Soni*/
//Heron's Formula
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float s,a,b,c,area;
    clrscr();
    printf("Enter sides of Triangle:");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Area of Triangle with sides %f,%f and %f unit is %f Sqare units",a,b,c,area);
    getch();
}
