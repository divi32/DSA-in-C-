/*   create new node in link list from scratch

*/


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct list {
    struct node* head;
    struct node* tail;
};

void push_front(struct list* l, int val) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = l->head;   // if the list is empty, head is NULL, so next becomes NULL
    if (l->head == NULL)
        l->tail = newnode;     // first node: tail must point to it too
    l->head = newnode;         // head always moves to the new node
}

int main() {
    struct list l1 = {NULL, NULL};   // head = NULL, tail = NULL
    push_front(&l1, 1);
    push_front(&l1, 2);
    return 0;
}