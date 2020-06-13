/* Search a value “X” (take input X from user) in the array and print
    “Found” if X found in the array otherwise print “Not Found” */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X, size = 10, search = 0;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\nValue= ");
    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
            search++;
    }

    if(search==1)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
