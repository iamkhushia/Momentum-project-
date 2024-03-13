#include<stdio.h>

main()
{
	//electricity unit charges and calculate the total electricity bill
	
	int unit;
	float bill;
	
	printf("enter electricity unit=");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		bill = unit * 0.50;
	}
	else if(unit<=150)
	{
		bill = 25 + (unit-50) * 0.75;
	}
	else if(unit<=250)
	{
		bill = 100 + (unit-150) * 1.20;
	}
	else
	{
		bill = 220 + (unit-250) * 1.50;
	}
	printf("\n unit used = %d \t electricity bill = %f",unit,bill);
	
}