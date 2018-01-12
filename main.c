#include "stack.h"
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

