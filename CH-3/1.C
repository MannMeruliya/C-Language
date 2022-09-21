#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("swapping first number : %d\n",a);
	printf("swapping second number : %d",b);
	getch();


}