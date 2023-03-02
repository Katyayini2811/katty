/*read two matrix and sum up them and print the result using user defined function*/
#include<stdio.h>
void matr_sum(int a[3][3],int b[3][3],int c[3][3]);
main()//main function begins
{
	int i,j,mat1[3][3],mat2[3][3],mat3[3][3];//declaring datatype
	printf("Enter the first matrix:\n");//print the line
	for(i=0;i<3;i++)//number of rows
    {
    	for(j=0;j<3;j++)//number of columns
		{
			scanf("%d",&mat1[i][j]);//value to be taken for mat1
		}
	}
	printf("Enter second matrix:\n");//print the line
		for(i=0;i<3;i++)//number of rows
    {
    	for(j=0;j<3;j++)//number of columns
		{
			scanf("%d",&mat2[i][j]);//values to be taken for mat2
		}
	}
	matr_sum(mat1,mat2,mat3);//calling user function
	printf("The resultant matrix is:\n");//line to be printed
		for(i=0;i<3;i++)//number of rows
    {
    	for(j=0;j<3;j++)//number of columns
		{
			printf("%d\t",mat3[i][j]);//result of third matrix
		}
		printf("\n");
	}
}
	void matr_sum(int a[3][3],int b[3][3],int c[3][3])//user defined function
	{
		int i,j;
		for(i=0;i<3;i++)//number of rows
		{
			for(j=0;j<3;j++)//number of columns
			{
				c[i][j]=a[i][j]+b[i][j];//sum of two matrixs
			}
		}
	}
	
	
	
