#include "def.h"
void selection_sort2(int arr[], int size)
{
    if (size < 2) return;
    int minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        minIndex = (arr[i]<minIndex) ? i : minIndex;   
    }
    swap(arr,0,minIndex);
    selection_sort2(&arr[1],size-1);
}