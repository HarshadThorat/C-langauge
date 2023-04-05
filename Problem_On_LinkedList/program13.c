//write a program which display product of all element from SLLL.
//input : 11 -> 20 -> 32 -> 41
//output : 1    2      6     4    


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

int Product(int No)
{
    int Mult = 1;
    int iDigit = 0;
    
    while(No != 0)
    {
        iDigit = No % 10;
        Mult = Mult * iDigit;
        No = No / 10;
    }
    return Mult;
}

void DisplayProduct(PNODE First)
{
    int ret = 0;

    while(First != NULL)
    {
        ret = Product(First->data);
        printf(" %d product is  %d\n",First->data,ret);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int ret = 0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);
    
    Display(Head);

    DisplayProduct(Head);
    
}