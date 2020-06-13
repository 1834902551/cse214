/* Scan values from user into an array until user input is 0 (Zero). */
#include <stdio.h>

int main()
{

    int a[10];
    int i = 0;
    while(1)
    {
        int t;
        scanf(%d", &t);
        if(t == 0)
            break;
        a[i++] = t;
    }
    return 0;
}

