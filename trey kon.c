#include<stdio.h>
main()
{
//	upper left
	int h,i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
		for(i=1;i<n;i++)
	{
		    for(j=n-1;j>=i;j--)
		      {
	          printf(" ");
	       	  }
	         for(h=1;h<=i;h++)
	    {
	    	printf("* ");
		}
		printf("\n");
		      
     }
     }
