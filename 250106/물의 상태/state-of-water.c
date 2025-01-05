#include <stdio.h>

int main() {
    // Please write your code here.
    int w;
    scanf("%d", &w);

    if(w<0)
    {
        printf("ice");
    }
    else if(w>=100)
    {
        printf("vapor");
    }
    else
    {
        printf("water");
    }
    return 0;
}