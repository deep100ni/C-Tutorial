/*Divy Raj Soni*/
//Swapping using 2 variables
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int x,y;
    clrscr();
    printf("Enter any two numbers");
    scanf("%d %d",&x,&y);
    printf("\n X = %d and Y = %d",x,y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\n After Swapping,X = %d and Y = %d",x,y);
    getch();
}
