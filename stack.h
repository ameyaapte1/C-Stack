#define MAX 128
#include <stdio.h>

typedef struct stack {
        char array[MAX];
        int head;
} stack;

int empty(stack *stk);
int full(stack *stk);
char pop(stack *stk);
int push(stack *stk,char ch);
void init(stack *stk);

