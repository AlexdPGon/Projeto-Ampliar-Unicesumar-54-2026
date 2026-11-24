#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int i, j;

    i = 0;
    j = 0;

    printf("i = %d\n", i++);
    printf("j = %d\n", ++j);

    printf("i = %d\n", i);
    printf("j = %d\n", j);


    return 0;
}