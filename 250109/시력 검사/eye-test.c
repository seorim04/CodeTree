#include <stdio.h>

int main() {
    // Please write your code here.
    double left,right;
    scanf("%lf\n%lf", &left,&right);

    if(left>=1.0 && right>=1.0)
    {
        printf("High");
    }
    else if(left>=0.5 && right>=0.5)
    {
        printf("Middle");
    }
    else 
    {
        printf("Low");
    }
    return 0;
}