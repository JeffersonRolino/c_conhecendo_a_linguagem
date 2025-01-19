#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a = abs(3);
    int b = abs(-3);

    int c = abs(a * b);

    printf("%d", c);

    return 0;
}