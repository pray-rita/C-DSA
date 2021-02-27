#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct list
{
    int data;
    struct list *next,*prev;
}*head=NULL;
void main()
{
    void insert();
    int c;
    clrscr();
 

void del()
{
    struct list *temp,*pr,*t;
    int pos,i=1;
    temp=pr=head;
    printf("\tENTER POSITION TO BE DELETED: ");
    scanf("%d",&pos);
    temp=head;
    while(i
        <pos)
    {
        pr=temp;
        temp=temp->next;
        i++;
    }
    t=temp;
    temp=temp->next;
    pr->next=temp;
    temp->prev=pr;
    free(t);
}

