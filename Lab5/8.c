/*  Delete a value from Kth index (take input K from user) from the
    array shift all other value to left. And print the whole array.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, *p, i, K;
    int temp = 0;
    p = &a[0];

    printf("Value: ");
    scanf("%d",&K);

    for (i=K-1; i<size; i++)
        *(p+i) = *(p+i+1);

    size--;

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));

    return 0;
}
