#include <stdio.h>
int main()
{
	int n,rem;
	printf("Enter the number to seperate its digits: ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
	    n=n/10;
		printf("%d\t",rem);
	}
	return 0;
}
