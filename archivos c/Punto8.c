// comienzo del programa -TP4 punto 8
// Dado el precio de un producto indicar, por pantalla, los impuestos que debe pagar. IVA 21%, Ingresos Brutos 2.5% e Impuesto Municipal 1.5%.
#include <math.h>
#include <stdio.h>

int main () { // ponemos la funcion principal int main
    float Precio, IVA, IB, IM, Total; //creamos las variables necesarias para cada impuesto y para el precio y el total

    printf ("Ingrese el valor del producto:"); //pedimos al usuario el valor del producto
    scanf ("%f", &Precio); //guardamos el valor ingresado en la variable precio

    IVA= Precio * 0.21; //realizamos los calculos de cada impuesto correspondiente

    IB= Precio * 0.025;

    IM= Precio * 0.015;

    Total= Precio + IVA + IB + IM; //calculamos el precio total sumando los impuestos

    printf ("total de impuestos a pagar:\n"); //mostramos el total de impuesto a pagar, ademas de cuanto se paga de cada impuesto

    printf ("IVA=$%.1f \n",IVA);

    printf ("Ingresos brutos=$%.1f \n",IB);

    printf ("Impuesto Municipal=$%.1f \n",IM);

    printf ("El precio final es de=$%.1f \n",Total);

    return 0; //return 0 es necesario en todos los programas







}
