#include <stdio.h>

int main() {
    // Please write your code here.
    int y;
    scanf("%d", &y);

    if(y%4==0)
    {
        if(y%100==0 && y%400!=0)
        {
            printf("false");
        }
        else
        {
            printf("true");
        }

    }
    else
    {
        printf("false");
    }
    return 0;
}