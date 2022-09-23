#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,sum;
	clrscr();
	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);

	sum=(x*x*x)-(3*x*x*y)+(3*x*y*y)+(y*y*y);
	printf("ans is : %d ",sum);
	getch();
}
