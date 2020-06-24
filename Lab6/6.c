/*6.Define a function to display the complete Linked List in reverse order with
    a recursive function using problem 4. */

#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

int main()
{
    node *head = NULL;
    node *a, *b, *c;

    a = (node*) malloc(sizeof(node));
    b = (node*) malloc(sizeof(node));
    c = (node*) malloc(sizeof(node));

    head = a;

    a->value = 1;
    a->next  = b;

    b->value = 2;
    b->next  = c;

    c->value = 3;
    c->next  = NULL;

    print_list(head);
    printf("\n");
    reversed_list(head);

    return 0;
}
void reversed_list(node *temp)
{

        if(temp==NULL)
        {
            return;
        }
        reversed_list(temp->next);
        printf("%d ",temp->value);
}
void print_list(node *temp)
{
        while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
        }

}
