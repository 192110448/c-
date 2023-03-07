#include <stdio.h>
 #include <conio.h>
  int main () 
{ 

    int arr[]={1, 2,3,2,1};
	int i, j, k, n; n=sizeof(arr)/sizeof(arr[0]) ;
	for ( i = 0; i < n; i ++) 
	  {
	    if(arr[i]==arr[j])
		{
		 for ( j = i + 1; j < n; j++)
		  { 
		    for ( k = j; k < n - 1; k++) 
		   { 
		      arr[k] = arr [k + 1];
		   }
		    n--;
		    j--;
	      }
      }
  }
  printf (" \n Array elements after deletion of the duplicate elements: ");
  {
 	printf("%d\t",arr[i]);
  }
  return 0;
}
