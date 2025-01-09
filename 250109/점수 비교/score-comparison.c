#include <stdio.h>

int main() {
    // Please write your code here.
    int aMath,aEng,bMath,bEng;
    scanf("%d %d\n",&aMath,&aEng);
    scanf("%d %d",&bMath,&bEng);

    if(aMath>bMath && aEng>bEng)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}