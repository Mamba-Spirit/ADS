#ifndef __STACK__
#define __STACK__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct STACK
{
    int data;
    struct STACK *next;

} STACK;

STACK *new_stack(void);
bool is_stack_empty(STACK *stack);
STACK *push_stack(STACK *stack, int data);
STACK *clear_stack(STACK *stack);
void print_stack(STACK *stack);
STACK *pop_stack(STACK *stack);
STACK *pop_stack_n_elements(STACK *stack, int nombre_elements);
STACK *push_stack_n_elements(STACK *stack, int nombre_elements);
int count_stack_elements(STACK *stack);
int Top_of_stack(STACK *stack);
int Bottom_of_stack(STACK *stack);

#endif