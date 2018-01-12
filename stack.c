
#include "stack.h"

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
