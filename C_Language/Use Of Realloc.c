#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World\n");
    
    int *ptr;
    int n,a,b;
    printf("Enter The Size Of Array : ");
    scanf("%d",&n);
    
    //ptr=(int*)malloc(n*sizeof(int));  
    //By The Help Of Malloc Memory Alloate//
    
    ptr=(int*)calloc(n,sizeof(int));   
    //By The Help Of Calloc Memry Allocate   it is like that ptr[n] //
    
    //For Enter The Value//
    for(int i=0;i<n;i++)
    {
        printf("Enter The %d Number : ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    //For Printing The Value//
    printf("\n");
    
    for(int i=0;i<n;i++)
    {
        printf("The Value Of %d Array Is  : %d  \n",i+1,ptr[i]);
    }
    
    printf("\n");
    
    //Memory Allocation Ke New Array size dena//
    printf("Enter The New size Of Array : ");
    scanf("%d",&n);
    
     ptr=(int*)realloc(ptr,n*sizeof(int));
     //new Memory Size For Change and Increase The size Of The same Pointer// 
    
    for(int i=0;i<n;i++)
    {
        printf("Enter The %d Number : ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    printf("\n");
    
    for(int i=0;i<n;i++)
    {
        printf("The Value Of %d Array Is  : %d  \n",i+1,ptr[i]);
    }
    
    free(ptr);
    
    return 0;
}
