/*Divy Raj Soni*/
//Simple Intrest
#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,t,si;
    clrscr();
    printf("Enter Principal amount,Rate and Time(in years)");
    scanf("%f %f %f",&p,&r,&t);
    si = (p*r*t)/100;
    printf("\n Simple interest on Rs. %f at rate %f years is Rs.%f",p,r,t,si);
    getch();
}
