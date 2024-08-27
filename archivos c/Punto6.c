// comienzo del programa -TP4 punto 6
// Ingresar los lados de un rectángulo, presentar por pantalla su perímetro y su superficie.
#include <stdio.h> //incluimos las librerias de stdio (standart imput output)

int main () { // ponemos la funcion principal int main

float Altura, Base, Perimetro, Area; // creamos las variables Altura, Base, Perimetro y area

    printf ("ingrese la altura del rectangulo: "); //se ingresa la altura del rectangulo 
    scanf ("%f", &Altura); 

    printf ("ingrese el largo del rectangulo: "); //se ingresa la base del rectangulo
    scanf ("%f",  Base); 

    Perimetro = 2* Base + 2* Altura; //se calcula el perimetro del rectangulo usando la formula correspondiente y se guarda en la variable Perimetro

    Area = Base * Altura; // se calcula el area del rectangulo usando la formula correspondiente y se guarda en la variable Area

    printf ("el perimetro del rectangulo es de: %.1f\n",Perimetro); //mostramos en pantalla la variable de perimetro y area y luego hacemos un salto de linea y ademas ponemos que esta muestre hasta un decimal

    printf ("el area del rectangulo es de: %.1f\n",Area);

return 0; //return 0 es necesario en todos los programas

}