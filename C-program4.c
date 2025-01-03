/*Divy Raj Soni*/
//Swapping using 3 variables
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int x,y,t;
    clrscr();
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    printf("\n X = %d and Y = %d",x,y);
    t = x;
    x = y;
    y = t;
    printf("\n X = %d and Y = %d",x,y);
    getch();
}