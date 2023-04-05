//write a program which display all elements which are prefect  from SLLL.
//input : 11 -> 28 -> 17 -> 41 -> 6 -> 89
//output : 6  28

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

int CheckPerfect(int No)
{
    int Sum = 0;
    int temp = No;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= No/2; iCnt++)
    {
        if(No % iCnt == 0)
        {
            Sum = Sum + iCnt;
        }
    }
    return (temp == Sum);
}

bool DisplayPerfect(PNODE First)
{
    bool ret = false;
    while(First != NULL)
    {
        ret = CheckPerfect(First->data);
        if(ret == true)
        {
            printf("%d is a perfect number \n",First->data);
        }        
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

    DisplayPerfect(Head);
    
}