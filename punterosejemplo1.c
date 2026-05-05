#include <stdio.h>
int main(int argc, char const *argv[]){

    int num = 15, a;
    int *x;

    x = &num;
    printf("%p", x);

    return(0);
}