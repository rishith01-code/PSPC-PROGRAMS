#include<stdio.h>
int main()
{
	int i,n;
	char st[100];
	printf("enter no of characters u wanna enter : \n");
	scanf("%d",&n);
	n++;
	printf("enter characters : \n");
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	{
		printf("%c",st[i]);
		printf("\n");
	}
}