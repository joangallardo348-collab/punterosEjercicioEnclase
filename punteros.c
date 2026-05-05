#include <stdio.h>

int main (void){
    int valor = 10;
    int *puntero = &valor;
    printf("La direccion de memoria es: %p\n", puntero);
    return (0);
}