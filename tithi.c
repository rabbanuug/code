#include <stdio.h>

struct Node {
    int info;
    Node * next;
};

struct LinkedList {
    Node *head;
    Node *tail;
};

Node* node_create(int info) {
    Node *node = new Node;
    node->info = info;
    node->next = NULL;

    return node;
}

void node_set_next(Node *cur_node, Node *next_node) {
    cur_node->next = next_node;
}


int linked_list_is_empty(LinkedList *linked_list) {
    return linked_list->head == NULL;
}

void linked_list_update_tail(LinkedList *linked_list, Node *node) {
    linked_list->tail = node;
}

void linked_list_insert_node(int info, LinkedList *linked_list) {
    if(linked_list_is_empty(linked_list)) {
        linked_list->head = node_create(info);
        linked_list->tail = linked_list->head;
        return;
    }

    Node *node = node_create(info);
    node_set_next(linked_list->tail, node);
}

void linked_list_init(LinkedList *linked_list) {
    linked_list->head = NULL;
    linked_list->tail = NULL;
}