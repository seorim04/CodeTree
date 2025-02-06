#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d", &a,&b);
    int sum=0;
    int count=0;

    for(int i=a; i<=b; i++)
    {
        if(i%5==0 || i%7==0)
        {
            sum+=i;
            count++;
        }

    }
    printf("%d %.1lf",sum,(float)sum/count);
    return 0;
}