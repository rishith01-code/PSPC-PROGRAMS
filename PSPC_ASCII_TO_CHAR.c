#include <stdio.h>
int main(){
	int a;char ch;
	printf("Enter integer to gets ASCII corresponding character:");
	scanf("%d",&a);
	ch=(char)a;
	printf("The character according to your ASCII value is: %c",ch);
	return 0;
	
}
