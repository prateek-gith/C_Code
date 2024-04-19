/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sum_of_two(int b[])
{
    int s=0;
    for(int i=0;i<5;i++)
    {
        s=s+b[i];
    }
    printf("The Sum Is : %d",s);
}

int main()
{
    printf("Hello World\n");
    int a[10];
    for(int i=0;i<5;i++)
    {
        printf("Enter The Number  : ");
        scanf("%d",&a[i]);
    }
    sum_of_two(a);
    return 0;
}
