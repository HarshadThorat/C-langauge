//write a program which return addition of all Even elements from SLLL.
//input : 11 -> 20 -> 32 -> 41
//output : 52

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

int EvenAddition(PNODE First)
{
    int Sum = 0;

    while(First != NULL)
    {
        if(First->data % 2 == 0)
        {
            Sum = Sum + (First->data);
        }
        First = First->next;
    }
    return Sum;
    
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

    ret = EvenAddition(Head);
    printf("Addition of All Even elements are : %d\n",ret);
}