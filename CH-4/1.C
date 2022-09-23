#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);
	z=(x*x)+(2*x*y)+(y*y);
	printf("ans is : %d ",z);
	getch();
}
