/*Divy Raj Soni*/
//Program illustrating use of conditional operator to check equality of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a,b;
    clrscr();
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("\nAmongst the two numbers, %d and %d ",a,b);
    a==b?printf("both Numbers are equal"):(a>b?printf("%d is greater",a):printf("%d is greater",b));
    getch();
}