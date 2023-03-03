/*read a matrix and cheak the elements are prime no or not*/
#include<stdio.h>
main()
{
	int i,j,m,n;//declaring datatype for variables
	scanf("%d,%d",&m,&n);//input from user
	int a[m][n];
	for(i=0;i<m;i++)//number of rows
	{
		for(j=0;j<n;j++)//number of columns
		{
			scanf("%d",&a[i][j]);//value from user
		}
	}
	int c=0,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=2;k<a[i][j];k++)//value to be cheaked
			{
				if(a[i][j]%k==0)//condition to be cheaked
				{
					c=1;
				}
			}
			if (c==0)//condition to be cheaked
			{
				printf("%d is a primr number\n",a[i][j]);//print the value
			}
			else
			{
				printf("%d is not prime number\n",a[i][j]);//print the value
				c=0;
			}
	
		  
		}
	}
}
