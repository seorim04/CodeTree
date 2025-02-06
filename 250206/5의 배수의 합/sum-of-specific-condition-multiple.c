#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d", &a, &b);
    int sum=0;
    
    if(a>b)
    {
        for(int i=b; i<=a; i++)
        {
            if(i%5==0)
            sum+=i;
        }
    }
    else if(a<b)
    {
        for(int i=a; i<=b; i++)
        {
            if(i%5==0)
            sum+=i;
        }

    }
    else if(a==b)
    {
            if(a%5==0)
            sum+=a;
    
    }

    printf("%d", sum);
    return 0;
}