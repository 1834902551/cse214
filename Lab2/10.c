/*  Delete a value “X” (take input X from user) from
    the array shift all other value to left. If “X”
    is not present in the given array print Element
    Not Found. Only delete the first occurrence of
    the value. And print the whole array */

#include<stdio.h>
int main ()
{
    int a[10]= {1,2,3,4,5,3,7,8,9,1};
    int i, j, X, search=0, size=10;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\nValue: ");
    scanf("%d",&X);

    for(i=0; i<size; i++)
    {
        if(X==a[i])
        {
            for(j=i; j<=size; j++)
            {
                a[j] = a[j+1];
            }
            search++;
            break;
        }

    }

    size--;

    if(search!=1)
    {
        printf("Element Not Found");
    }
    else
    {
        for(i=0; i<size; i++)
            printf("%d ",a[i]);
    }

    return 0;
}
