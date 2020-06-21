#include "structure.h"

char lookahead = 0;
char t = 0;
void expr()
{
    term();
    rest();
}

void rest()
{
    if (lookahead == '+')
    {
        match('+');
        term();
        print('+');
        rest();
    }
    else if (lookahead == '-')
    {
        match('-');
        term();
        print('-');
        rest();
    }
    else
    {
    }
}

void term()
{
    if (isNum(lookahead))
    {
        t = lookahead;
        match(lookahead);
        print(t);
    }
    else
    {
        puts("Syntax error!");
    }
}