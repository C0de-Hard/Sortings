#include "def.h"

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i <= size-2; i++)
    {
        for (int j = 0; j <= size-2-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr,j,j+1);
            }
        }
    }
}