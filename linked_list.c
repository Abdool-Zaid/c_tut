#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given value
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;   // Assign data
    newNode->next = NULL;    // Initialize next pointer to NULL
    return newNode;
}

// Insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head_ref, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head_ref;  // Point new node to current head
    *head_ref = newNode;        // Update head to new node
}


// Insert a new node at the end of the list
void insertAtEnd(struct Node** head_ref, int value) {
    struct Node* newNode = createNode(value);
    if (*head_ref == NULL) {
        *head_ref = newNode;   // If list is empty, new node is head
        return;
    }
    struct Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;     // Traverse to the last node
    }
    temp->next = newNode;      // Link last node to new node
}


// Traverse the linked list and print all elements
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");   // Indicate end of list
}


// Delete the first node with the specified key (value)
void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;
 
    // If head node itself holds the key
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;   // Change head
        free(temp);               // Free old head
        return;
    }
 
    // Search for the key in the list
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not found in the list
    if (temp == NULL) return;
 
    // Unlink node from linked list
    prev->next = temp->next;
    free(temp);  // Free memory
}

int main() {
    struct Node* head = NULL;   // Start with an empty list
 
    insertAtEnd(&head, 10);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 20);
 
    printf("Linked list: ");
    printList(head);            // Expected output: 5 -> 10 -> 20 -> NULL
 
    deleteNode(&head, 10);
 
    printf("After deleting 10: ");
    printList(head);            // Expected output: 5 -> 20 -> NULL
 
    return 0;
}