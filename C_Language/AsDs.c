#include <stdio.h>
void AsDs( int a[])
{
    char b;
    printf("\nEnter 'D' For Descending Order\nEnter 'A' For Ascending Order : ");
    printf("\nEnter Your Choice For Ascending & Descending : ");
    scanf("%s",&b);
    if(b=='D')
    //for Descending Order
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(a[j]<a[j+1])
                {
                    int k;
                    k=a[j];
                    a[j]=a[j+1];
                    a[j+1]=k;
                }
            }
        }
        printf("\n After Descending Order : ");
        for(int i=0;i<5;i++)
        {
            printf("%d",a[i]);
            printf(" ");
        }
    }
    //For Ascending Order
    if(b=='A')
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(a[j]>a[j+1])
                {
                    int k;
                    k=a[j];
                    a[j]=a[j+1];
                    a[j+1]=k;
                }
            }
        }
        printf("\nAfter Ascending Order : ");
        for(int i=0;i<5;i++)
        {
            printf("%d",a[i]);
            printf(" ");
        }
    }
}

int main()
{
    printf("NOTE : This Code Dos't Work Properly In V.S COde Why I Dont Know when we not Use Function");
    printf("Hello World\n");
    int a[5];
    char b;
    printf("\nEnter The Five Array\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter %d Array Element Number : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nPrintng Array\n");
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
    AsDs(a);
    return 0;
}
