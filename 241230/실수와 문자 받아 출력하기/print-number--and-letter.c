#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    double a,b;
    scanf("%c", &c);
    scanf("%lf %lf", &a,&b);
    printf("%c\n",c);
    printf("%.2lf\n%.2lf",a,b);

    return 0;
}