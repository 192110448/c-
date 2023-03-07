#include<stdio.h>
float interest(int P,  int N)
{	char ch[1];
	printf("Are you a senior citizen(y/n): ");
    scanf("%s", &ch);
     float SI,r;
     if(strcmp("y",ch)==0){
    	r=12;
	}
    else if(strcmp("n",ch)==0){
    	r=10;
    }
     SI=P*r*N/100.0;
     return SI;
}      
main()
{
     int p,n;
     float r,Z;
          printf("Enter Principal Amount : ");
          scanf("%d",&p);
          printf("Enter Time Period : ");
          scanf("%d",&n);
    	  if(p>0 && n>0){
          Z=interest(p,n);
          printf("\nSimple Interest : %.2f\n",Z);
      }
      else{
      	printf("Invalid input");
	  }

}

