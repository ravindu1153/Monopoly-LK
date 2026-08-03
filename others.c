#include <stdio.h>
#include "others.h"



int search(int array[],int size, int target) {

    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

/*void append_int(int array[], int size, int item)
{
    
    int cp_arr[size+1];
    
    for (int i = 0; i < size; i++)
    {
        cp_arr[i] = array[i];
    }
    cp_arr[size+1] = item;

    int array[size+1];
    
    for (int i = 0; i < size+1; i++)
    {
        array[i] = cp_arr[i] ;
    }

}*/

