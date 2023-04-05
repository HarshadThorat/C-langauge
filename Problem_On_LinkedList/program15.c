//write a program which display Largeest digit of all element from SLLL.
//input : 11 -> 250 -> 532 -> 419
//output : 1     5      5      9    


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

int Largest(int No)
{
    int Max = 0;
    int iDigit = 0;
    
    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit > Max)
        {
            Max = iDigit;
        }
        No = No / 10;
    }
    return Max;
}

void DisplayLargestDigit(PNODE First)
{
    int ret = 0;

    while(First != NULL)
    {
        ret = Largest(First->data);
        printf(" %d Largest digit is  %d\n",First->data,ret);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,419);
    InsertFirst(&Head,532);
    InsertFirst(&Head,250);
    InsertFirst(&Head,11);
    
    Display(Head);

    DisplayLargestDigit(Head);
    
}