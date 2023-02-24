#include<stdio.h>
void main()
{
	int n,i,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%n==0)
		c++;
	}
	printf("%d",c);
}
