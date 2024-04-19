#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
    int mat1[10][10];
    int mat2[10][10];
    int mat3[10][10];
    int r,c;
    
    printf("Enter The Row : ");
    scanf("%d",&r);
    
    printf("Enter The Column : ");
    scanf("%d",&c);
    
    printf("Enter The First Matrix \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter The Value %d Row & %d Column : ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("Enter The second Matrix \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",mat1[i][j]);
            // scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Tranpose The Matrix \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mat2[j][i]=mat1[i][j];
        }
    }
    
    printf("\n _____Transpose Matrix Is_______  : \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
