#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for(int i=n; i<=n*5; i+=n)
    {
        printf("%d ",i);
    }
    return 0;
}