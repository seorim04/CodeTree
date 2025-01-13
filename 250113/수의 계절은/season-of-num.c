#include <stdio.h>

int main() {
    // Please write your code here.
    int month;
    scanf("%d", &month);

    if(month>=3 && month<=5)
    {
        printf("Spring");
    }
    else if(month>=6 && month<=8)
    {
        printf("Summer");
    }
    else if(month>=9 && month<=11)
    {
        printf("Fall");
    }
    else
    {
        printf("Winter");
    }
    return 0;
}