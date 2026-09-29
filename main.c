#include <stdio.h>

int main(int argc, char *argv[]){
    int year, leap;

    printf("input the year :");
    scanf("%d", &year);

    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("is the year %d the leap year? :%d\n", year, leap);
        
    return 0;
}