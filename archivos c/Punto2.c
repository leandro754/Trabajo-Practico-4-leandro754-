// comienzo del programa -TP4 punto 2
// Leer dos números enteros presentar por pantalla el promedio de ellos
#include <stdio.h> //incluimos las librerias de stdio (standart imput output)

int main() { //creamos la funcion main
    int a, b, Promedio; //creamos las variables a,b y promedio

    a = 25; //asignamos el valor a la variable a y b
    b = 50; 
    Promedio = (a+b)/2; //asignamos a la variable promedio que va a ser la suma de a y b divido en 2

    printf ("nuestros numeros a promediar son: %d y %d\n ", a,b); // con este printf mostramos los numero a promedias y con la /n hacemos el salto de linea
    
    printf ("nuestro promedio de los 2 numeros es: %d\n ", Promedio); // con este prinft mostramos el promedio de los 2 numeros

    return 0; //return 0 se pone siempre al final de cada programa
}
