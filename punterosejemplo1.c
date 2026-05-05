#include <stdio.h>
int main(int argc, char const *argv[]){

    int num = 15, a;
    int *x;

    x = &num; //x se le asigna la direccion de num
    a = *x;   // a se le asigna el valor de x
    printf("%p %d\n", x, a);


    char letra = 'a',c;
    char *ptr;
    ptr = &letra;
    c = *ptr;
    printf("%p %c\n", ptr, c);

    float decimal = 3.14, dec;
    float *ptrf;
    ptrf = &decimal;
    dec = *ptrf;
    printf("%p %f", ptr, dec);

    return(0);
}