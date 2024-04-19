#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pre;
    struct node *next;
};

int main()
{
    printf("!! SHREE RAM !!\n\n");
    
    // initilization of Node
    struct node *newnode,*temp,*temp2,*tail;
    struct node *head=NULL;
    int i=0;
    int c;
    int cc;
    int ccc;
    int pos;

    // Making Node 
    while(1)
    {
        printf("\nPress 1 For Enter Data\n");
        printf("Press 2 For Display\n");
        printf("Press 3 For EXIT : ");
        scanf("%d",&c);
        
        if(c==1)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            newnode->pre=NULL;
            newnode->next=NULL;
            
            // When First Node Are Entered
            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
                tail=newnode;
                i++;
            }
            // After Fist Node
            else
            {
                temp->next=newnode;
                newnode->pre=temp;
                temp=newnode;
                tail=newnode;
                i++;
            }
        }
        
        // For Display The Data
        if(c==2)
        {
            temp=head;
            while(temp!=NULL)
            {
                printf("%d",temp->data);
                printf(" ");
                temp=temp->next;
            }
            printf("\n");
        }
        
        // From Exit Current loop
        if(c==3)
        {
            break;
        }
    }
    
    while(1)
    {
        printf("\nPress 1 For Begning Node\n");
        printf("Press 2 For last Node\n");
        printf("Press 3 For Specific Position\n");
        printf("Press 4 For Display\n");
        printf("Press 5 For Display Length\n");
        printf("Press 6 For EXIT : ");
        scanf("%d",&cc);
        
        // For Biginig Insert 
        if(cc==1)
        {
            temp=head;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            newnode->pre=NULL;
            head=newnode;
            temp->pre=newnode;
            newnode->next=temp;
            temp=newnode;
            i++;
        }
        
        // From Last Insert
        if(cc==2)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            tail->next=newnode;
            newnode->pre=tail;
            tail=newnode;
            i++;
        }
        
        // for Any Position Insert
        if(cc==3)
        {
            int k=1;
            printf("Enter Position : ");
            scanf("%d",&pos);
            temp=head;
            while(k!=pos-1)
            {
                temp=temp->next;
                k++;
            }
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter The Data : ");
            scanf("%d",&newnode->data);
            newnode->next=temp->next;
            newnode->pre=temp;
            temp->next=newnode;
            temp->next->pre=newnode;
            i++;
        }
      
        // For Printing
        if(cc==4)
        {
            printf("\n");
            temp=head;
            while(temp!=NULL)
            {
                printf("%d",temp->data);
                printf(" ");
                temp=temp->next;
            }
            printf("\n");
        }
        
        // for printing the Length of list`
        if(cc==5)
        {
            printf("%d",i);
        }
        
        // For Exit Current Loop
        if(cc==6)
        {
            break;
        }
    }
    
    
    // For Delete Node
    while(1)
    {
        printf("\nPress 1 For Delete Node From Begning\n");
        printf("Press 2 For Delete Node From END\n");
        printf("Press 3 For Delete Node From Any Position\n");
        printf("Press 4 For Display\n");
        printf("Press 5 For EXIT : ");
        scanf("%d",&ccc);
        
        // Delete First Node
        if(ccc==1)
        {
            temp=head;
            head=temp->next;
            temp->next->pre=NULL;
            free(temp);
            i--;
        }
        
        // Delete Last Node
        if(ccc==2)
        {
            temp=tail;
            tail=temp->pre;
            tail->next=NULL;
            temp->pre=NULL;
            free(temp);
            i--;
        }
        
        // Delete From Any Position
        if(ccc==3)
        {
            temp=head;
            int k=1;
            printf("\nEnter The Position : ");
            scanf("%d",&pos);
            while(k!=pos)
            {
                temp=temp->next;
                k++;
            }
            
            temp2=temp;
            temp->pre->next=temp->next;
            temp->next->pre=temp->pre;
            free(temp2);
            i--;
        }
        
        // For Display
        if(ccc==4)
        {
            temp=head;
            printf("\n");
            while(temp!=NULL)
            {
                printf("%d",temp->data);
                printf(" ");
                temp=temp->next;
            }
            printf("\n");
        }
        
        // Exit From Programm
        if(ccc==5)
        {
            exit(0);
        }
    }
    
    return 0;
}
