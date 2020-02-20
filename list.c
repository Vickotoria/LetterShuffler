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


/* Creates an empty list. This needs to be deallocated later

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

void destroy_list(list *l){
   //todo remove nodes

   free(l);
}

bool is_empty(list *l){
   return true;
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
