#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *start = NULL;
void insert_at_begin(int);
void insert_at_end(int);
void insert_after(int,int);
void traverse();
void delete_from_begin();
void delete_from_end();
void delete_after(int);
void search(int);
int count = 0;

int main () {
   int input, data,data1;

   for (;;) {
      printf("1. Insert an element at beginning of linked list.\n");
      printf("2. Insert an element at end of linked list.\n");
      printf("3. Traverse linked list.\n");
      printf("4. Delete element from beginning.\n");
      printf("5. Delete element from end.\n");
      printf("6. Insert  element after .\n");
      printf("7. Delete  element after .\n");
      printf("8. search for an element\n");
      printf("9. reverse the list ");
      printf("10. count nodes ");
      printf("11. display the list ");

      scanf("%d", &input);

      switch(input){
         case 1:
         printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_begin(data);
         break;

         case 2:
         printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_end(data);
         break;

         case 3:
         traverse();
         break;

         case 4:
         delete_from_begin();
         break;

         case 5:
         delete_from_end();
         break;

         case 6:
         printf("Enter value of element\n");
         scanf("%d", &data);
         printf("Enter value of element after which to insert\n");
         scanf("%d", &data1);
         insert_after(data,data1);
         break;

         case 7:
         printf("Enter value of element after which to deletet\n");
         scanf("%d", &data);
         delete_after(data);
         break;

         case 8:
          printf("enter value to be searched");
          scanf("%d",&data);
          search(data);
         break;
         case 9:
          reverse(&start);
          printf("\nReversed Linked list \n");
          display(); 
         break;

         case 10:
          countnodes();
         break;

         case 11:
          display();
         break;

         case 12:
          display();
         break;
         case 11:
         break;
         case 11:
         break;
         case 11:
         break;
      }

      
   }

   return 0;
}

void insert_at_begin(int x) {
   struct node *t;

   t = (struct node*)malloc(sizeof(struct node));
   t->data=x;
   count++;

   if (start == NULL) {
      start = t;
      start->data = t->data;
      start->next = NULL;
      return;
   }
   t->next = start;
   start = t;
}

void insert_at_end(int x) {
   struct node *t, *ptr;

   t = (struct node*)malloc(sizeof(struct node));
   t->data=x;
   count++;

   if (start == NULL) {
      start = t;
      start->data = t->data;
      start->next = NULL;
      return;
   }

   ptr = start;

   while (ptr->next != NULL)
      ptr = ptr->next;

   ptr->next = t;
   t->next    = NULL;
}

void traverse() {
   struct node *ptr;

   ptr= start;

   if (ptr == NULL) {
      printf("Linked list is empty.\n");
      return;
   }

   printf("There are %d elements in linked list.\n", count);

   while (ptr->data != NULL) {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
   }
   printf("%d\n", ptr->data);
}

void countnodes() {
   struct node *ptr;
   int counter=1;

   ptr= start;

   if (ptr == NULL) {
      printf("Linked list is empty.\n");
      return;
   }
   
   while (ptr->data != NULL) {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
      counter++;
   }
   printf("There are %d elements in linked list.\n", counter);

}

void delete_from_begin() {
   struct node *ptr;
   int n;

   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }

   n = start->data;
   ptr=start;
   start = start->next;
   free(ptr);
   count--;
   printf("%d deleted from beginning successfully.\n", n);
}

void delete_from_end() {
   struct node *ptr, *preptr;
   int n;

   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }

   count--;

   if (start->next == NULL) {
      n = start->data;
      free(start);
      start = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }

   ptr= start;

   while (ptr->next != NULL) {
      preptr = ptr;
      ptr = ptr->next;
   }

   n = ptr->data;
   preptr->next = NULL;
   free(ptr);

   printf("%d deleted from end successfully.\n", n);
}

void insert_after(int x,int x1)
{
      struct node *t, *ptr,*preptr;
      t = (struct node*)malloc(sizeof(struct node));
      t->data=x;
      count++;
     ptr=start;
     preptr=ptr;
     while(preptr->data!=x1)
      {     preptr=ptr;
            ptr=ptr->next;
     }
       preptr->next=t;
       t->next=ptr;
}

void delete_after(int x)
{
     struct node *ptr, *preptr,*temp;
      int n;
     if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   count--;
ptr=start;
preptr=ptr;
while(preptr->data!=x)
{
  preptr=ptr;
ptr=ptr->next;
}
temp=ptr;
preptr->next=ptr->next;
free(temp);
}

void search(int num){
    struct node *ptr;
    int counter=1;

   ptr= start;

   if (ptr == NULL) {
      printf("Linked list is empty.\n");
      return;
   }

   while (ptr->data != NULL) {
     
      if(ptr->data==num){
        printf("%d was at %d position\n",num,counter);
        return;
      }
      else
      ptr = ptr->next;
      counter++;
      
   }printf("element not found\n");
}

 void reverse(struct node *ptr1)
{
   struct node *ptr2;
   ptr1 = start;=

   if (ptr1 == NULL) {
      printf("Linked list is empty.\n");
      return;
   }

   while (ptr1->data != NULL) {
      ptr2=insert_at_end(ptr->data)
      ptr1 = ptr1->next;
   }

}

void display() {
   struct node *ptr = start;

   printf("\n[start] =>");
   //start from the beginning
   while(ptr->data != NULL) {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

node* iterativeReverse(node* &head){
   node *prev = NULL;
   node *curr = head;
   node *next;

   while(curr != NULL){
      next = curr->next;
      curr->next=prev;

      prev=curr;
      curr=next;
   }

   return prev;
}
