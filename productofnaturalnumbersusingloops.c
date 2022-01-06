#include<stdio.h>
main()
{int a,b,product=1;
scanf("%d",&a);
for(b=1;a>=b;b++)
{
	product*=b;
}
printf("%d",product);
}
