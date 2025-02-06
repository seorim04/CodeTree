#include <stdio.h>

int main() {
    // Please write your code here.
    int sum=0, count=0; 
    for(int i=0; i<10; i++)
    {
        int a;
        scanf("%d",&a);
        if(a>=0 && a<=200)
        {
            sum+=a;
            count++;
        }
    }
    printf("%d %.1lf",sum, (double)sum/count);
    return 0;
}