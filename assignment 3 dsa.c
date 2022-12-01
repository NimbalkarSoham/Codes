#include <stdio.h>
#include <stdlib.h>


struct node {   // declaration for main linked list
    int data;
    struct node *next;
};
//Start node
struct node *start = NULL;

struct node *end = NULL;


struct nodeTwo {   // Declaration for secondary linked list
    int dataTwo;
    struct nodeTwo *nextTwo;
};
// Start node of secondary linked list
struct nodeTwo *startTwo = NULL;

void secondLinkedList() {     // Initialises second linked list with static values
    // declare nodes
    struct nodeTwo *newNodeOne;
    struct nodeTwo *newNodeTwo;
    struct nodeTwo *newNodeThree;
    // allocates memory for nodes
    newNodeOne = (struct nodeTwo *)malloc(sizeof(struct nodeTwo));
    newNodeTwo = (struct nodeTwo *)malloc(sizeof(struct nodeTwo));
    newNodeThree = (struct nodeTwo *)malloc(sizeof(struct nodeTwo));
    // enter data and link the nodes
    startTwo = newNodeOne;
    newNodeOne->dataTwo = 4;
    newNodeOne->nextTwo = newNodeTwo;

    newNodeTwo->dataTwo = 8;
    newNodeTwo->nextTwo = newNodeThree;

    newNodeThree->dataTwo = 12;
    newNodeThree->nextTwo = NULL;

}

void insertAtBegining(int val) {    // Inserts node at the begining
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;

    if (start == NULL) {    // when 0 nodes are present
        start = newNode;
        start->data = newNode->data;
        start->next = NULL;
        return;
    }
    newNode->next = start;
    start = newNode;
}

void insertAtEnd(int val) {     // Inserts at the end
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;

    if (start == NULL) {    // Entering first node
        start = newNode;    
        // start->data = newNode->data;
        start->next = NULL;
        return;
    } else {    // inserting node at end
        struct node *ptr;
        ptr = start;

        while (ptr->next != NULL) {    // traverse upto the last node
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = NULL;
    }
}

void insertAtEndYes(int val) {     // Inserts at the end
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;

    if (start == NULL) {    // Entering first node
        start = newNode;    
        // start->data = newNode->data;
        start->next = NULL;
        end = start;
    } else {    // inserting node at end
        end->next = newNode;
        newNode->next = NULL;
        end = newNode;
    }
}
void search(int val) {  // Search for element in the array
    struct node *ptr;
    int count = 0;
    ptr = start;
    if (ptr == NULL) {
        printf("\nList is empty");
        return;
    }
    while (ptr->next != NULL) {
        if (val == ptr->data) {
            printf("\n%d  is present on node index  :  %d", val, count);
            return;
        }
        ptr = ptr->next;
        count++;
    }
    printf("\nElement not found!");
}

void reverse() {    // Reverses the list
    struct node *previousNode, *currentNode, *nextNode;
    previousNode = NULL;
    currentNode = nextNode = start;
    while (nextNode != NULL) {
        nextNode = nextNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    start = previousNode;
}

void countNodes() {    // Count nodes in the list
    struct node *ptr = start;
    int count = 1;
    while (ptr->next != NULL) {
        ptr = ptr->next;
        count++;
    }
    printf("There are  %d  nodes", count);
}

void display() {  // traverse through the list
    struct node* ptr;
    ptr = start;
    if (ptr == NULL) {
        printf("\nList is empty!");
        return;
    }
    printf("\n");
    while (ptr->next != NULL) {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
}

void sort() {    // Sorts the list
    struct node *i = start;
    struct node *j = NULL;
    int temp;
    for (i = start ; i != NULL ;  i=i->next) {
        for (j = i->next ; j != NULL ; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void concat() {
    struct node *ptr;
    struct nodeTwo *ptrTwo;
    ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = (struct node *)startTwo;
}

void displayListTwo() {
    
    struct nodeTwo* ptr;
    ptr = startTwo;
    if (ptr == NULL) {
        printf("\nList is empty!");
        return;
    }
    printf("\n");
    while (ptr->nextTwo != NULL) {
        printf("%d  ", ptr->dataTwo);
        ptr = ptr->nextTwo;
    }
    printf("%d ", ptr->dataTwo);
}

void fun() {
    if (start == NULL) {
        return;
    }
    printf("%d  ", start->data);
    if (start->next!=NULL) {
        start = start->next->next;
        fun();
    }
    printf("%d ", start->data);
}

void delete_from_begin() {
   struct node *ptr;
   int n;
   int count;

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
   int n,count;

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


node* reverse (node* &head) {
node* prevptr=NULL; node* currptr=head;
node* nextptr;
while(currptr!=NULL){ nextptr=currptr->next;
currptr->next=prevptr;
prevptr=currptr; currptr=nextptr;
}
return prevptr;

int main() {
    int choice, item, pos, val;
    while (1) {
        printf("\n*1  Insert at the beginning");
        printf("\n*2  Insert at the end");
        printf("\n*3. Delete element from beginning.");
        printf("\n*4. Delete element from end.");
        printf("\n*5 Search");
        printf("\n*6 Reverse");
        printf("\n*7 Count Nodes");
        printf("\n*8 Display");
        printf("\n*9 Sort");
        printf("\n*10 Concat");
        printf("\n*11 Merge");
        printf("\n*12 EXIT");
        printf("\n");
        printf("\nEnter your choice :  ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter an element to add :  ");
                scanf("%d", &item);
                insertAtBegining(item);
                break;

            case 2:
                printf("\nEnter an element to add :  ");
                scanf("%d", &item);
                insertAtEnd(item);
                break;
            case 3:
                delete_from_begin();
                break;

            case 4:
                delete_from_end();
                break;

                
            case 5:
                printf("\nEnter elment to search ");
                scanf("%d", &item);
                search(item);
                break;

            case 6:
                reverse();
                break;

            case 7:
                countNodes();
                break;

            case 8:
                printf("\nEnlements in the list are :");
                display();
                break;

            case 9:
                sort();
                break;

            case 10:
                printf("List 1 :  ");
                display();
                printf("\nList 2 :  ");
                secondLinkedList();
                displayListTwo();
                concat();
                printf("\nList after concatenation :  ");
                display();
                break;
                
            case 11:
                printf("List 1 :  ");
                display();
                printf("\nList 2 :  ");
                secondLinkedList();
                displayListTwo();
                concat();
                sort();
                printf("\nList after merging :  ");
                display();
                break;

            case 12:
                printf("\n**EXITING**\n");
                exit(1);
                break;
            default:
                printf("INVALID INPUT");
        }
    }

    return 0;
}