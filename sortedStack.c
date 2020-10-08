#include <stdio.h>

struct pair
{
    int value;
    int occ;
};

struct pair sortedStack[1000000];
int top = -1;

struct pair tempStack[100000];
int tempTop = -1;

struct pair getTop()
{
    return sortedStack[top];
}

struct pair pop()
{
    return sortedStack[top--];
}

void push(struct pair p)
{
    top++;
    sortedStack[top] = p;
}

int isEmpty()
{
    return (top == -1) ? 1 : 0;
}

void sortedPush(int value)
{
    struct pair p;
    p.occ = 1;
    p.value = value;

    if (top == -1)
    {
        push(p);
    }
    else
    {
        while (1)
        {
            struct pair temp = getTop();
            if (temp.value > p.value)
            {
                tempTop++;
                tempStack[tempTop] = temp;
                pop();
            }
            else
            {
                break;
            }
        }
        struct pair temp = getTop();
        if (temp.value == p.value)
        {
            sortedStack[top].occ++;
        }
        else
        {
            push(p);
        }
        while (tempTop != -1)
        {
            struct pair temp = tempStack[tempTop--];
            push(temp);
        }
    }
}

void sortedDelete(int v)
{
    while (getTop().value != v)
    {
        tempTop++;
        tempStack[tempTop] = getTop();
        pop();
    }

    if (sortedStack[top].occ > 2)
    {
        sortedStack[top].occ -= 1;
    }
    else
    {
        pop();
    }
    while (tempTop != -1)
    {
        struct pair temp = tempStack[tempTop--];
        push(temp);
    }
}

void Display()
{
    printf("Value\tOcc\n");
    for (size_t i = 0; i <= top; i++)
    {
        printf("%d\t%d\n", sortedStack[i].value, sortedStack[i].occ);
    }
}

int main()
{
    sortedPush(7);
    Display();
    sortedPush(1);
    Display();
    sortedPush(3);
    Display();
    sortedPush(5);
    Display();
    sortedPush(3);
    Display();
    sortedPush(5);
    Display();
    sortedDelete(1);
    Display();
    sortedDelete(5);
    Display();
    return 0;
}