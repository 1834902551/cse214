/* Find Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 99};
    int size = 10, i;
    int *min;

    min = &a[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=1; i<size; i++)
        if(*(min+i)<*min)
            *min = *(min+i);

    printf("Minimum: %d\n",*min);

    return 0;
}
