#include "structure.h"

void push(stack *sHead, int data)
{
    if (NULL == sHead)
    {
        printf("sHead is null! %s:%d\n", __FILE__, __LINE__);
        exit(0);
    }
    stack *sNode = (stack *)malloc(sizeof(stack));
    memset(sNode, 0, sizeof(stack));
    if (NULL == sNode)
        return;
    sHead->data++;
    while (sHead->next != NULL)
    {
        sHead = sHead->next;
    }
    sHead->next = sNode;
    sNode->data = data;
}

void pop(stack *sHead)
{
    if (NULL == sHead)
    {
        printf("sHead is null! %s:%d\n", __FILE__, __LINE__);
        exit(0);
    }
    if (--sHead->data < 0)
    {
        puts("Stack is empty!\nCannot pop element!");
        exit(0);
    }
    while ((sHead->next != NULL))
    {
        if (sHead->next->next == NULL)
        {
            break;
        }
        sHead = sHead->next;
    }
    printf("%d\n", sHead->next->data);
    free(sHead->next);
    sHead->next = NULL;
}

void displayStack(stack *sHead)
{
    if (NULL == sHead)
    {
        printf("sHead is null! %s:%d\n", __FILE__, __LINE__);
        exit(0);
    }
    reverseLinkedlist(sHead);
    while (sHead->next != NULL)
    {
        printf("\n");
    }
}

void reverseLinkedList(stack *sNode)
{
    stack *temp = NULL;
    stack *p = sNode;

    if (NULL == sNode || sNode == NULL)
        return;
    while (p != NULL)
    {
        /* code */
    }
}