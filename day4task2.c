#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
Node* createList(int n) {
    if (n <= 0) return NULL;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int data;
        printf("Name: Aadya\n");
        printf("Roll No:2330002\n");
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    return head;
}
void displayList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void addNodeEnd(Node** head_ref, int data) {
    Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }

    Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;
}
void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = NULL;
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with data %d not found.\n", key);
        return;
    }
    if (temp == *head_ref) {
        *head_ref = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    free(temp);
}
int main() {
    Node* head = NULL;
    int n, data, key;
printf("Enter the number of nodes: ");
    scanf("%d", &n);
head = createList(n);
printf("Doubly Linked List: ");
    displayList(head);
printf("Enter data to add at the end: ");
    scanf("%d", &data);
    addNodeEnd(&head, data);
    
    printf("List after adding node at the end: ");
    displayList(head);
    printf("Enter data to delete: ");
    scanf("%d", &key);
    deleteNode(&head, key);
    printf("List after deleting node with data %d: ", key);
    displayList(head);
Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;}
return 0;
}