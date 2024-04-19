#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    printf("Sree Ram\n");
    struct node *newnode,*newnode2,*temp,*temp2;
    struct node *head=NULL;
    int c;
    int i=0;
    int pos;
    
    while(1)
    {
        printf("Press 1 For Fill The Data\n");
        printf("Press 2 For Print The Data\n");
        printf("Press 3 For Exit The Data\n");
        printf("Press 4 For Other Deatil  : ");
        scanf("%d",&c);
        if(c==1)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            
            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
        }
        else if(c==2)
        {
            temp=head;
            if(head==NULL)
            {
                printf("Null");
            }
            else
            {
                while(temp!=NULL)
                {
                    printf("%d\n",temp->data);
                    temp=temp->next;
                }
            }
        }
        else if(c==3)
        {
            exit(0);
        }
        else
        {
            break;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
        
    while(1)
    {
        int ch;
        printf("\nPres 1 for Insert Begining\n");
        printf("Pres 2 for Insert End\n");
        printf("Pres 3 for Insert Position\n");
        printf("Pres 4 for Dispaly\n");
        printf("Pres 5 for Dispaly Length \n");
        printf("Pres 6 For Exit : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            temp=head;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            head=newnode;
            newnode->next=temp;
            i++;
        }
        
        else if(ch==2)
        {
            temp=head;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            i++;
        }
        else if(ch==5)
        {
            printf("%d",i);
            
        }
        
       else if(ch==3)
        {
            printf("Enter Position : ");
            scanf("%d",&pos);
            if(pos>i)
            {
                printf("Wrong Position\n");
            }
            else
            {
                int t;
                temp=head;
                newnode=(struct node*)malloc(sizeof(struct node));
                printf("Enter The Data : ");
                scanf("%d",&newnode->data);
                for(t=1;t<pos;t++)
                {
                    temp=temp->next;
                }
                temp2=temp;
                temp=temp->next;
                temp2->next=newnode;
                temp2=newnode;
                temp2->next=temp;
                i++;
            }
        }
         else if(ch==4)
        {
            temp=head;
            if(head==NULL)
            {
                printf("Null");
            }
            else
            {
                while(temp!=NULL)
                {
                    printf("%d\n",temp->data);
                    temp=temp->next;
                }
            }
        }
        else
        {
            break;
        }
    }
    
    while(1)
    {
        int c3;
        printf("\nPress 1 Delete From Begining\n");
        printf("Press 2 Delete From END\n");
        printf("Press 3 Delete From Any Position\n");
        printf("Press 4 DISPALY\n");
        printf("Press 5 EXIT : ");
        scanf("%d",&c3);
        
        if(c3==1)
        {
            temp=head;
            head=head->next;
            free(temp);
        }
        
        else if(c3==2)
        {
            temp=head;
            temp2=head;
            while(temp->next!=NULL)
            {
                temp2=temp;
                temp=temp->next;
            }
            temp2->next=NULL;
            free(temp);
        }
        else if(c3==3)
        {
            int k=1;
            printf("Enter The Position : ");
            scanf("%d",&pos);
            temp=head;
            while(k<pos-1)
            {
                temp=temp->next;
                k++;
            }
            temp2=temp;
            temp=temp->next;
            temp2->next=temp->next;
            free(temp);
        }
        
        
        else if(c3==4)
        {
            temp=head;
            if(head==NULL)
            {
                printf("Null");
            }
            else
            {
                while(temp!=NULL)
                {
                    printf("%d\n",temp->data);
                    temp=temp->next;
                }
            }
        }
        
        else
        {
            exit(0);
        }
    }
    
    return 0;
}
