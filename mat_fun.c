/*read two numbers and sum them with user defined function*/
#include<stdio.h>
int add(int p,int q);
main()
{
	int a,b,c;//declaring data type
	scanf("%d,%d",&a,&b);//value from user
	add(a,b);//calling user defined function
	c=a+b;//sum of two numbers
	printf("%d",c);
}
     int add(int p,int q)//user defined function
     {
     	int s=p+q;
	}
