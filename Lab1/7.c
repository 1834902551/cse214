/*  Print the  array each elements in reverse order. Each element should be separated  by  space  */
#include <stdio.h>

int main()
{

    int a[10] ={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size=10, i;
   
    for(i=size-1;i>=0;i--)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    return 0;
}

