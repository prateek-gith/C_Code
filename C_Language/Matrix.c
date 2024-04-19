#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
    int mat[10][10];
    int r,c;
    
    printf("Enter The Row : ");
    scanf("%d",&r);
    
    printf("Enter The Column : ");
    scanf("%d",&c);
    
    printf("Enter The Matrix \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter The Value %d Row & %d Column : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("\nPrinting The Matrix : \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf(" %d\t",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
