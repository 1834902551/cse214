/* Scan values from user into  an array until end of file */
#include<stdio.h>
int main()
{
    int a[10];
    int i = 0;
    while(scanf("%d",&a[i]) != EOF)
    {
        i++;
        if(i>=10)
        {
            printf("\n Overflow");
            break;
        }
    }
    return 0;
}
