#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int value;
node* next;
};
node* create_list();
void print_list(node* head);
node *reversed_list(node *list);
int main()
{
    node *head,*r;
    head = NULL;
    head = create_list();
    print_list(head);
    r = reversed_list(head);
    print_list(r);


        return 0;
}
node *reversed_list(node *list){

    node *first,*current,*temp;

    first = list;
    current = list->next;
    first->next = NULL;

    while(current){
        temp = current->next;
        current->next= first;
        current = temp;
    }
    return first;
}


node* create_list()
{

    node *a,*b,*c,*d;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));
    d=(node*) malloc(sizeof(node));

    a->value=1;
    a->next=b;

    b->value=2;
    b->next=c;

    c->value=3;
    c->next=d;

    d->value=4;
    d->next=NULL;

    return a;
}

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d ",temp->value);
    temp = temp->next;
 }

}

