#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d", &a,&b);

    // printf("%.22f", (double)a/b); <-문제를 이해하지 못한 오답
    printf("%d.", a/b);
    for(int i=0; i<20; i++)
    {
        a=(a-(b*(a/b)))*10;
        printf("%d",a/b);   
    }

    return 0;
}