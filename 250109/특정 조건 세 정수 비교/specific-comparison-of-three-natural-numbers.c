#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a <= b && a <= c)
    {
        printf("1 ");
    }
    else 
    {
        printf("0 ");
    }
    if(a==b && a==c && b==c)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    return 0;
}