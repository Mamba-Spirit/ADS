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

STACK *new_stack(void);                                          // creat a empty stack (new)
bool is_stack_empty(STACK *stack);                               // test if a stack is empy
STACK *push_stack(STACK *stack, int data);                       // Add an element in the stack
STACK *clear_stack(STACK *stack);                                // Clean the stack
void print_stack(STACK *stack);                                  // Prints the elements of a stack
STACK *pop_stack(STACK *stack);                                  // Remove an element from a stack
STACK *pop_stack_n_elements(STACK *stack, int nombre_elements);  // Remove n elements from a stack
STACK *push_stack_n_elements(STACK *stack, int nombre_elements); // Add n elements to a stack
int count_stack_elements(STACK *stack);                          // Return the numbre of element in a stack
int Top_of_stack(STACK *stack);                                  // Return the last element added (on top) to a stack
int Bottom_of_stack(STACK *stack);                               // Return tht firdt element added to a stack

#endif