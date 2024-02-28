#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int value;
    struct lnode *next;
};

struct list {
  struct lnode *head;
  struct lnode *tail;
};

void list_add(struct list *list, int value) {
  struct lnode *new = (struct lnode *) malloc(sizeof(struct lnode));

  new->value = value;
  new->next = NULL;

  if (list->head == NULL)
    list->head = new;

  if (list->tail != NULL)
    list->tail->next = new;

  list->tail = new;
}

void list_remove(struct list *list, int value) {
  struct lnode *prev = list->head, *curr = list->head; 
  
  while (curr) {
    if (curr->value == value) {
      if (curr == list->head) {
        list->head = curr->next;
      }
      else {
        if (curr == list->tail) {
          list->tail = prev;
        }
        prev->next = curr->next;
      }
    }
    prev = curr;
    curr = curr->next;
  }
}

void list_dump(struct list *lst) {
    struct lnode *cur;
    printf("\nDump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        printf("  %d\n", cur->value);
    }
}

int main() {
  struct list mylist;
  struct lnode * mynode;

  mylist.head = NULL;
  mylist.tail = NULL;

  list_add(&mylist, 10);
  list_add(&mylist, 20);
  list_add(&mylist, 30);
  list_dump(&mylist);

  list_remove(&mylist, 42);

  list_remove(&mylist, 10);
  list_dump(&mylist);

  list_remove(&mylist, 30);
  list_dump(&mylist);

  list_add(&mylist, 40);
  list_dump(&mylist);
}

