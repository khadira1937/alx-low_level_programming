#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @Struct: string
 * @len: length of string
 * @nxt: points to the next node
 * @prv: points to the previous node
 *
 * Description: singly linked list node structure
 * for ALX Software Engineering training.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
