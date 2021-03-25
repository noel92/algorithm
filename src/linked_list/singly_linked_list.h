//
// Created by noel on 2021/3/23.
//

#ifndef ALGORITHM_SINGLY_LINKED_LIST_H
#define ALGORITHM_SINGLY_LINKED_LIST_H

typedef struct SinglyLinkedListNode {
    void *val;
    SinglyLinkedListNode *next;
} SinglyLinkedListNode;

typedef SinglyLinkedListNode SLLNode;

typedef struct SinglyLinkedList {
    SLLNode *head;
    int length;
} SinglyLinkedList;

typedef SinglyLinkedList SLL;

SLL *create_singly_linked_list();

int append_node(SLL *list, void *val);

int remove_node(SLL *list, int index);

int update_node(SLL *list, int index, void *val);

SLLNode *find_node(SLL *list, int index);

#endif //ALGORITHM_SINGLY_LINKED_LIST_H
