#include "structure.h"

void preOrder(bTree *root)
{
    if (NULL == root)
        return;
    printf("%c ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void midOrder(bTree *root)
{
    if (NULL == root)
        return;
    midOrder(root->left);
    printf("%c ", root->data);
    midOrder(root->right);
}

void postOrder(bTree *root)
{
    if (NULL == root)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%c ", root->data);
}

void initNode(bTree *node, char data)
{
    if (NULL == node)
        return;
    node->data = data;
}

void insertNode(bTree *root, bTree *left, bTree *right)
{
    if (NULL == root)
        return;
    root->left = left;
    root->right = right;
}