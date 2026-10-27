#include <stdio.h>
int main()
{
	int n,rev,rem;
	printf("Enter the number to obtain its reverse: ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("The reverse is %d",rev);
	return 0;
}
