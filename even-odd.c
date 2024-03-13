#include<stdio.h>

main()
{
	//check whether a number is even or odd using the ternary operator.
	
	int num;
	printf("enter an num=");
	scanf("%d",&num);
	
	(num % 2==0)? printf("is even",num) : printf("is odd",num);
}