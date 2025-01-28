#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int i=1; 
    scanf("%d" ,&n);

    for(i=1; i<=n; i++)
    {
        //3의 배수일 때 
        if(i%3==0)
            printf("0 ");
        //숫자에 3,6,9가 들어갈 때
        else if(i%10==3 || i%10==6 || i%10==9)
        {
            printf("0 ");
        }
        else if(i/10==3 || i/10==6 || i/10==9)
        {
            printf("0 ");
        }
        else
            printf("%d ",i);
    }
    return 0;
}