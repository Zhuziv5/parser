#include <stdio.h>

struct Node
{
    Node(Node *l, Node *r, int v) : left(l), right(r), value(v) {}

    Node *left;
    Node *right;
    char value;
};

void do_something(char c)
{
    std::cout << c;
}

// 显式递归实现后序遍历
void visit(Node *root)
{
    if (root->left != NULL)
    {
        visit(root->left);
    }
    if (root->right != NULL)
    {
        visit(root->right);
    }
    do_something(root->value);
}

// 使用栈实现的后续遍历
void stack_visit(Node *root)
{
    std::stack<Node *> s;
    std::stack<int> s_reverse; // for reverse
    s.push(root);
    while (!s.empty())
    {
        Node *n = s.top();
        s_reverse.push(n->value);
        s.pop();
        if (n->left != NULL)
        {
            s.push(n->left);
        }
        if (n->right != NULL)
        {
            s.push(n->right);
        }
    }
    while (!s_reverse.empty())
    {
        do_something(s_reverse.top());
        s_reverse.pop();
    }
}

int main()
{
    // create a tree
    //      +
    //     / \
    //    3   *
    //       / \
    //      5   6

    Node *n1 = new Node(NULL, NULL, '5');
    Node *n2 = new Node(NULL, NULL, '6');
    Node *n3 = new Node(n1, n2, '*');
    Node *n4 = new Node(NULL, NULL, '3');
    Node *n5 = new Node(n4, n3, '+');

    //visit(n5);

    stack_visit(n5);

    return 0;
}