#include <stdio.h>

int main() {
    int a_fever, b_fever, c_fever;
    char ac, bc, cc;
    
    // 입력 받기
    scanf("%c %d\n", &ac, &a_fever);
    scanf("%c %d\n", &bc, &b_fever);
    scanf("%c %d", &cc, &c_fever);

    // 각 사람의 상태 검사
    if (a_fever >= 37 && ac == 'Y') {
        if (b_fever >= 37 && bc == 'Y') {
            printf("E");
        } else {
            if (c_fever >= 37 && cc == 'Y') {
                printf("E");
            } else {
                printf("N");
            }
        }
    } else {
        if (b_fever >= 37 && bc == 'Y') {
            if (c_fever >= 37 && cc == 'Y') {
                printf("E");
            } else {
                printf("N");
            }
        } else {
            printf("N");
        }
    }

    return 0;
}
