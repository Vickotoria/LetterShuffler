/* API to a list that stores strings.

   author Vickotoria
   since 2020-02-20
*/

#ifndef LIST
#define LIST

#include <stdbool.h>


typedef struct list list;


list *create_list(void);

void destroy_list(list *l);

bool is_empty(list *l);

void insert_element(list *l, char *str);

char *inspect_element(list *l);

char *remove_element(list *l);

char *get_first(list *l);

char *get_last(list *l);

#endif
