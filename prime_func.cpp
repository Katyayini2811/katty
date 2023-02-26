/*read a number and cheak whether it is prime or not in user defined function*/
#include<stdio.h>
int matr_prime(int b);
main()
{
	int a;//declare datatype
	scanf("%d",&a);//value from user
	matr_prime(a);//user defined function
}
int matr_prime(int b)//user defined function
{
	int k,count=0;
	for(k=2;k<b;k++)//cheaking conditiond
	{
		if(b%k==0)//condition
		{
			count++;
		}
	}
		if(count==0)//condition
		{
			printf("prime no");//value to be printed
		}
		else
		{
			printf("not prime");//value to be printed
		}
	
}
