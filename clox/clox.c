#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *pre;
    struct Node *next;
    char *data;
} node;

void insert(node *list, char *data)
{

    node *append = malloc(sizeof append);

    node *cur = list;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    append->data = data;
    cur->next = append;
    append->pre = cur;
}

node *find(node *list, char *data)
{
    node *cur = list;
    while (cur != NULL)
    {
        if (cur->data != NULL && strcmp(cur->data, data) == 0)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

node *delete (node *list, node *d)
{
    node *cur = list;
    while (cur != NULL)
    {
        if (cur == d)
        {
            if (cur->pre != NULL)
            {
                cur->pre->next = d->next;
            }
            if (d->next != NULL)
            {
                d->next->pre = cur;
            }
            break;
        }
        else
        {
            cur = cur->next;
        }
    }
    free(d);
    while (cur->pre != NULL)
    {
        cur = cur->pre;
    }
    return cur;
}

int main()
{
    node list = {
        .pre = NULL,
        .next = NULL,
        .data = NULL};
    insert(&list, "abc");
    insert(&list, "def");
    node *res = find(&list, "abc");
    printf("%s\n", res->data);
    delete (&list, res);
    res = find(&list, "abc");
    printf("%d\n", res);
    res = find(&list, "def");
    printf("%s\n", res->data);
    return 0;
}