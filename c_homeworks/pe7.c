#include <stdio.h>
#include <stdlib.h>
#include "pe7.h"

void read_data(int **arr, int *n) {
    scanf("%d", n);
    *arr = malloc(*n * sizeof(int));
    for (int i = 0; i < *n; i++) {
        scanf("%d", &(*arr)[i]);
    }
}

Node *create_linked_list(int *arr, int n) {
    Node *head = NULL;
    for (int i = 0; i < n; i++) {
        Node *new_node = malloc(sizeof(Node));
        new_node->data = arr[i];
        new_node->next = head;
        head = new_node;
    }
    return head;
}

void print_linked_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void sort_linked_list(Node **head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }
    Node *current = *head;
    while (current != NULL) {
        Node *min_node = current;
        Node *next = current->next;
        while (next != NULL) {
            if (next->data < min_node->data) {
                min_node = next;
            }
            next = next->next;
        }
        int temp = current->data;
        current->data = min_node->data;
        min_node->data = temp;
        current = current->next;
    }
}

int main() {
    int n;
    int *arr;
    read_data(&arr, &n);
    Node *head = create_linked_list(arr, n);
    printf("Linked List Before Sorting: ");
    print_linked_list(head);
    sort_linked_list(&head);
    printf("Linked List After Sorting: ");
    print_linked_list(head);
    free(arr);
    return 0;
}
