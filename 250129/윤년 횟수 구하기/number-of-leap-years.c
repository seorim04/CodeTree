#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int yun=0;

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            yun++;
        }
    }
    printf("%d",yun);
    return 0;
}