#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    if(n==2 || n==8)
    {
        printf("28");
    }
    else if(n%2==0)
    {
        printf("30");
    }

    else
    {
        printf("31");
    }
    return 0;
}