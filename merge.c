#include "def.h"
void merge_sort(int* arr,int minIndex,int maxIndex)
{
    if (maxIndex-minIndex+1 <= 1)
    {
        return ;
    }
    else if (maxIndex-minIndex+1 == 2)
    {
        if (arr[minIndex] > arr[maxIndex])
        {
            swap(arr,minIndex,maxIndex);
        }
        return;
    }
    //base case end
    //main
    int mid = (maxIndex - minIndex)/2;
    merge_sort(arr,minIndex,minIndex+mid);
    merge_sort(arr,minIndex+mid+1,maxIndex);
    int size1 = mid+1;
    int size2 = maxIndex - minIndex - mid;

    merge_sorted_array(arr+minIndex,arr+minIndex+mid+1,arr+minIndex,size1,size2);

    
}