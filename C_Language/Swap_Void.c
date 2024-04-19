#include <stdio.h>
void swap(int a, int b);

int main()
{
    printf("Hello World");
    int a=10;
    int b=20;
    swap(a,b);

    return 0;
}
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    
    printf(" The Swap Value Is A=%d b=%d ",a,b);
    
}