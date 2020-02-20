/* Test file for a list containing strings

   author Vickotoria
   since 2020-02-20
*/

#include <assert.h>
#include <stdio.h>

#include "list.h"

int main(void) {
   //test create and destroy
   list *l = create_list();

   assert(l);

   printf("wow");

   destroy_list(l);

   return 0;
}
