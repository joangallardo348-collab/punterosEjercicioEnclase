#include <stdio.h>
int main(int argc, char const *argv[]){

    int num = 15, a;
    int *x;

    x = &num; //x se le asigna la direccion de num
    a = *x;
    printf("%p %d\n", x, a);

    return(0);
}