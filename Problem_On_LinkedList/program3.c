//write a program which return addition of all element from SLLL.
//input : 10 -> 20 -> 30 -> 40
//output : 100

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements of the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Addition(PNODE First)
{
    int Sum = 0;
    
    while(First != NULL)
    {
        Sum = Sum + (First->data);
        First = First->next;
    }
    return Sum;
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);
    
    Display(Head);

    ret = Addition(Head);
    printf("Addition is : %d\n",ret);
}