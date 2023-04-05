//write a program which return Smallest element from SLLL.
//input : 110 -> 230 -> 20 -> 320 -> 240
//output : 320

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

int Minimum(PNODE First)
{
    int Min = First->data;
    
    while(First != NULL)
    {
        if(First->data < Min)
        {
            Min = First->data;
        }
        First = First->next;
    }
    return Min;
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,20);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);
    
    Display(Head);

    ret = Minimum(Head);
    printf("Minimum element is : %d\n",ret);
}