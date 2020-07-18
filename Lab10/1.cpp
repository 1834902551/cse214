#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
 
void push_front(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
    new_node->prev = NULL;
 
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
 
    (*head_ref) = new_node;
}
 
void printList(struct Node* node)
{
    struct Node* last;
    printf("\nTraversal in forward direction \n");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
 
    printf("\nTraversal in reverse direction \n");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}
 
void push_back(Node** head_ref, int new_data)
{
    Node* new_node = (Node*)malloc(sizeof(struct Node));
 
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
 
    while (last->next != NULL)
        last = last->next;
 
    last->next = new_node;
    new_node->prev = last;
    return;
}
 
Node* head(Node *head)
{
    return head;
}
 
Node* tail(Node *head)
{
    Node *last = head;
    while (last->next != NULL)
        last = last->next;
    return last;
}
 
int back(Node *head)
{
    Node *last = head;
    while (last->next != NULL)
        last = last->next;
    return last ->data;
}
 
int front(Node *head)
{
    return head->data;
}
 
bool isEmpty(Node *head)
{
    if(head == NULL) return 1;
    else return 0;
}
 
int size(Node *head)
{
    int i = 0;
    Node *n = head;
    while(n != NULL)
    {
        i++;
        n = n->next;
    }
    return i;
}
 
void pop_front(Node** head)
{
 
    if(*head == NULL) return;
    Node *del =*head;
 
    *head = (del->next);
 
    if(del->next != NULL)
        del->next->prev = del->prev;
 
    free(del);
    return;
}
 
void pop_back(Node **head)
{
 
    Node *last = *head;
    while(last->next != NULL)
        last = last -> next;
 
    Node * del = last;
    if(del ->prev != NULL)
        del ->prev ->next = del ->next;
    free(del);
    return;
}
 
int clear(Node** head)
{
	Node *n = *head;
	Node *t = n;
	while(n != NULL)
	{
		t = n;
		n = n->next;
		free(t);
	}
	*head = NULL;
 
	return 1;
}
int main()
{
    struct Node* h = NULL;
    printf("Is Node empty: %s\n", isEmpty(h)?"Yes":"No");
    push_front(&h, 7);
    push_front(&h, 1);
    push_back(&h, 4);
    push_back(&h, 5);
    push_back(&h, 6);
 
    printf("Head Node: %x \n", head(h));
    printf("Tail Node: %x \n", tail(h));
    printf("List Size: %d \n", size(h));
    printf("Is Node empty: %s\n", isEmpty(h)?"Yes":"No");
    printf("Created DLL is: ");
    printList(h);
 
    pop_front(&h);
    pop_back(&h);
    printList(h);
    clear(&h);
    printf("\nSize of List is: %d\n",size(h));
 
 
    return 0;
}
