/*Divy Raj Soni*/
//Area of Circle
#include<stdio.h>
#include<conio.h>
void main()
{
    float rad,area;
    clrscr();
    printf("Enter Radius of Circle :");
    scanf("%f %f",&rad);
    area = (3.14)*rad*rad;
    printf("\n Area of Circle having Radius %f units is %f Square units "rad,area);
    getch();
}
