#include <stdlib.h>
#include <string.h>
#include "models.cpp"

struct node *new_patient (patient p)
{
    node *temp = (node*)malloc(sizeof(struct node));
    temp->p->date = p.date;
    temp->p->year = p.year;
    strcpy(temp->p->mon, p.mon);
    strcpy(temp->p->name, p.name);
    temp->prev = temp->next = NULL;
    return temp;
};

void push_PQ (patient p)
{
    node *temp = (node*)malloc(sizeof(struct node));
    if (!head)
    {
        head = tail = temp;
    }
    else if (p.date < head->p->date)
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
    else if (p.date > head->p->date)
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    else
    {
        curr = head;
        while (curr && curr->p->date < temp->p->date)
        {
            curr = curr->next;
        }   
    }
}

void remove_PQ (patient p)
{
    if (!tail)
    {
        return;
    }
    else if (head == tail)
    {
        
        free(tail);
    }
    else
    {
        node *temp = (node*)malloc(sizeof(node));
        
    }
}