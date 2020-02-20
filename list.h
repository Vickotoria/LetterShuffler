/* API to a list that stores strings.

   author Vickotoria
   since 2020-02-20
*/

#ifndef LIST
#define LIST

#include <stdbool.h>


typedef struct list list;


/* Creates an empty list. This needs to be deallocated.
   returns a pointer to a list
   see also destroy_list
*/
list *create_list(void);

/* Deallocates all resourses for this list and destroys it.
   param l - the list to destroy
   see also create_list
*/
void destroy_list(list *l);

bool is_empty(list *l);

void insert_element(list *l, char *str);

char *inspect_element(list *l);

char *remove_element(list *l);

char *get_first(list *l);

char *get_last(list *l);

#endif
