#include<stdio.h>
int main()
{
	int i;
	char st[100];
	printf("enter characters : \n");
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>=65&&st[i]<=95)
			st[i]=st[i]+32;
	}
	puts(st);
}
