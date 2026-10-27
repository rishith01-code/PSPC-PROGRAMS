#include <stdio.h>
int main()
{
	int n; int i=1; int sum=0;
	printf("Enter the number to check if its perfect: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if (n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	{
		printf("The number is a perfect number ");
	}
	else
	{
		printf("The number is not a perfect number");
	}
	return 0;
}
