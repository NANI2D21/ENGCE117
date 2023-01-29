
//นางอริยา รันยะ 65543206088-8
#include <stdio.h>
#include <stdlib.h>

struct DNode {
  int data;
  struct DNode *next;
};

void AddNode(struct DNode **list, int newData) {
  struct DNode *newNode = (struct DNode * ) malloc(sizeof(struct DNode));
  newNode -> data = newData;
  newNode -> next = NULL;

  if ( * list == NULL) {
    * list = newNode;
    return;
  }
  struct DNode * pro = * list;
  while (pro->next != NULL) {
    pro = pro -> next;
  }
  pro -> next = newNode;
}
 //end function

void ShowAll(struct DNode * list) {
  struct DNode * temp = list;
  while (temp != NULL) {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf(" ");
} //end function

void UpdateNode(struct DNode **list, int pro, int low) {
  if ( *list == NULL)
    return;
  struct DNode *lowflaw = NULL, *propros = *list;
  while (propros && propros -> data != pro) {
    lowflaw = propros;
    propros = propros -> next;
  }

  if (propros == NULL)
    return;

  propros -> data = low;
}
//end function
void SwapNode(struct DNode **list, int hi, int jojo) {
    if (*list == NULL)
        return;
    struct DNode *dark = NULL, *color = NULL;
    struct DNode *white = NULL, *red = NULL;
    struct DNode *pink = *list;
    for (int i = 0; pink != NULL; i++) {
        if (pink->data == hi) {
            dark = (i == 0) ? NULL : *list;
            for (int j = 0; j < i - 1; j++) {
                dark = dark->next;
            }
            color = pink;
        }
        if (pink->data == jojo) {
            white = (i == 0) ? NULL : *list;
            for (int j = 0; j < i - 1; j++) {
                white = white->next;
            }
            red = pink;
        }
        pink = pink->next;
    }
    if (color == NULL || red == NULL)
return ;
if (dark != NULL)
dark->next = red;
else
*list = red;
if (white != NULL)
white->next = color;
else
*list = color;
pink = red->next;
red->next = color->next;
color->next = pink;
}//end function

void Showback(struct DNode *node) {
  if (node == NULL) {
    return;
  }
  Showback(node -> next);
  printf("%d ", node -> data);
} //end function

int main() {

  struct DNode * list = NULL;

  AddNode( & list, 9);
  AddNode( & list, 5);
  AddNode( & list, 3);
  AddNode( & list, 1);
  ShowAll(list); 
  printf("\n==============\n");
  printf(" Updatenode \n");
  UpdateNode( & list, 9, 18);
  ShowAll(list);
  printf("\n Updatenode \n");
  UpdateNode( & list, 3, 98);
  ShowAll(list); //98, 2, 3, 4
  printf("\n==============\n");
  printf(" Showback\n");
  Showback(list);
  printf("\n");
  ShowAll(list); 
  printf("\n==============\n");
  printf(" SwapNode\n");
  SwapNode( & list,1, 5);
  ShowAll(list); 
}

