#include<stdio.h>
void printlist(int arr[],int size)
{
    int i = 0;
    printf("[");
    while (1)
    {
        if (i == size-1)
        {
            printf("%d]\n",arr[size-1]);
            break; //or return ;
        }
        printf("%d, ",arr[i++]);
    }
}