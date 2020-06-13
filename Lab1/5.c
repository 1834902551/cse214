/*  Print entire array each element  separated by space  */
#include <stdio.h>

int main()
{

    int a[10] ={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10, i;

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

