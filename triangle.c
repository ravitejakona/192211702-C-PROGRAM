#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	float area,d,s;
	printf("enter a,b,c values ");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	d=(s*(s-a)*(s-b)*(s-c));
	area=sqrt(d);
	printf("area of triangle is %f\n",area);
	
}
