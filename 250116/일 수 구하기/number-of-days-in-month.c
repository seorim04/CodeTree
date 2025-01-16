#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    if(n==2)
    {
        printf("28");
    }
    else if(n==4 ||n==6 || n==9 || n==11)
    {
        printf("30");
    }

    else if(n==8 || n==10 || n==12)
    {
        printf("31");
    }
    else 
    {
        printf("31");
    }
    return 0;
}