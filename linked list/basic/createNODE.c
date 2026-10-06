/* linked list- linear data structure
               -contains node which has 2 part 
               -head pointer has address of first node
               -their is no index in linked list
               */

   //single independent node creation

#include <stdio.h>
#include <stdlib.h>   //for using malloc , free

struct node {
    int data;
    struct node* next;
};

// Equivalent of the C++ constructor
struct node* newNode(int val) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;
    return n;
}

int main() {
    struct node* n1 = newNode(10);
    printf("%d", n1->data);

    free(n1);
    return 0;
}