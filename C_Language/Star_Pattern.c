#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
    int i,j;
    int a=0;
    
    for(i=0;i<5;i++)
    {
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
        
        for(j=0;j<5;j++)
        {
            if(j==0 || i==0 || i==4 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
