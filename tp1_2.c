/*Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de
la variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre
ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la
variable b, y en el valor de b el valor de a
e) Dado dos parámetros de entrada, deberá devolverlos de forma
ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(a,b) //deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande
f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
por pantalla.
g) Al finalizar, debe subir todos los cambios al repositorio, usando los
siguientes comandos*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cuadrado(int num);
void cuadradoVoid(int num);
void direccionYcontenido(int num);
void Invertir(int *a,int *b);
void orden(int *a, int *b);

int main()
{

  
    int numero;
    int cuad;
     int a,b;
    printf("Prueba del cuadrado :");
    printf("\n Elegir un numero para encontrar su cuadrado : ");
    scanf("%d", &numero);
    cuad =cuadrado(numero);
    printf("\n El cuadrado de %d es:  %d \n ",numero,cuad);
    printf("\n Usando la Funcion Void de cuadrado: \n");
    cuadradoVoid(numero);
    printf("\n Elegir el primer numero (a) para invertirlo:");
    scanf("%d", &a);
    printf("\n Elegir el segundo numero (b) para invertirlo:");
    scanf("%d", &b);
    Invertir(&a,&b);
    printf("\n Valores luego de la funcion invertir: Valor de a: %d y valor de b: %d \n", a,b);
    
    printf("\n Elegir el primer numero (a) para ordenar:");
    scanf("%d", &a);
    printf("\n Elegir el segundo numero (b) para ordenar:");
    scanf("%d", &b);
    orden(&a,&b);
    printf("\n Valores luego de la funcion orden: valor de a: %d y el valor de b: %d \n",a,b);
    return 0;
}
int cuadrado(int num){
    int cuadrado;
    cuadrado = num *num;
    return cuadrado;
}
void cuadradoVoid(int num)
{
    int cuadrado;
    cuadrado = num * num;
    printf("\nEl cuadrado de %d es: %d \n",num,cuadrado);
}
void direccionYcontenido(int num)
{
    printf("\n la direccion de la variable es %p y su contenido es %d",&num , num);
}
void Invertir(int *a,int *b)
{
    int aux;
    aux=*b;
    *b=*a;
    *a=aux;
}
void orden(int *a, int *b)
{
    int aux;
    if(*b<*a)
    {
        aux=*b;
        *b=*a;
        *a=aux;
    }
}