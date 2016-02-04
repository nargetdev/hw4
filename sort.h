#ifndef SORT_H
#define SORT_H

typedef void (*sorting_fn)(int *numbers, unsigned count);
extern sorting_fn sorting_fns[];

void bubble_sort(int *numbers, unsigned count);
void insertion_sort(int *numbers, unsigned count);
void my_q_sort_tortilla_wrap (int *numbers, unsigned count);

#endif
