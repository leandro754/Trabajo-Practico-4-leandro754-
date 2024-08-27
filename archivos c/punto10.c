// comienzo del programa -TP4 punto 10
// Ingresar tres valores positivos, indicar si son lados de un triángulo rectángulo. Presentar por pantalla el mensaje correspondiente.

#include <stdio.h> //incluimos las librerias necesarias para utilizar la funcion pow que sirve para elevar al cuadrado una expresion
#include <math.h>

int main() { // ponemos la funcion principal int main
    int lado1, lado2, lado3; //creamoos las variales de cada lado que va a ingresar el usuario

    printf("Ingrese el primer lado: "); //le pedimos al usuario que ingrese cada lado correspondiente y luego que guarde la variable
    scanf("%d", &lado1);

    printf("Ingrese el segundo lado: ");
    scanf("%d", &lado2);

    printf("Ingrese el tercer lado: ");
    scanf("%d", &lado3);

    // realizamos el calculo para verificar si alguno de los lados es la hipotenusa con || 
    if (pow(lado1, 2) == pow(lado2, 2) + pow(lado3, 2) ||
        pow(lado2, 2) == pow(lado1, 2) + pow(lado3, 2) ||
        pow(lado3, 2) == pow(lado1, 2) + pow(lado2, 2)) {
        printf("Son lados de un triangulo rectangulo"); //mostramos el mensaje que dice si son lados de un triangulo rectangulo o no
    } else {
        printf("No son lados de un triangulo rectangulo");
    }

    return 0; //return 0 es necesario en todos los programas
}