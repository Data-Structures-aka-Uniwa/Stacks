#include <stdio.h>
#include <stdlib.h>
#include "stacks.h"

void init(stack *s, int capacity)
{
    s->capacity = capacity;
    s->top = -1;
    s->data = (int*) malloc(capacity * sizeof(int));
    if (!s->data)
    {
        printf("Error in allocating heap memory.\n");
        exit(1);
    }
}

int isEmpty(stack *s)
{
    return (s->top == -1);
}

int isFull(stack *s)
{
    return (s->top == s->capacity - 1);
}

int push(stack *s, int value)
{
    if (isFull(s))
        return 0;
    
    s->data[++(s->top)] = value;
    return 1;
}

/* Optional: As memory it requires */

/*

void init(stack *s, int capacity)
{
    s->capacity = capacity > 0 ? capacity : 1;
    s->top = -1;
    s->data = (int*) malloc(s->capacity * sizeof(int));
    if (!s->data)
    {
        printf("Error in allocating heap memory.\n");
        exit(1);
    }
}

int push (stack *s, int value)
{
    if (s-> top == s->capacity -1)
    {
        s-> capacity *= 2;
        s->data = realloc(s->data, s->capacity * sizeof(int));
        if (!s->data)
        {
            printf("Error in reallocating heap memory.\n");
            exit(1);   
        }
    }

    s->data[++(s->top)] = value;

    return 1;
}

*/

int pop(stack *s, int *value)
{
    if (isEmpty(s))
        return 0;
    
    *value = s->data[(s->top)--];
}

void destroy(stack *s)
{
    free(s->data);
}

void printStack(stack *s)
{
    stack temp;
    int value;

    init(&temp, s->capacity);
    
    printf("Top -> ");

    while (!isEmpty(s))
    {
        pop(s, &value);
        printf("%d ", value);
        push(&temp, value);
    }

    printf("\n");

    while (!isEmpty(&temp))
    {
        pop(&temp, &value);
        push(s, value);
    }    

    destroy(&temp);
}