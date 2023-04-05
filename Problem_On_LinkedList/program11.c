//write a program which reverse each element from SLLL.
//input : 11 -> 28 -> 17 -> 41 -> 6 -> 89
//output : 11   82    71    14    6    98


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

int Reverse(int No)
{
    int Rev = 0;
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 10;
        Rev = (Rev * 10) + iDigit;
        No = No / 10;
    }
    return Rev;
}

int DisplayReverse(PNODE First)
{
    int ret = 0;

    while(First != NULL)
    {
        ret = Reverse(First->data);
        printf("Reverse digit %d is %d\n",First->data,ret);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);
    
    Display(Head);

    DisplayReverse(Head);
    
}