#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	printf("Enter your salary: ");
	scanf("%f", &a);
	printf("Enter bonus percentage: ");
	scanf("%f",&b);
    
    float c = ((b/100)*(a))+a;
	
	printf("Your Total salary is %f",c);
	return 0;
}
