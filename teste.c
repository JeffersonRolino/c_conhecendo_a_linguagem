#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int segundos = time(0);
    srand(segundos);

    int n1 = rand();
    int n2 = rand();

    printf("%d %d", n1, n2);

    return 0;
}