#include <stdio.h>

int main()
{
    printf("Shree Ram\n\n");
    
    int a[5]={11,12,13,5,6};
    int i,j;
    int k;
    
    for(i=1;i<5;i++)
    {
        k=a[i];
        j=i-1;
        
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
        
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
