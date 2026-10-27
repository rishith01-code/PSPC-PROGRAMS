#include <stdio.h>
int main()
{
	int n,x,rem; int sum=0;
	printf("Enter the number to check if its an armstrong number: ");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
		
	}
	if(sum==x)
	{
		printf("The number is an armstrong number");
	}
	else
	{
		printf("The number is not an armstrong number");
	}
	return 0;
	
}
