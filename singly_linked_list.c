#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *temp, *newnode;
int n;
void create(int n);
void reverse();
void print();
int main()
{
    int choice;
    while (1)
    {
        printf("\n\n***Linked List Menu***");
        printf("\n1.create\n2.reverse\n3.exit");
        printf("\nEnter your Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create(n);
            print();
            break;
        case 2:
            reverse();
            print();
            break;
        case 3:
            printf("\nbye bye:)!!");
            exit(0);
        default:
            printf("\nOops!!! Wrong Choice");
        }
    }
    return 0;
}
void create(n)
{
    printf("Enter the length of the list:");
    scanf("%d", &n);
    struct node *newnode;
    head = 0;
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data value:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}
void reverse()
{
    struct node *prevnode, *current, *nextnode;
    prevnode = 0;
    current = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        current->next = prevnode;
        prevnode = current;
        current = nextnode;
    }
    head = prevnode;
}
void print()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
