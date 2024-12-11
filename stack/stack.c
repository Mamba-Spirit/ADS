#include "stack.h"

STACK *new_stack(void)
{
    return NULL;
}

bool is_stack_empty(STACK *stack)
{
    bool value = false;
    if (stack == NULL)
        value = true;

    return value;
}

STACK *push_stack(STACK *stack, int data)
{
    STACK *stack_element = NULL;
    stack_element = malloc(sizeof(*stack_element));

    if (stack_element == NULL)
    {
        fprintf(stderr, "Dynamique allocation failed");
        exit(EXIT_FAILURE);
    }

    stack_element->data = data;
    stack_element->next = stack;

    return stack_element;
}

STACK *clear_stack(STACK *stack)
{
    if (stack == NULL)
        return NULL;

    clear_stack(stack->next);

    free(stack);

    return NULL;
}

void print_stack(STACK *stack)
{
    if (is_stack_empty(stack))
    {
        printf("Nothing to print here, the stack is empty!\n");
        return;
    }

    while (!is_stack_empty(stack))
    {
        printf("%d\n", stack->data);
        stack = stack->next;
    }
}

STACK *pop_stack(STACK *stack)
{

    if (is_stack_empty(stack))
    {
        printf("Nothing to pull here, the stack is empty!\n");
        return new_stack();
    }

    STACK *tmp = stack->next;
    free(stack);

    return tmp;
}

STACK *pop_stack_n_elements(STACK *stack, int nombre_elements)
{
    for (int i = 0; i < nombre_elements; i++)
    {
        stack = pop_stack(stack);
    }
    return stack;
}

STACK *push_stack_n_elements(STACK *stack, int nombre_elements)
{
    int data = 0;
    for (int i = 0; i < nombre_elements; i++)
    {
        printf("\nEnter the %d element : ", i + 1);
        scanf("%d", &data);
        stack = push_stack(stack, data);
    }

    return stack;
}

int count_stack_elements(STACK *stack)
{
    int count = 0;
    if (is_stack_empty(stack))
    {
        printf("This stack counts 0 element, it\'empty!\n");
        return 0;
    }

    while (!is_stack_empty(stack))
    {
        count++;
        stack = stack->next;
    }

    return count;
}

int Top_of_stack(STACK *stack)
{
    if (is_stack_empty(stack))
    {
        printf("The stack is empty!\n");
        return EXIT_FAILURE;
    }

    return stack->data;
}

int Bottom_of_stack(STACK *stack)
{
    int bottom = 0;

    if (is_stack_empty(stack))
    {
        printf("The stack is empty!\n");
        return EXIT_FAILURE;
    }

    while (stack != NULL)
    {
        if (stack->next == NULL)
        {
            bottom = stack->data;
        }
        stack = stack->next;
    }

    return bottom;
}
