#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello World\n");
    
    char a[20];
    int i,j;
    int vou=0,cou=0;
    
    printf("Enter The string : ");
    scanf("%s",a);
    
    int b;
    b=strlen(a);
    
    for(i=0;i<b;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
            a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
            {
                vou++;
            }
        else
        {
            cou++;
        }
    }
    
    printf("Vou = %d\n",vou);
    printf("Con = %d",cou);
    
    return 0;
}
