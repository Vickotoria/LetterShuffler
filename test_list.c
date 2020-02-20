/* Test file for a list containing strings

   author Vickotoria
   since 2020-02-20
*/

#include "list.h"

int main(void) {
   //test create and destroy
   list *l = create_list();

   destroy_list(l);
   
   return 0;
}
