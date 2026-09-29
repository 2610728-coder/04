#include <stdio.h>

int main(int argc, char *argv[]){
    int sec, h, m, s;

    printf("input the second :");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;

    printf("the time for %d second is %d : %d : %d", sec, h, m, s);
        
    return 0;
}