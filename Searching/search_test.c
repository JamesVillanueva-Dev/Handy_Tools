#include <stdio.h>
#include "binary_search/binary_search.h"
#include "linear_search/linear_search.h"
#include "exponential_search/exponential_search.h"
//command to compile all things: gcc search_test.c binary_search/binary_search.c exponential_search/exponential_search.c linear_search/linear_search.c -o search_test.exe
/**
 * This file is the tester for all the searching functions
 */
int main(){
    int list[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int listSize = 12;
    int target = 8;

    //all results should be the same
    printf("Result of linear search: ");
    printf("The index of the value %d in the list is %d\n", target, linearSearch(target, list, listSize));

    printf("Result of binary search: ");
    printf("The index of the value %d in the list is %d\n", target, binarySearch(target, list, listSize));

    printf("Result of exponential search: ");
    printf("The index of the value %d in the list is %d\n", target, expSearch(target, list, listSize));

    return 0;

}