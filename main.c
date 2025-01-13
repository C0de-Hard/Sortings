#include<stdlib.h>
#include "def.h"
int main()
{
    int A[] = {2, 5, 1, 512, -4, 3, 10, 0, 1, 912};

    int sizeof_A = sizeof(A)/sizeof(int);

    printlist(A,sizeof_A);

    merge_sort(A,0,sizeof_A-1);
    printlist(A,sizeof_A);
    

/*
for testing purpose of below fn. we used int* but actually it is void
    int* NEW = merge_sorted_array(A,B,sizeof_A,sizeof_B);
    printlist(NEW,sizeof_A+sizeof_B);
    free(NEW);
*/
    return 0;


}

/*
gcc def.h main.c print.c swap.c bubble.c insertion.c Merge2SortedArr.c merge.c flag_bubble.c rec_bubble.c rec_selection.c selection.c -o output && ./output
gcc def.h main.c print.c Merge2SortedArr.c merge.c swap.c -o output && ./output
*/