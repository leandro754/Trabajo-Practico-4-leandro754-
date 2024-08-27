// comienzo del programa -TP4 punto 3
// Ingresar dos números enteros y presentar por pantalla la media geométrica
#include <stdio.h> //incluimos las librerias de stdio (standart imput output)
#include <math.h> //incluimos la librearia math para usar funciones matematicas avanzadas

int main() { //creamos la funcion main
    int a, b, Media_geometrica; //creamos las variables a,b y Media_geometrica

    printf ("Ingrese el primer numero: "); //usamos la funcion printf para decir al usuario lo que tiene que ingresar (solo numeros positivos)
    scanf ("%d", &a); //scanf detecta que numeros ingresa el usuario y %d detecta si es un numero y lo guarda en la variable &a

    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &b);

    Media_geometrica = sqrt(a*b); //asignamos a la variable Media_geometrica que va a ser la raiz cuadrada del producto de los 2 numeros

    printf ("nuestra media geometrica de los 2 numeros es: %d\n ", Media_geometrica); // con este prinft mostramos la media geometrica de los 2 numeros

    return 0; //return 0 se pone siempre al final de cada programa
}
