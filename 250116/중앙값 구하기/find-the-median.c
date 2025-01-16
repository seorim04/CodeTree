#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && b<c)
        printf("%d",b);
    if(b<a && a<c)
        printf("%d", a);
    if(b<c && c<a)
        printf("%d", c);
    return 0;
}