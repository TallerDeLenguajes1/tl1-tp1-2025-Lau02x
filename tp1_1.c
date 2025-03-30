#include <stdio.h>
int main()
{
    int numero = 5;
    int *puntero;
    puntero=&numero;

    printf("Hola mundo!");
    printf(" \n Contenido del puntero: %p", puntero);
    printf(" \n Direccion de memoria almacenada del puntero: %p", puntero);
    printf(" \n Direccion de memoria de la variable: %p", &numero);
    printf(" \n tamanio de memoria de la variable: %d", sizeof(numero));
    

}
