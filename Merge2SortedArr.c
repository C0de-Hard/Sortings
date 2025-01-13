#include <stdlib.h>
void merge_sorted_array(int* arr1,int* arr2, int* arr3,int size1, int size2)
{
    int size3 = size1+size2;
    int new[size3]; //local array
    // int* new = malloc((size3)*sizeof(int));
    int i = 0, j = 0; //k = 0;
    for (; i < size1 && j < size2;)
    {
        if (arr1[i] < arr2[j])
        {
            new[i+++j] = arr1[i];
            // i++;
        }
        else
        {
            new[i+j++] = arr2[j];
            // j++;
        }
    }
    while (i < size1)
    {
        new[i+++j] = arr1[i];
        // i++;
    }
    while (j < size2)
    {
        new[i+j++] = arr2[j];
        // j++;
    }
    // return new;
    for (int abc = 0; abc < size3; abc++)
    {
        arr3[abc] = new[abc];
    }
}