#include <stdio.h>

typedef struct NODE {
   int data;
   struct NODE* next;
}NODE;

typedef struct LIST {
   int num;
   NODE* head;
   NODE* tail;
}LIST;

LIST* createList() {
   LIST* list = (LIST*)malloc(sizeof(list));
   list->num = 0;
   list->head = NULL;
   return list;
}

int findNode(LIST* list, int data) {
   for (NODE* tmp = list->head; tmp != NULL; tmp = tmp->next) {
      if (tmp->data == data) return 1;
   }
   return 0;
}

void insertNode(LIST* list, int data) {
   //create node
   NODE* node = (NODE*)malloc(sizeof(NODE));
   node->data = data;
   node->next = NULL;

   if (list->num == 0) {
      //if list is empty
      list->head = node;
      list->tail = node;
   }
   else {
      //If list is not empty, insert new node to the tail.
      list->tail->next = node;
      list->tail = node;
   }

   list->num++;
}

int deleteNode(LIST* list, int data) {
   NODE* pre;
   NODE* cur;

   //if the data is in list head
   if (list->head->data == data) {
      cur = list->head;
      list->head = list->head->next;
      free(cur);
      list->num--;
      return 1;
   }

   //find previous node and current node to delete
   for (NODE* tmp = list->head; tmp != NULL; tmp = tmp->next) {
      if (tmp->next->data == data) {
         pre = tmp;
         cur = tmp->next;

         //if current node is in the tail
         if (cur == list->tail) {
            list->tail = pre;
         }

         pre->next = cur->next;
         free(cur);
         list->num--;
         return 1;
      }
   }
}

void printList(LIST* list) {
   for (NODE* tmp = list->head; tmp != NULL; tmp = tmp->next) {
      printf("%d ", tmp->data);
   }
   printf("\n");
}

int main() {
   LIST* list;

   list = createList();
   insertNode(list, 5);
   insertNode(list, 7);
   insertNode(list, 8);
   printf("%d\n", findNode(list, 5));
   printList(list);
   deleteNode(list, 8);
   printList(list);

   return 0;
}