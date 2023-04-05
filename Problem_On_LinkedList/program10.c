//write a program which display addition of digit of element from SLLL.
//input : 110 -> 230 -> 20 -> 240 -> 640
//output : 2      5      2     6      10
//incomplete

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

int SumDigit(int No)
{
    int Sum = 0;
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 10;
        Sum = Sum + iDigit;
        No = No / 10;
    }
    return Sum;
}

int DisplayDigitSum(PNODE First)
{
    int ret = 0;

    while(First != NULL)
    {
        ret = SumDigit(First->data);
        printf("Addition of the digits of the number %d is %d\n",First->data,ret);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,640);
    InsertFirst(&Head,240);
    InsertFirst(&Head,20);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);
    
    Display(Head);

    DisplayDigitSum(Head);
    
}