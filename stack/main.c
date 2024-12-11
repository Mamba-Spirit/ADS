#include "stack.h"

int main()
{
    STACK *stack = new_stack();

    print_stack(stack);

    // stack = push_stack_n_elements(stack, 4);

    stack = push_stack(stack, 2008);
    stack = push_stack(stack, 2014);
    stack = push_stack(stack, 2015);
    stack = push_stack(stack, 2017);
    stack = push_stack(stack, 2018);
    stack = push_stack(stack, 2019);
    stack = push_stack(stack, 2020);

    print_stack(stack);
    printf("\n%d elements in this stack!\n", count_stack_elements(stack));
    printf("The element on the top is : %d\n", Top_of_stack(stack));
    printf("The element on the bottom is : %d\n", Bottom_of_stack(stack));

    printf("\n---------------------------------------\n");
    // stack = pop_stack_n_elements(stack, 7);
    // print_stack(stack);
    // printf("\n---------------------------------------\n");

    stack = clear_stack(stack);
    print_stack(stack);

    return 0;
}