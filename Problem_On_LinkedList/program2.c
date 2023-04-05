//write a program which search Last occurance of particular element fom SLLL.
// 10 -> 20 -> 30 -> 40 -> 50 -> 30 -> 70
// input : 30
//output : 3

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

int SearchLastOccurance(PNODE First,int no)
{
    int iCnt = 1;
    int ipos = -1; 

    while(First != NULL)
    {
        if(First->data == no)
        {
            ipos = iCnt;
        }
        First = First->next;
        iCnt++;
    }
    return ipos;
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);
    
    Display(Head);

    ret = SearchLastOccurance(Head,30);
    printf("Element is occur at index : %d\n",ret);
}