#include<stdio.h>
#include<string.h>
int main()
{
	int i,len=0,len2=0,j;
	char st1[100],st2[100];
	printf("enter characters : \n");
	scanf("%s",st1);
	printf("enter characters u wanna add to previous one : \n");
	scanf("%s",st2);
	for(i=0;st1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;st2[i]!='\0';i++)
	{
		len2++;
	}
	for(i=len,j=0;st2[j]!='\0';i++,j++)
		st1[i]=st2[j];
	st1[len+len2]='\0';
	for(i=0;st1[i]!='\0';i++)
	{
		printf("%c",st1[i]);
	}

}
