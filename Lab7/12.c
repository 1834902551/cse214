/*Define a function to merge two sorted Linked List into a sorted
Linked List.Display all the list before and after merging.
(Consider given two linked list are already sorted) */

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node* create_list2();
node* create_list();
node *merge_list(node *list1, node *list2);
void print_list(node *temp);

int main ()
{
    node* list1 = NULL;
    node* list2 = NULL;
    node* list3 = NULL;

    printf("Before Merging:\n");
    list1 = create_list();
    print_list(list1);

    list2 = create_list2();
    print_list(list2);

    printf("After Merging:\n");
    list3 = merge_list(list1,list2);
    print_list(list3);

    return 0;
}
node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 4;
    a->next = b;

    b->value = 3;
    b->next = c;

    c->value = 2;
    c->next = d;

    d->value = 1;
    d->next = NULL;

    return a;
}
node* create_list2()
{
    node *p, *q, *r, *s;

    p = (node *) malloc(sizeof(node));
    q = (node *) malloc(sizeof(node));
    r = (node *) malloc(sizeof(node));
    s = (node *) malloc(sizeof(node));

    p->value = 8;
    p->next = q;

    q->value = 7;
    q->next = r;

    r->value = 6;
    r->next = s;

    s->value = 5;
    s->next = NULL;

    return p;
}

node *merge_list(node *list1, node *list2)
{
    node *head, *temp, *new_node;

    head = create_list(list1);
    temp = head;

    while(temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = create_list2(list2);
    return head;
}

void print_list(node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
