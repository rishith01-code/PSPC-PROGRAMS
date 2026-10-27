#include <stdio.h>

int main()
{
    int a[100], n, i;
    int esum = 0, osum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            esum = esum + a[i];
        else
            osum = osum + a[i];
    }

    printf("Sum of even numbers = %d\n", esum);
    printf("Sum of odd numbers = %d\n", osum);

    return 0;
}