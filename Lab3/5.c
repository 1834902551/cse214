/* Calculate the summation of all elements of the given array */

#include<stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int size=10, i, sum=0;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0; i<size; i++)
        sum = sum + a[i];

    printf("Summation = %d\n",sum);

    return 0;
}
