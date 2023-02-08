#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	printf(" enter a  values\n ");
	scanf(" %d",&a);
	printf(" enter b  values\n ");
	scanf(" %d",&b);
	temp=a;
     a=b;
     b=temp;
	printf(" after swapping is a=%d b=%d",a,b);
}
