/* A list that stores strings

   author Vickotoria
   since 2020-02-20
*/

#include <stdlib.h>
#include <stdio.h>

#include "list.h"

//the internal node structure
typedef struct node node;
struct node{
   node *prev;
   node *next;
   char *elem;
};

//the list head
struct list {
   int size;
   node *first;
   node *last;
};


/* Creates an empty list. This needs to be deallocated.
   returns a pointer to a list
   see also destroy_list
*/
list *create_list(void){
   list *l = malloc(1 * sizeof(list));
   if (l == NULL) {
      perror("ERROR");
   }

   l->size = 0;
   l->first = NULL;
   l->last = NULL;

   return l;
}

/* Deallocates all resourses for this list and destroys it.
   param l - the list to destroy
   see also create_list
*/
void destroy_list(list *l){
   //todo remove nodes

   free(l);
}

/* Returns true if the list is empty, otherwise false
*/
bool is_empty(list *l){
   if (l->size < 0) {
      fprintf(stderr, "Fatal flaw in program. Negative size\n");
      return true;
   }

   return l->size == 0;
}

void insert_element(list *l, char *str){
   l = NULL;
   str = NULL;
}

char *inspect_element(list *l){
   l = NULL;
   return NULL;
}

char *remove_element(list *l){
   l = NULL;
   return NULL;
}

char *get_first(list *l){
   l = NULL;
   return NULL;
}

char *get_last(list *l){
   l = NULL;
   return NULL;
}
