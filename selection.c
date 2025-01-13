#include "def.h"
void selection_sort(int arr[], int size)
{
    for (int i = 0; i <= size - 2; i++)
    {
        int minIndex = i; //coz we have to use the index to swap
        for (int j = i+1; j < size; j++)
        {
            minIndex = (arr[j]<arr[minIndex]) ? j : minIndex;
        }
        //swapping
        swap(arr,i,minIndex);
    }
}
