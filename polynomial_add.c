#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>

struct node
{
    int coef;
    int exp;
    struct node *link;
};

void insert_term(struct node ** start,int c, int e)
{
    struct node *temp, *temp, *prev;
    if(*start==NULL)
    {
        temp
    }

}

void transverse(struct node *start)
    {
        struct node *temp;
        temp=start;
        if(temp==NULL)
        {
            printf("Empty polynomial\n");
        }
        else
        {
            while(temp!=NULL)
            {
                printf("%d x^%d",temp->coef,temp->exp);
                temp=temp->link;
                if(temp!=NULL)
                {
                    printf("+");
                }
                else
                {
                    printf("\n");
                }

            }
        }
    }

void poly_add(struct node** start_p,struct node **start_q, struct node **start_r)
{
    int c,e;
    struct node *pptr,*qptr;
    *start_r=NULL;
    pptr=*start_p;
    qptr=*start_q;

    while(pptr!=NULL && qptr!= NULL)
    {
        if(pptr->exp==qptr->exp)
        {
            c=pptr->coef+qptr->coef;
            e=pptr->exp;
            insert_term(start_r,c,e);
            pptr=pptr->link;
            qptr=qptr->link;
        }
        else
        {
            if(pptr->exp>qptr->exp)
            {
                c=pptr->coef;
                e=pptr->exp;
                insert_term(start,r,c,e);
                pptr=pptr->link;
            }

            else
            {
                c=qptr->coef;
                e=qptr->exp;
                insert_term(start_r,c,e);
                qptr=qptr->link;
            }
        }
    }
    while(pptr!=NULL)
    {
        c=pptr->coef;
        e=pptr->exp;
        insert_term(start)
    }
}

