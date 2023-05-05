#ifndef PE7_H
#define PE7_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void read_data(int **arr, int *n);
Node *create_linked_list(int *arr, int n);
void print_linked_list(Node *head);
void sort_linked_list(Node **head);

#endif
