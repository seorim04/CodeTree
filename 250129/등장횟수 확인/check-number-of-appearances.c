#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int sum=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &n);

        if(n%2==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
    
    return 0;
}