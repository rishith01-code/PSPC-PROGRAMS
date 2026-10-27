#include <stdio.h>
#include <math.h>
int main(){
	float a;
	printf("Enter the temperature in celcius: ");
	scanf("%f",&a);
	
	float b;
	b = ((9.0/5.0)*a)+32;
	
	printf("The temperature in fahrenheit is %f", b);
	return 0;
	
}
