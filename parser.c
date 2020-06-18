#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100
#define true 1
#define false 0;
typedef char bool;

char str[LEN];
int i;
bool flag = true;

void E();
void E1();
void T();
void T1();
void F();
void F1();
void P();

int main()
{
    int m;
    printf("请输入测试的次数:");
    scanf("%d", &m);
    while (m--)
    {
        printf("请输入字符串(以#结束):");
        scanf("%s", &str);
        i = 0;
        E();
        if (flag == true)
        {
            printf("%s为合法字符串!\n", str);
        }
        else
        {
            printf("%s为非法字符串!\n", str);
        }
        strcpy(str, "");
    }
}

void E()
{
    if (flag)
    {
        if (str[i] == '(' || str[i] == 'a' || str[i] == 'b' || str[i] == 'v')
        {
            T();
            E1();
        }
        else
        {
            flag = false;
        }
    }
}

void E1()
{
    if (flag)
    {
        if (str[i] == '+')
        {
            i++;
            E();
        }
        else if (str[i] != '#' && str[i] != ')')
        {
            flag = false;
        }
    }
}

void T()
{
    if (flag)
    {
        if (str[i] == '(' || str[i] == 'a' || str[i] == 'b' || str[i] == 'v')
        {
            F();
            T1();
        }
        else
        {
            flag = false;
        }
    }
}

void T1()
{
    if (flag)
    {
        if (str[i] == '(' || str[i] == 'a' || str[i] == 'b' || str[i] == 'v')
        {
            T();
        }
        else if (str[i] != '+' && str[i] != ')' && str[i] != '#')
        {
            flag = false;
        }
    }
}

void F()
{
    if (flag)
    {
        if (str[i] == '(' || str[i] == 'a' || str[i] == 'b' || str[i] == 'v')
        {
            P();
            F1();
        }
        else
        {
            flag = false;
        }
    }
}

void F1()
{
    if (flag)
    {
        if (str[i] == '*')
        {
            i++;
            F1();
        }
        else if (str[i] != '(' && str[i] != 'a' && str[i] != 'b' && str[i] != 'v' && str[i] != '+' && str[i] != ')' && str[i] != '#')
        {
            flag = false;
        }
    }
}

void P()
{
    if (flag)
    {
        if (str[i] == '(')
        {
            i++;
            E();
            if (str[i] == ')')
            {
                i++;
            }
        }
        else if (str[i] == 'a')
        {
            i++;
        }
        else if (str[i] == 'b')
        {
            i++;
        }
        else if (str[i] == 'v')
        {
            i++;
        }
        else
        {
            flag = false;
        }
    }
}