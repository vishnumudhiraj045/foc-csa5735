#include<stdio.h>
int main()

{
	double a,b,temp;
	printf("enter the value of a ");
	scanf("%lf",&a);
	printf("enter the value of b ");
	scanf("%lf",&b);
    temp=a;
	a=b;
	b=temp;
	printf("swapping of first number is:%.2lf\n",a);
	printf("swapping of second number is:%.2lf\n",b);
	return 0;
	
}
