#include<stdbool.h>
#include "def.h"

void bubble_sort_flagged(int arr[],int size) //to make bestCase : O(n)
{
    for (int i = 0; i <= size-2; i++)
    {
        bool IsUnsorted = 0; //update flag if any swap occur
        for (int j = 0; j <= size-2-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr,j,j+1);
                IsUnsorted = 1;
            }
        }
        if (IsUnsorted == 0) break;
    }
}
// void bubble_sort_flagged(int arr[],int size) //to make bestCase : O(n)
// {
//     for (int i = 0; i <= size-2; i++)
//     {
//         bool IsUnsorted = false; //update flag if any swap occur
//         if (arr[i] > arr[i+1])
//         {
//             swap(arr,i,i+1);
//             IsUnsorted = true;
//         }
//         if (IsUnsorted)
//         {
//             bubble_sort_flagged(arr,size-1);
//         }
//     }
// }