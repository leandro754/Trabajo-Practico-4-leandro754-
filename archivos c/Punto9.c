// comienzo del programa -TP4 punto 9
// Ingresar dos puntos en el plano P1(x1, y1) y P2(x2, y2), estos corresponden, respectivamente, a los vértices inferior izquierdo y superior derecho de un rectángulo. Indicar el perímetro y la superficie del rectángulo.

#include <stdio.h> //incluimos las librerias necesarias en este caso math.h y stdlib.n para poder usar la funcion de valor absoluto
#include <math.h>
#include <stdlib.h>
int main () { // ponemos la funcion principal int main
    int X1,Y1,X2,Y2,Base,Altura,Perimetro,Area; //declaramos todas las variables que vamos a usar

// aqui hacemos que el usuario ingrese los valores de x e y de cada punto correspondiente
    printf ("ingrese el valor del x de su primer punto:");
    scanf ("%d",&X1);

    printf ("ingrese el valor del y de su primer punto:");
    scanf ("%d",&Y1);

    printf ("ingrese el valor del x de su segundo punto:");
    scanf ("%d",&X2);

    printf ("ingrese el valor del Y de su segundo punto:");
    scanf ("%d",&Y2);

    printf ("su primer punto es P1(%d,%d) \n",X1,Y1); //mostramos los puntos que el usuario ingreso con sus respectivos valores de x e y

    printf ("su segundo punto es P2(%d,%d) \n",X2,Y2);

// calculamos la base, la altura, el perimetro y el area del rectangulo usando la formula con valor absoluta
    Base = abs(X2 - X1);
    
    Altura = abs(Y2 - Y1);

    Perimetro = 2 * (Base + Altura);

    Area = Base * Altura;
//mostramos todos los datos en pantalla
    printf ("el perimetro del rectangulo es de %d y el area del rectangulo es de %d \n",Perimetro,Area);




return 0; //return 0 es necesario en todos los programas
}
