//write a program which display all elements which are Prime from SLLL.
//input : 11 -> 20 -> 17 -> 41 -> 22 -> 89
//output : 11   17   41   89

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

int IsPrime(int No)
{
    int iCnt = 0;
    int i = 0;

    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        if(No % iCnt == 0)
        {
            i++;
        }
    }
    return i;
}


void Prime(PNODE First)
{
    int ret = 0;

    while(First != NULL)
    {
        ret = IsPrime(First->data);
        if(ret == 2)
        {
            printf("%d is a prime Number\n",First->data);
        }
        First = First->next;
    }
    
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);
    
    Display(Head);

    Prime(Head);
    
}