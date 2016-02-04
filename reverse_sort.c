#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(int a, int b) {
	    return b - a;
}
int my_compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
// void reverse_sort (int *numbers, unsigned count) {
// 	qsort(numbers, count, sizeof(int), my_r_compare);
//  }