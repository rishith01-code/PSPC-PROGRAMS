#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char str[100];

    printf("Enter a string:\n");
    scanf("%99s", str);

    len = strlen(str);

    printf("Length of string: %d\n", len);

    return 0;
}