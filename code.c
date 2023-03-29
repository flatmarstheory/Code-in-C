// Circular linked list of 10 nodes containing the numbers 1-10 and print it out.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    struct node *head = NULL;
    struct node *tail = NULL;
    struct node *current = NULL;
    int i;

    for (i = 1; i <= 10; i++) {
        current = (struct node *)malloc(sizeof(struct node));
        current->data = i;
        current->next = NULL;

        if (head == NULL) {
            head = current;
            tail = current;
        } else {
            tail->next = current;
            tail = current;
        }
    }

    tail->next = head;

    current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);

    return 0;
}
