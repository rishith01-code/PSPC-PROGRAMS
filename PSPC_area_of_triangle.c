#include <stdio.h>
#include <math.h>
int main(){
int a,b;
printf("Enter the baselength and height of the triangle: \n");
scanf("%d,%d",&a,&b);

float area;
area = (0.5)*a*b;
printf("Area of the triangle is %f", area);
return 0;
}
