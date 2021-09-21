#include <stdio.h>

struct node
{
  char name[30];
  struct node * next;
};

void main()
{
  struct node * root = NULL, *prev, *current;
  char name[30];

    while(1)
    {
       // take one name at a time
       printf("Enter name of player [end to stop]: ");
       gets(name);

       if(stricmp(name, "end") == 0)
              break; // come out of loop

       // allocation of a node
       current = (struct node *) malloc(sizeof(struct node));
       if (current == NULL)  // if block is not allocated
       {
          printf("Memory allocation error");
          exit(1);
       }
       // put data and address into new node
      strcpy(current -> name, name);
      // last node's next must be set to NULL
      current->next = NULL;

      if (root == NULL) // first node
          root = current;
      else   // make previous node point to current node
          prev->next = current;

      prev = current;
    } // while

    // Print names from list
    current = root;
    while(current != NULL) {
       puts( current->name);
       current = current -> next;
    }

}
