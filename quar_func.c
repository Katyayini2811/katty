/*read three numbers and form quadratic equation and find there roots in user defined
 functon*/
#include<stdio.h>
#include<math.h>
 int sqrt_root(int p,int q,int r,float x1,float x2);//global declaration
main()//main function
{
	int a,b,c;//declare data type
	float r1,r2;
	print("Enter three values\n");//print
	scanf("%d,%d,%d",&a,&b,&c);//value from user
	sqrt_root(a,b,c,r1,r2);
	
}
  int sqrt_root(int p,int q,int r,float x1,float x2)//user defined funtion
{
	if((q*q-4*p*r)>0)//condition
	{
	x1=(-q+sqrt(q*q-4*p*r))/(2*p);//roots of x1
	x2=(-q-sqrt(q*q-4*p*r))/(2*p);//roots of x2
	printf("The roots of x1=%.2f\n",x1);//print the value
	printf("The roots of x2=%.2f\n",x2);//print the value
	return 0;
}
}

