#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,sum;
	clrscr();
	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);
	printf("enter z :");
	scanf("%d",&z);

	sum=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(3*x*y*y)+(6*x*y*z)+(3*x*z*z)+(y*y*y)+(3*y*y*z)+(3*y*z*z)+(z*z*z);
	printf("ans is : %d ",sum);
	getch();
}
