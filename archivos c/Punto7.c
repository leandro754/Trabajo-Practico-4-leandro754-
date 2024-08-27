// comienzo del programa -TP4 punto 7
// Ingresar el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área del círculo.
#include <math.h>
#include <stdio.h>

int main () { // ponemos la funcion principal int main

float Radio, Diametro, Perimetro, Area; // ponemos los valores de tipo float para poder mostrar decimales 

    printf ("ingrese el radio del circulo: "); //  se ingresa el valor del radio del circulo
    scanf ("%f", &Radio); //con scanf guardamos el valor que ingresa el usuario en la variable radio

    Perimetro = (2 * 3.1415) * Radio; //calculamos el perimetro,diametro y area del circulo

    Diametro = 2 * Radio;

    Area = 3.1415 * Radio;

    printf ("el perimetro del circulo es de: %.1f\n",Perimetro); //mostramos por pantalla cada valor correspondiente

    printf ("el diametro del circulo es de: %.1f\n",Diametro);

    printf ("el area del circulo es de: %.1f\n",Area);

return 0; //return 0 es necesario en todos los programas

}