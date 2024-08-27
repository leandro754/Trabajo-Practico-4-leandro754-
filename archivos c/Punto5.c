// comienzo del programa -TP4 punto 5
// Convertir temperatura en grados Fahrenheit a grados centígrados. Presentar por pantalla ambos valores con sus unidades.
#include <stdio.h> //incluimos las librerias de stdio (standart imput output)


int main () { // ponemos la funcion principal int main

float C, F; // creamos las variable C de grados centigrado y F de grado Fharenheit

     printf ("ingrese la temperatura en grados Fharenheit: "); // mostramos el mensaje para que ingrese el usuario los grados Fharenheit
     scanf ("%f", &F); //con scanf detectamos que valor ingresa el usuario y la guardamos en la variable F

     C= 5.0/9.0 * (F-32);

    printf ("la temperatura en grados Fharenheit es: %.1fC°\n",F); //mostramos los valores de cada variable osea los grados centigrados y fharenheit

    printf ("la medida en grados Centigrado es: %.1fF°\n",C);

return 0; //return 0 es necesario en todos los programas

}