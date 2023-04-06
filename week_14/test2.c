//linked block

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node
{ 
    int value;
    struct _node *next;
} Node;

typedef struct _list
{
    Node *head;
    Node *tail;
} List;

void add(List* pList, int number)
{
    
    //add to linked-list
    Node *p = (Node *)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    //find the last
    Node *last = pList->head;
    if ( last)
    {
        while ( last->next) 
        {
            last = last->next;
        }
    
        last->next = p;
    }
    else
    {
        pList->head = p;
    }   
}

int main(int argc, char const *argv[])
{
    List list;
    int number;
    list.head = list.tail = NULL;
    do
    {
        scanf("%d", &number);
        if (number != -1)
        {
            head = add(&list, number);
        }
        
    } while (number != -1);
    printf(&list);
    scanf("%d", &number);
    Node *p;
    int isFound = 0;
    for (p = list.head; p != NULL; p = p->next)
    {
        if (p->value == number)
        {
            isFound = 1;
            break;
        }
    }
    if (isFound)
    {
        printf("Found");
    }
    else
    {
        printf("Not found");
    }
    Node *q;
    for (q = NULL, p = list.head; p != NULL; p = q, p = p->next)
    {
        if (p->value == number)
        {
            if(q)
            {
                q->next = p->next;
            }
            else
            {
                list.head = p->next;
            }
            free(p);
            break;
        }
    }

    printf("\n");
    return 0;
}
