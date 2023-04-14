#include<stdio.h>

main()
{
	int a;
	printf("value of A=");
	scanf("%d=",&a);
	
	if(a>0)
	{
		printf("A is positive");
	}
	else if(a==0)
	{
		printf("A is neutral");
	}
	else if(a<0)
	{
		printf("A is negative");
		
	}
}

