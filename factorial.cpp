#include<stdio.h>
void factorial(int,int*);
int main()
{
	int factorial,n;
	printf("enter the number:");
	scanf("%d",&n);
	findfactorial(n,&factorial);
	printf("the factorial of %d is =%d",n,factorial);
	return 0;
}
void findfactorial(int n,int*f)
{
	int i;
	*f=1;
	for(i=1;i<=n;i++)
	*f=*f*i;
}
