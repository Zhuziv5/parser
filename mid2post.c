#include "structure.h"

void expr();
void term();
void matchForward(int t);
void err();
char isDigit(char character);
int lookahead;
int main(void)
{
    lookahead = getchar();
    expr();
}

void expr()
{
    term();
    while (1)
    {
        if ('+' == lookahead)
        {
            matchForward('+');
            term();
            printf("+");
        }
        else if ('-' == lookahead)
        {
            matchForward('-');
            term();
            printf("-");
        }
        else if (13 == lookahead || 10 == lookahead)
            return;
        else
            err();
    }
}

void term()
{
    if (isDigit((char)lookahead))
    {
        printf("%c", lookahead);
        matchForward(lookahead);
    }
    else
        err();
}

void matchForward(int t)
{
    if (lookahead == t)
        lookahead = getchar();
    else
        err();
}

void err()
{
    puts("syntax error!");
    exit(0);
}

char isDigit(char character)
{
    if (character <= '9' && character >= '0')
        return 1;
    else
        return 0;
}