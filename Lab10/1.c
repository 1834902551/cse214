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
    printf("Traversal in forward direction \n");
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
    printf("\n");
}

void push_back(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    struct Node* last = *head_ref;
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

struct Node* head(struct Node *head)
{
    return head;
}

struct Node* tail(struct Node *head)
{
    struct Node *last = head;
    while (last->next != NULL)
        last = last->next;
    return last;
}

int back(struct Node *head)
{
    struct Node *last = head;
    while (last->next != NULL)
        last = last->next;
    return last ->data;
}

int front(struct Node *head)
{
    return head->data;
}

int isEmpty(struct Node *head)
{
    if(head == NULL) return 1;
    else return 0;
}

int size(struct Node *head)
{
    int i = 0;
    struct Node *n = head;
    while(n != NULL)
    {
        i++;
        n = n->next;
    }
    return i;
}

void pop_front(struct Node** head)
{

    if(*head == NULL) return;
    struct Node *del =*head;

    *head = (del->next);

    if(del->next != NULL)
        del->next->prev = del->prev;

    free(del);
    return;
}

void pop_back(struct Node **head)
{

    struct Node *last = *head;
    while(last->next != NULL)
        last = last -> next;

    struct Node * del = last;
    if(del ->prev != NULL)
        del ->prev ->next = del ->next;
    free(del);
    return;
}

int clear(struct Node** head)
{
	struct Node *n = *head;
	struct Node *t = n;
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
    printf("Operations:\n");
    printf("(1) push_back \n");
    printf("(2) push_front \n");
    printf("(3) pop_back \n");
    printf("(4) pop_front \n");
    printf("(5) show_list \n");
    printf("(6) show front \n");
    printf("(7) show back \n");
    printf("(8) list size\n");
    printf("(9) clear list \n");
    printf("(-1) exit \n");
    printf("Enter Operation \n:");
    int ch;
    while(scanf("%d", &ch) != EOF)
    {
        if(ch == 1)
        {
            printf("Enter a data you want to insert: ");
            int d;
            scanf("%d", &d);
            push_back(&h, d);
        }
        else if(ch == 2)
        {
            printf("Enter a data you want to insert: ");
            int d;
            scanf("%d", &d);
            push_front(&h, d);

        }
        else if(ch == 3)
        {
            pop_back(&h);
        }
        else if(ch == 4)
        {
            pop_front(&h);
        }
        else if(ch == 5)
        {
            printList(h);
        }
        else if(ch == 6)
        {
            printf("Front Value: %d\n", front(h));
        }
        else if(ch == 7)
        {
            printf("Back Value: %d\n", back(h));
        }
        else if(ch == 8)
        {
            printf("List Size: %d\n", size(h));
        }
        else if(ch == 9)
        {
            clear(&h);
        }
        else if(ch == -1)
        {
            return 0;
        }

        printf("Enter Operation \n:");
    }

    return 0;
}
