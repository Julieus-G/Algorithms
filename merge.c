//Merge two already sorted linked list in sorted order

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct linked
{
    int val;
    struct linked *next;
} lnk;

lnk *create();
lnk *merge(lnk *, lnk *);
void disp(lnk *);

void main()
{
    lnk *h1, *h2, *h;

    printf("\n\nEnter the values (0 to exit) : ");
    h1 = create();

    printf("\n\nEnter the values (0 to exit) : ");
    h2 = create();

    printf("\n\nValues in the first linked list are : ");
    disp(h1);

    printf("\n\nValues in the second linked list are : ");
    disp(h2);

    h = merge(h1, h2);

    printf("\n\nValues in the merged linked list are : ");
    disp(h);

    getch();
}

lnk *create()
{
    lnk *temp, *ptr, *h = NULL;
    int v;

    while (1)
    {
        scanf("%d", &v);

        if (v == 0)
            return h;

        temp = (lnk *)malloc(sizeof(lnk));
        temp->val = v;
        temp->next = NULL;
        if (h == NULL)
            h = temp;
        else
            ptr->next = temp;
        ptr = temp;
    }
}

void disp(lnk *h)
{
    while (h != NULL)
    {
        printf("%d", h->val);
        h = h->next;
    }
}

lnk *merge(lnk *h1, lnk *h2)
{
    lnk *h = NULL, *temp, *ptr;

    while (h1 != NULL && h2 != NULL)
    {
        if (h1->val < h2->val)
        {
            temp = h1;
            h1 = h1->next;
        }
        else if (h2->val < h1->val)
        {
            temp = h2;
            h2 = h2->next;
        }
        else
        {
            temp = h1;
            h1 = h1->next;
            h2 = h2->next;
        }

        if (h == NULL)
            h = temp;
        else
            ptr->next = temp;

        ptr = temp;
    }
    if (h1 != NULL && h2 == NULL)
        ptr->next = h1;

    if (h2 != NULL && h1 == NULL)
        ptr->next = h2;

    return h;
}