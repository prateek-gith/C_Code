#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*newnode,*head=NULL,*temp;
void push()
{
    // struct node *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter The data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        head=newnode;
        newnode->next=temp;
        temp=newnode;
    }
}

void pop()
{
    if(head==NULL)
    {
        printf("Stack Is Already Empty");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}

void display()
{
    // struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
    temp=head;
}

void peek()
{
    if(head==NULL)
    {
        printf("No Data In Stack");
    }
    else
    {
        printf("Peek Node Is : %d",head->data);
    }
}

int main()
{
    printf("SHREE RAM\n");
    int c;
    while(1)
    {
        printf("\nPress Number For Result\n");
        printf("1.For Push Data In Stack\n");
        printf("2.For Pop Data In Stack\n");
        printf("3.For Peek Data In Stack\n");
        printf("4.For Display Data In Stack\n");
        printf("5.For Exit From Stack : ");
        scanf("%d",&c);
        
        if(c==1)
        {
            push();
            printf("\n");
        }
        else if(c==2)
        {
            pop();
            printf("\n");
        }
        else if(c==3)
        {
            peek();
            printf("\n");
        }
        else if(c==4)
        {
            display();
            printf("\n");
        }
        else  if(c==5)
        {
            exit(0);
        }
        else
        {
            printf("Wrong Choice!!!!");
        }
    }

    return 0;
}
