#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/* Struct for a singly-linked list node */
typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

/* Function prototype for adding a node at the end of the list */
list_t *add_node_end(list_t **head, const char *str);

/**
 * struct list_s - Singly linked list
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Pointer to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function to print elements of a linked list */
size_t print_list(const list_t *h);

#endif
