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
    ptr=(int*)calloc(n,sizeof(int));
    
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
