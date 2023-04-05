//write a program which return second Largest element from SLLL.
//input : 110 -> 230 -> 320 -> 240
//output : 240   incomplete

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

int Maximum(PNODE First)
{
    int Max = First->data;
    
    while(First != NULL)
    {
        if(First->data > Max)
        {
            Max = First->data;
        }
        First = First->next;
    }
    return Max;
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);
    
    Display(Head);

    ret = Maximum(Head);
    printf("Maximum element is : %d\n",ret);
}