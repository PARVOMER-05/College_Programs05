//PROGRAM NO 61 = SEARCH FOR AN ELEMENT IN AN ARRAY USING LINEAR SEARCH.
#include <stdio.h>

int main()
{
    int n, i, key;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}