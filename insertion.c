void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i-1,key = arr[i];
        while (j >= 0 && key < arr[j]) 
        {
            arr[j+1] = arr[j];
            j--;
        }        
        //swap key and (j+1)th item
        arr[j+1] = key;

    }
}