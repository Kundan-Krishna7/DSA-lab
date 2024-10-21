//WAP TO PERFORM THE FOLLOWING QUESTION IN A SINGLE LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traverse(struct Node* head) {
    while (head) {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int isEmpty(struct Node* head) {
    return head == NULL;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    for (int i = 0; temp && i < position - 1; i++) temp = temp->next;
    if (!temp) return;
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBeginning(struct Node** head) {
    if (*head) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void deleteAtEnd(struct Node** head) {
    if (*head) {
        struct Node* temp = *head;
        if (!temp->next) {
            free(temp);
            *head = NULL;
            return;
        }
        while (temp->next->next) temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}

void deleteAtPosition(struct Node** head, int position) {
    if (*head) {
        struct Node* temp = *head;
        if (position == 0) {
            *head = temp->next;
            free(temp);
            return;
        }
        for (int i = 0; temp && i < position - 1; i++) temp = temp->next;
        if (!temp || !temp->next) return;
        struct Node* next = temp->next->next;
        free(temp->next);
        temp->next = next;
    }
}

int countNodes(struct Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 0);
    insertAtPosition(&head, 3, 2);

    printf("Linked list: ");
    traverse(head);

    printf("Is the list empty? %s\n", isEmpty(head) ? "Yes" : "No");
    printf("Total number of nodes: %d\n", countNodes(head));

    deleteAtBeginning(&head);
    deleteAtEnd(&head);
    deleteAtPosition(&head, 1);

    printf("Linked list after deletions: ");
    traverse(head);

    return 0;
}#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traverse(struct Node* head) {
    while (head) {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int isEmpty(struct Node* head) {
    return head == NULL;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    for (int i = 0; temp && i < position - 1; i++) temp = temp->next;
    if (!temp) return;
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBeginning(struct Node** head) {
    if (*head) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void deleteAtEnd(struct Node** head) {
    if (*head) {
        struct Node* temp = *head;
        if (!temp->next) {
            free(temp);
            *head = NULL;
            return;
        }
        while (temp->next->next) temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}

void deleteAtPosition(struct Node** head, int position) {
    if (*head) {
        struct Node* temp = *head;
        if (position == 0) {
            *head = temp->next;
            free(temp);
            return;
        }
        for (int i = 0; temp && i < position - 1; i++) temp = temp->next;
        if (!temp || !temp->next) return;
        struct Node* next = temp->next->next;
        free(temp->next);
        temp->next = next;
    }
}

int countNodes(struct Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 0);
    insertAtPosition(&head, 3, 2);

    printf("Linked list: ");
    traverse(head);

    printf("Is the list empty? %s\n", isEmpty(head) ? "Yes" : "No");
    printf("Total number of nodes: %d\n", countNodes(head));

    deleteAtBeginning(&head);
    deleteAtEnd(&head);
    deleteAtPosition(&head, 1);

    printf("Linked list after deletions: ");
    traverse(head);
    return 0;
}