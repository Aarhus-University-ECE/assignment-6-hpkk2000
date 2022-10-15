#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    int max = numbers[0]; // array of given size
    for (int i = 0; i < size; i++) { //Counter through the elements of array
        if (numbers[i] > max) {//If the current element of array is larger than max value
            max = numbers[i]; // sets the max value to the element of array
        }
    }
    return max; //returning the max value
}
