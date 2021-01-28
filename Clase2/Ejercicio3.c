#include <stdio.h>
// Referenciación: Es la obtención de la direccion de una variable
int main() {
    
    int value=10;
    int *ptr_1, *ptr_2;
    ptr_1= &value; //dirección de memoria de apuntador
    ptr_2=ptr_1; //para asignar la dirección de memoria
    
    printf("La direccion de memoria de ptr_2= %p", ptr_2);
    return 0;
}