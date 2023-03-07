#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter the integer");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum(r*r*r);
		n=n/10;
			}
	if(temp==sum)
	{
	
	printf("armstrong number");
}
	else
	printf("not arm strong number");
	return 0;
	}
