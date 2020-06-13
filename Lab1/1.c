/* Scan N( take input N from user) values from user into an array */

#include <stdio.h>
int main()
{

    int a[10];
    int n,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    return 0;
}
