#include <stdio.h>

int main() {
    // Please write your code here.
    int threeSum=0,fiveSum=0;
    int n;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &n);
        if(n%3==0)
            threeSum++;
        if(n%5==0)
            fiveSum++;
    }
    printf("%d %d",threeSum,fiveSum);
    return 0;
}