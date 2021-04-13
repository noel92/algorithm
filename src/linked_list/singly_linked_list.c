//
// Created by noel on 2021/3/23.
//

#include <stdlib.h>
#include "singly_linked_list.h"

SLL *create_singly_linked_list() {
    SLL *list = (SLL *) malloc(sizeof(SLL));
    list->head = (SLLNode *) malloc(sizeof(SLLNode));
    list->head->val = NULL;
    list->head->next = NULL;
    list->length = 0;

    return list;
}

int append_node(SLL *list, void *val) {
    SLLNode *node = list->head;
    while (node->next != null) {
        node = node->next;
    }
    SLLNode *new_node = (SLLNode *) malloc(sizeof(SLLNode));
    new_node->val = val;
    new_node->next = NULL;
    node->next = new_node;
    list->length++;

    return list->length;
}

int remove_node(SLL *list, int index) {
    if (index < 0) {
        return list->length;
    }
    SLLNode *node = find_node(list, index - 1);
    if (node->next != NULL) {
        SLLNode *temp = node->next;
        node->next = temp->next;
        free(temp);
        list->length--;
    }

    return list->length;
}

int update_node(SLL *list, int index, void *val) {
    if (list->length < 1) {
        return list->length;
    }
    SLLNode *node = find_node(list, index);
    node->val = val;

    return list->length;
}

SLLNode *find_node(SLL *list, int index) {
    SLLNode *node = list->head;
    while (node->next != NULL && index-- > 0) {
        node = node->next;
    }

    return node->next;
}