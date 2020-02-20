/* A list that stores strings

   author Vickotoria
   since 2020-02-20
*/

#include <stdlib.h>

#include "list.h"

typedef struct node node;
struct node{
   node *prev;
   node *next;
   char *elem;
};

struct list {
   int size;
   node *n;
};


list *create_list(void){
   return NULL;
}

void destroy_list(list *l){
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
