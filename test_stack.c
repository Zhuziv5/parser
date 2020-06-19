#include "structure.h"

int main(void)
{
    stack *sHead = (stack *)malloc(sizeof(stack));
    if (NULL == sHead)
        return 0;
    memset(sHead, 0, sizeof(stack));
    sHead->next = NULL;
    push(sHead, 10);
    push(sHead, 20);
    push(sHead, 30);
    push(sHead, 40);
    pop(sHead);
    pop(sHead);
    pop(sHead);
}
