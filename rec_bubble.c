#include "def.h"
void bubble_sort2(int arr[], int size)
{
    if (size==0) return;
    for (int i = 0; i <= size-2; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr,i,i+1);
        }
    }
    bubble_sort2(arr,size-1);
}