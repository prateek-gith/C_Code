#include <stdio.h>

struct detail
{
    char n[20];
    char id[10];
};

int main()
{
    printf("Hello World\n");
    int n,a,b;
    
    printf("Enter How Many Student : ");
    scanf("%d",&n);
    
    struct detail e[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter The %d Student Name : ",i+1);
        scanf("%s",e[i].n);
        printf("Enter The %d Stuent ID : ",i+1);
        scanf("%s",e[i].id);
        printf("\n");
    }
    
    for(int i=0;i<n;i++)
    {
        printf("The %d Student Name : %s \n",i+1,e[i].n);
        //scanf("%s",e[i].n);
        printf("The %d Stuent ID : %s \n",i+1,e[i].id);
        //scanf("%s",e[i].id);
        printf("\n");
    }
    
    return 0;
}
