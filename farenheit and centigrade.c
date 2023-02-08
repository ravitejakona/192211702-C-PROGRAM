#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f,cn,fn;
	printf(" enter temperature in centigrade ");
	scanf("%f",&c);
	f=1.8*c+32;
	printf(" fahrenheit equivenlent is %f\n",f);
	printf("enter temperature in fahrenheit");
	scanf("%f",&fn);
	cn=(fn-32)/1.8;
	printf(" centigrade equivalent is %f\n",cn);
	getch();
}
