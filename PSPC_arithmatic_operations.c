#include <stdio.h>
int main() {
float a,b;
printf("Enter values of 2 numbers to perform all arithmatic operations: ");
scanf("%f%f",&a,&b);
printf("%f + %f = %f\n",a,b,a+b); 
printf("%f - %f = %f\n", a,b,a-b);
printf("%f * %f = %f\n", a,b,a*b);
printf("%f / %f = %f\n", a,b,a/b);			
int A = (int)a,B= (int)b;
printf("%d %% %d = %d, A,B,A/B");
return 0;
}
