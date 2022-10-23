#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};
struct node *head;

void insert(int num)
{   
    struct node *temp,*newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    if(head == NULL)
    {
        head  = newnode;
        head->link = head;
    }
    else
    {       temp = head;
            while(temp->link != head)
            {
                temp = temp->link;
            }
            temp->link = newnode;
            newnode->link = head;
    }
    
}

void delete()
{   
    struct node *curr,*prev;

    if(head == NULL)
    {
        printf("List is already empty\n");
    }
    else if(head->link == head)
    {   curr = head;
        printf("%d - Deleted\n",head->data);
        head = NULL;

        free(curr);
    }
    else
    {
        curr = prev = head;

        while(curr->link != head)
        {
            curr = curr->link;
            if(curr->link != head)
            {
                prev = prev->link;
            }
            else
            {
                break;
            }
            
        }
        prev->link = head;
        printf("%d - Deleted\n",curr->data);
        free(curr);
    }
    
}

void display()
{
    struct node *curr;

    if(head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {   curr = head;
        printf("Queue is :- ");
        do
        {
            printf("\t%d",curr->data);
            curr = curr->link;
        }while (curr!= head);
        
        
    }
    
}

int main()
{
    int ch,num=0;
    head = NULL;

    while(1)
    {
        printf("\n\t-----Circular Queue-----\n");
        printf("Enter the choices\n");
        printf("1. insert\n2. delete\n3. display\n4. Exit\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value to be inserted\n");
            scanf("%d",&num);
            insert(num);
            break;
        case 2: 
            delete();
            break;
        case 3:
            display();
            break;
        case 4: return 0;

        default: printf("You enetred the invalid input\n");
            break;
        }
    }
}