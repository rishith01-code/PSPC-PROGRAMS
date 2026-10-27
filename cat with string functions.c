#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[50] = "world";

    strcat(str1, str2);

    printf("Joined string: %s\n", str1);

    return 0;
}