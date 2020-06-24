/* Copy a linked list into another linked list.
    Display both list before and after copy.(Don't use recursion)*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int value ;
node* next;
};
node* create_list();
void print_list(node* head);
node *copy_list(node *list);
int main()
{
    node *head,*head2;
    head = NULL;
    head2= NULL;
    head = create_list();
    print_list(head);
    head2 = copy_list(head);
    printf("\n");
    print_list(head2);



        return 0;
}
node *copy_list(node *list){

    node *head2=NULL;
    node *temp;

    temp =(node*) malloc(sizeof(node));
    temp->value= list->value;
    temp->next=list->next;
    head2 = temp;

    list = list->next;
    while(list){

        temp->next=(node*)malloc(sizeof(node));
        temp = temp->next;
        temp->value= list->value;
        temp->next = NULL;
        list=list->next;
    }

    return head2;

}

node* create_list()
{

    node *a,*b,*c,*d;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));
    d=(node*) malloc(sizeof(node));

    a->value=12;
    a->next=b;

    b->value=14;
    b->next=c;

    c->value=15;
    c->next=d;

    d->value=18;
    d->next=NULL;

    return a;
}

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->value);
    temp = temp->next;
 }

}

