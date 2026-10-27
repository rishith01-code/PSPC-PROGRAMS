#include <stdio.h>

int main()
{
    int a[100], n, i;
    int esum = 0, osum = 0;
    int ec = 0, oc = 0;
    float eaverage, oaverage;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            esum += a[i];
            ec++;
        }
        else
        {
            osum += a[i];
            oc++;
        }
    }

    if (ec > 0)
    {
        eaverage = (float)esum / ec;
        printf("Average of even numbers = %.2f\n", eaverage);
    }
    else
    {
        printf("No even numbers found.\n");
    }

    if (oc > 0)
    {
        oaverage = (float)osum / oc;
        printf("Average of odd numbers = %.2f\n", oaverage);
    }
    else
    {
        printf("No odd numbers found.\n");
    }

    return 0;
}