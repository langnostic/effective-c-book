#pragma once

#include <stddef.h>
#include <string.h>

// a linked list with some text
// the data doesn't really matter,
// it's the functionality that matters here.
typedef struct _thing
{
  struct _thing *next;
  char *item;
} THING;

// Insert an item into a THING Linked List
// Insert Condition: alphabetical order
void InsertThing(THING **head, THING *newp)
{
  THING **tracer = head;

  while ((*tracer != NULL) && strcmp((*tracer)->item, newp->item) < 1)
  {
    tracer = &(*tracer)->next;
  }
  newp->next = *tracer;
  *tracer = newp;
}

void PrintThings(THING *head)
{
  THING *curr = head;
  int i = 1;
  while (curr != NULL)
  {
    printf("Item #%d: %s\n", i++, curr->item);
    curr = curr->next;
  }
}
