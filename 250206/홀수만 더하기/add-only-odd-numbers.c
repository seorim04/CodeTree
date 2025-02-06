#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int sum=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d", &a);
        if(a%2!=0 && a%3==0)
            sum+=a;
    }
    printf("%d",sum);
    return 0;

}