#include <stdio.h>
int min(int a, int b, int c){
    if(a<b)
    {
        return (a<c)?a:c;
    }
    else 
    {  
        return (b<c)?b:c;
    }
}

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d", min(a,b,c));

    return 0;
}