#include <stdio.h>
#include "insert_thing.h"

int main(void) {
  THING item1 = { .next = NULL, .item = "Bacon\0" };
  THING* list = &item1;
  THING item2 = {.next = NULL, .item = "Cheese\0" };
  InsertThing(&list, &item2);

  // printf("%s", list->next->item);
  PrintThings(list);
  return 0;
}
