#include <stdio.h>

int main() {
    // Please write your code here.
    int a_fever,b_fever, c_fever;
    char ac,bc,cc;
    
    scanf("%c %d\n",&ac,&a_fever);
    scanf("%c %d\n",&bc,&b_fever);
    scanf("%c %d",&cc,&c_fever);

    if(a_fever>=37 && ac=='Y' || ac=='N')
    {
        if(b_fever>=37 && bc=='Y' || bc=='n')
        {
            if (c_fever>=37 && cc=='Y' || cc=='N')
                printf("E");
        }
        else if (c_fever>=37 && cc=='Y' || cc=='N')
        {
            printf("E");
        }
        else
        {
            printf("N");
        }
    }
    else
    {
        printf("N");
    }

    return 0;
}