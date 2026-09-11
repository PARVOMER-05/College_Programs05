//PROGRAM NO 66 = INSERT AN ELEMENT IN A SORTED ARRAY AT THE APPROPRIATE POSITION.
#include <stdio.h>

int main()
{
    int n, i, x;

    scanf("%d", &n);

    int a[n + 1];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    i = n - 1;

    while(i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = x;

    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}