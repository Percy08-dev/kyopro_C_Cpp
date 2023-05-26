#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define HUGE 1.0e300

int main(void){
    double x;
    x = HUGE;
    printf("%d", x == HUGE);
}