#include <stdio.h>
int main(){
	float x,y;
	printf("Enter 2 numbers to perform shorthand operation: ");
	scanf("%f%f",&x,&y);
	printf("increment = %f\n", x+=y);
	printf("decrement = %f\n", x-=y);
	printf("multiple = %f\n", x*=y);
	int a=(int)x, b=(int)y;
	printf("fraction = %f\n", a/=b);
	return 0;
	
}
