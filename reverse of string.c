#include<stdio.h>
#include<string.h>
int main() {
	char s[] = "Hi Bro    ";
	int len,i,j,c=0;
	len=strlen(s);

	for(i=0,j=len-1; i<j; j--,i++) {
		c=s[j];
		s[j]=s[i];
		s[i]=c;
	}
	for(i=0; s[i]!='\0'; i++)
		printf("%c",s[i]);
	return 0;
}
