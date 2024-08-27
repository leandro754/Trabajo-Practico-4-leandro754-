// comienzo del programa -TP4 punto 4
// Convertir una medida dada en metros a sus equivalentes en decímetros y centímetros.
#include <stdio.h> //incluimos las librerias de stdio (standart imput output)

int main () { // ponemos la funcion principal int main

int metros, decimetros, centimetros; // creamos las variables int metros, decimetros, centimetros

     printf ("ingrese una medida en metros: "); // mostramos el mensaje para que ingrese el usuario la medida en metros
     scanf ("%d", &metros); //con scanf detectamos que valor ingresa el usuario y la guardamos en la variable metros

     decimetros = metros*10; //decimos que la variable decimetro sera el valor de los metros por 10
     centimetros = metros*100; //decimos que la variable decimetro sera el valor de los metros por 100

    printf ("la medida en metros es: %dm\n",metros); //mostramos los valores de cada variable osea los metros,decimetros y centimetros

    printf ("la medida en decimetros es: %ddc\n",decimetros);

    printf ("la medida en centimetros es: %dcm\n",centimetros);


return 0; //return 0 es necesario en todos los programas

}