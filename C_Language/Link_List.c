#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main()
{
    struct node *newnode,*temp,*head=0;
    int c;

    while (1)
    {
        printf("Press 1 for Enter Data");
        printf("\n Press 2 for Display");
        printf("\n Press 3 for Exit : ");
        scanf("%d",&c);

        if(c==1)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            head=newnode;
            
            temp=newnode;
        }
        if(c==2)
        {
            printf("%d",newnode->data);
        }
        if(c==3)
        {
            break;
        }

    }
    
    return 0;
}
