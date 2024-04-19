#include <stdio.h>

void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    
    printf(" After Swap The Value Is a=%d  b=%d",a,b);
}
int main()
{
    printf("Hello World\n");
    
    int a,b;
    //int *t
    
    a=4,b=5;
    
    printf("Before Swaping The Value Is A=%d, B=%d\n",a,b);
    swap(a,b);
    //printf("After Swaping The Value Is %d " , swap(&a,&b));
    
    return 0;
}
