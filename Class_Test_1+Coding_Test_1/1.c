/*Write a C program that declare an integer array length of one hundred(100)(do not initialize the array).
Scan values from user into an array until user input is 0(zero).Print entire array each element separated
by comma. Check OverFlow. Use Function and Don't user pointer.*/

#include<stdio.h>
void array_scan_print(int arr[]);
int main(){

int arr[100];
int i;

 array_scan_print(arr[i]);

return 0;
}

void array_scan_print(int arr[])
{
    printf("elements: \n");
    int i;
    for(i=0;i<=100;i++)
    {
        scanf("%d", &arr[i]);
    }
    if(i==100)
    {
        printf("\nOverflow");
    }
    for(i=0;i<=100;i++)
    {
        printf("%d", arr[i]);
    }

}

