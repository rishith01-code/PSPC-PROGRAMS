#include <stdio.h>
int main()
{
	int n; int i=1; int sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("sum from 0 to n = %d\t", sum);
	return 0;
	
}
