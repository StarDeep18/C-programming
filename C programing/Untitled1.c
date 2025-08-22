//CH.SC.U4CSE25015
#include <stdio.h>
#include <stdlib.h>
struct node {
    int value;
    struct node *link;
};
struct node *head = NULL;
void CreateList() {
    int n, data, i;
    struct node *temp, *newnode;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("List size must be positive.\n");
        return;
    }
    for (i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        newnode->value = data;
        newnode->link = NULL;
        if (head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->link = newnode;
            temp = newnode;
        }
    }
    printf("List created with %d nodes.\n", n);
}
void Insertion_at_first() {
    int data;
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter data to insert at first: ");
    scanf("%d", &data);
    newnode->value = data;
    newnode->link = head;
    head = newnode;
    printf("Node inserted at beginning.\n");
}
void Display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->link;
    }
    printf("NULL\n");
}
int main() {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Create List\n");
        printf("2. Insertion at first\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                CreateList();
                break;
            case 2:
                Insertion_at_first();
                break;
            case 3:
                Display();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, enter a valid option (0-3).\n");
        }
    } while (choice != 0);
    return 0;
}
