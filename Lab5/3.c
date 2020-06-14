/*  Scan values from user into an array until user input is 0 (Zero).
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100];
    int *p, i, size;

    p = &a[0];

    for(i=0; scanf("%d",(p+i))!=EOF; i++)
        if(*(p+i)==0)
            break;

    size=i;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    return 0;
}
