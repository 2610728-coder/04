#include <stdio.h>

int main(int argc, char *argv[]){
    int sec, m, s;

    printf("input the second :");
    scanf("%d", &sec);

    m = sec / 60;
    s = sec % 60;

    printf("the time is %d : %d\n", m, s);
        
    return 0;
}