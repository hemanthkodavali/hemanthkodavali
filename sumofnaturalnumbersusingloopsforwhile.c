#include<stdio.h>
main()
{
	int a,b,sum=0;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		sum +=b;
	}
	printf("%d",sum);
}
