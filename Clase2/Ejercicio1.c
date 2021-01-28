#include <stdio.h>
// Referenciación: Es la obtención de la direccion de una variable
int main() {
    int dir_var=15;
    //printf("La dirección de dir_var es: %d\n", dir_var); cuando quiero ver el valor
    printf("La dirección de dir_var es: %p \n", &dir_var);
    //esta es para la dirección de memoria
    return 0;
}