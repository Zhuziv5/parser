#include "structure.h"

int main(void)
{
    bTree *n1 = (bTree *)malloc(sizeof(bTree));
    bTree *n2 = (bTree *)malloc(sizeof(bTree));
    bTree *n3 = (bTree *)malloc(sizeof(bTree));
    bTree *n4 = (bTree *)malloc(sizeof(bTree));
    bTree *n5 = (bTree *)malloc(sizeof(bTree));

    memset(n1, 0, sizeof(bTree));
    memset(n2, 0, sizeof(bTree));
    memset(n3, 0, sizeof(bTree));
    memset(n4, 0, sizeof(bTree));
    memset(n5, 0, sizeof(bTree));
    initNode(n1, 'a');
    initNode(n2, 'b');
    initNode(n3, 'c');
    initNode(n4, 'd');
    initNode(n5, 'e');

    insertNode(n1, n2, n3);
    insertNode(n3, n4, NULL);
    insertNode(n4, NULL, n5);

    preOrder(n1);
    puts("");
    midOrder(n1);
    puts("");
    postOrder(n1);
}