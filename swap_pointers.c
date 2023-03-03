/*read two numbers and swap them using pointers*/
#include<stdio.h>
main()
{
	int a,b,*p,*q,r=0;//declaration of datatype
printf("Enter two numbers:\n");//line to be printed
scanf("%d,%d",&a,&b);//value from user
p=&a;//address of a in p
q=&b;//address of b in q
r=q;//r is a temperory variable
q=p;
p=r;
printf("The swapped value of p=%d\n",*p);//*p is the pointer
printf("The swapped value of q=%d\n",*q);	
}
