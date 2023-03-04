/*read a matrix and print that first column is added to second column alternatively*/
#include<stdio.h>
main()
{
	int i,j,m,n,k=0;//declaration of datatype
	scanf("%d,%d",&m,&n);//size of matrix
	int a[m][n];
	for(i=1;i<m;i++)//number of rows
	{
		for(j=1;j<n;j++)//number of colums
		{
			scanf("%d",&a[i][j]);//values from user
		}
	}
	printf("the matrix is:\n");
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			printf("%d\t",a[i][j]);//print the matrix in order
		}
		printf("\n");
	}
	printf("the changed matrix is:\n");
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			if(j%2!=0)//condition to store the first column
			{
				k=a[i][j];//k stores first column elements
			}
			if(j%2==0)//condition for second column
			{
				a[i][j]=a[i][j]+k;//adding of first column to second column
			}
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}

