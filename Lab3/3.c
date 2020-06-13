/* Find Second Maximum from the Array */
#include<stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int size=10, i, max, max2;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    max = a[0];

    for(i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max2 = max;
            max = a[i];
        }
        else if(a[i]>max2 && a[i]<max)
            max2 = a[i];
    }

    printf("Second Maximum = %d\n",max2);

    return 0;
}
