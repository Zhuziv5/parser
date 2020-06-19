#ifndef _STRUCTURE_H_
#define _STRUCTURE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct binary_tree
{
    char data;
    struct binary_tree *left;
    struct binary_tree *right;
} bTree;

typedef struct stack
{
    int data;
    struct stack *next;
} stack;

void preOrder(bTree *root);
void midOrder(bTree *root);
void postOrder(bTree *root);
void insertNode(bTree *root, bTree *left, bTree *right);
void initNode(bTree *node, char data);
void push(stack *sHead, int data);
void pop(stack *sHead);

#endif