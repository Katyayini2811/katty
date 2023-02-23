#include<stdio.h>
main()
{
	int a,b,c;//declaring variable type
	scanf("%d,%d",&a,&b);//values from user
	c=add(a,b);
	printf("c=%d",c);//output
}
int add(int p,int q)//user define function
{
	int c=p+q;//sum of two numbers
	return c;//return c value in main function
}
