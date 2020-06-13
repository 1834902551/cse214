/* Calculate Standard Deviation of all elements of the given array */
#include<stdio.h>
#include<math.h>
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,10};
    int size=10, i;
    double sum = 0, avg = 0, variance = 0;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    for(i=0; i<size; i++)
        sum = sum + a[i];

    printf("\nSummation = %.3lf",sum);

    avg = sum/size;

    printf("\nAverage = %.3lf",avg);

    for(i=0; i<size; i++)
        variance = variance + pow(a[i]-avg,2);

    variance = sqrt(variance/10);

    printf("\nVariance = %.2lf\n",variance);

    return 0;
}
