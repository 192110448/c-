#include<stdio.h>     
#include<conio.h>  
#include<math.h>
int main()
{
	int a[]={16,18,27,16,23,21,
	19},count=0,i,j,n,b=0;
	n=sizeof(a)/sizeof(a[0]);
	printf("composite numbers are:");
	for(i=0;i<n;i++)
	{
		for(j=1;j<=a[i];j++)
		if(a[i]%j==0)
		count++;
		
	 if(count>2)
	 {
	 	printf("%d",a[i]);
	 	b++;
	 }
	 count=0;
	}
	
	printf("\n no.of cpmposite=%d",b);
}
