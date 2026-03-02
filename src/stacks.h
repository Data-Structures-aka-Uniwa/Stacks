#ifndef STACKS_H
#define STACKS_H

typedef struct {
    int *data;
    int top;
    int capacity;
} stack;

void init(stack *s, int capacity);
int push(stack *s, int value);
int pop(stack *s, int *value);
int isEmpty(stack *s);
int isFull(stack *s);
void destroy(stack *s);
void printStack(stack *s);

#endif