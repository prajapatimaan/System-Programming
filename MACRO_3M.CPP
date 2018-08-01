#include<stdio.h>
#include<conio.h>
#include"macromax.h"
void main()
{
	int a,b,c,d;
	clrscr();
	printf("value of A:\n");
	scanf("%d",&a);
	printf("value of B:\n");
	scanf("%d",&b);
	printf("value of c:\n");
	scanf("%d",&c);
	d=MAX(a,b,c);
	printf("max of 3 no:%d",d);
	getch();
}
