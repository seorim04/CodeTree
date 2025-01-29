#include <stdio.h>

int main() {
    // Please write your code here.
    int day;
    int two=0,three=0,twelve=0;
    scanf("%d", &day);

    for(int i=1; i<day+1; i++)
    {
        if(i%12==0)
            twelve++;
        else if(i%3==0 )
            three++;
        else if(i%2==0)
            two++;
    }
    printf("%d %d %d",two,three,twelve);
    return 0;
}