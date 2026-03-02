#include <stdio.h>
#include "stacks.h"

void transfer(stack *s1, stack *s2);
void copyStack(stack *s1, stack *s2);

int main(int argc, char **argv)
{
    int size;
    int choice, value;
    stack s1, s2;

    printf("Give stack size: ");
    scanf("%d", &size);
    
    init(&s1, size);
    init(&s2, size);
 
    do 
    {
        printf("\n1. Push to Stack1");
        printf("\n2. Pop from Stack1");
        printf("\n3. Transfer Stack1 -> Stack2");
        printf("\n4. Pop from Stack2");
        printf("\n5. Copy Stack1 -> Stack2");
        printf("\n0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Value: ");
                scanf("%d", &value);
                if (!push(&s1, value))
                    printf("Stack1 Full\n");
                printf("<< Stack 1 >>\n");
                printStack(&s1);
                break;
            
            case 2:
                if (pop(&s1, &value))
                    printf("Popped from Stack1: %d\n", value);
                else
                    printf("Stack1 Empty\n");
                printf("<< Stack 1 >>\n");
                printStack(&s1);
                break;
            
            case 3:
                transfer(&s1, &s2);
                printf("<< Stack 1 >>\n");
                printStack(&s1);
                printf("<< Stack 2 >>\n");
                printStack(&s2);
                break;
            
            case 4:
                if (pop(&s2, &value))
                    printf("Popped from Stack2: %d\n", value);
                else
                    printf("Stack2 Empty\n");
                printf("<< Stack 2 >>\n");
                printStack(&s2);
                break;   
            
            case 5:
                copyStack(&s1, &s2);
                printf("<< Stack 1 >>\n");
                printStack(&s1);
                printf("<< Stack 2 >>\n");
                printStack(&s2);
                break;
        }

    } while (choice != 0);

    destroy(&s1);
    destroy(&s2);

    return 0;
}

void transfer(stack *s1, stack *s2)
{
    int value;

    while (!isEmpty(s1))
    {
        if (!pop(s1, &value))
            break;
        
        if (!push(s2, value))
        {
            printf("Stack2 Full.\n");
            break;
        }
    }
}

void copyStack(stack *s1, stack *s2)
{
    stack temp;
    int value;

    init(&temp, s1->capacity);

    // Clean s2
    while (!isEmpty(s2))
        pop(s2, &value);
    
    // Transfer s1 to temp with pop, push
    while (!isEmpty(s1))
    {
        pop(s1, &value);
        push(&temp, value);
    }

    // Transfer temp to s1 and s2
    while (!isEmpty(&temp))
    {
        pop(&temp, &value);
        push(s1, value);
        push(s2, value);
    }

    destroy(&temp);
}

