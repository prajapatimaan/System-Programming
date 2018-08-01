#include<stdio.h>
#include<conio.h>
#define MAX(X,Y) X>Y?X:Y
void main()
{
	int a,b,c;
	clrscr();
	printf("Value of A:\n");
	scanf("%d",&a);
	printf("value of B:\n");
	scanf("%d",&b);
	c=MAX(a,b);
	printf("max is :%d",c);
	getch();
}