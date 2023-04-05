//write a program which display all Pallindrome element from SLLL.
//input : 11 -> 28 -> 17 -> 414 -> 6 -> 89
//output : 11   6   414
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

int Pallindrome(int No)
{
    int Rev = 0;
    int iDigit = 0;
    int temp = No;

    while(No != 0)
    {
        iDigit = No % 10;
        Rev = (Rev * 10) + iDigit;
        No = No / 10;
    }
    return (temp == Rev);
}

bool DisplayPallindrome(PNODE First)
{
    bool ret = false;

    while(First != NULL)
    {
        ret = Pallindrome(First->data);
        if(ret == true)
        {
            printf(" %d Is Pallindrome number \n",First->data);
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
    InsertFirst(&Head,414);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);
    
    Display(Head);

    DisplayPallindrome(Head);
    
}