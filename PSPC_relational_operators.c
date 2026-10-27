#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two values to perform relational opertion: ");
	scanf("%d%d",&a,&b);
    printf("%d<%d = %d\n",a,b,a<b);
    printf("%d>%d = %d\n",a,b,a>b);
    printf("%d<=%d = %d\n",a,b,a<=b);
    printf("%d>=%d = %d\n",a,b,a>=b);
	printf("%d==%d = %d\n",a,b,a==b);\
    printf("NOTE: The result of above if \'1\' it is True and \'0'\ it is False ");
return 0;
}
