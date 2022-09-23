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

	sum=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x);
	printf("ans is : %d ",sum);
	getch();
}
