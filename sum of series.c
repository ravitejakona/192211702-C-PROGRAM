#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s,term,n;
	printf(" enter the value n:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		term=0;
		for(j=1;j<=i;j++)
	{
	term=term+j;
}
		s=s+term;
}
	printf(" sum of the series s is %d",s);
}
