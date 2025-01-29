#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int cnt=0;

    for(int i=0; i<10; i++)
    {
       scanf("%d",&n);
       if(n%2==1)
       {
        cnt++;
       }
    }
    printf("%d",cnt);
    return 0;
}