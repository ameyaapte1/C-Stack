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

char pop(stack *stk) {
        return stk->array[(stk->head)--];
}
int push(stack *stk,char ch) {
        if(!full(stk)){
                stk->array[(stk->head)++]=ch;
                return stk->head;
        }
        else
                return -1;
}
void init(stack *stk){
        stk->head=0;
}

int empty(stack *stk) {
        return stk->head == 0;
}
int full(stack *stk) {
        return stk->head == MAX;
}

int main( int argc, char *argv[] )
{
        stack s;
        int i;
        init(&s);
        push(&s,'a');
        push(&s,'m');
        push(&s,'e');
        push(&s,'y');
        push(&s,'a');
        push(&s,'1');
        push(&s,'2');
        push(&s,'3');

        while(!empty(&s))
                printf("%c",pop(&s));
        return 0;
}
