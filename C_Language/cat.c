#include<stdio.h>
#include<conio.h>
#include<string.h>
void cat(char a[], char b[])
{
    int i=0,j=0;
    while(a[i]!='\0')
    {
        a++;
    }
    
    while(b[j]!='\0')
    {
        a[i]=b[j];
        b++;
        a++;
    }
    a[i]='\0';
}

int main()
{
    char a[20],b[20];

    printf("Enter The First String : ");
    scanf("%s",a);
    printf("Enter The Second String : ");
    scanf("%s",b);

    cat(a,b);

    printf("Catinate String Is : %s",a);
    return 0;
}