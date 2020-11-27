struct patient 
{
    char name[1000];
    int date;
    char mon[30];
    int year;
};

struct node 
{
    patient *p;
    node *prev, *next;
} *head, *tail, *curr;