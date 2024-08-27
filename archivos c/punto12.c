// comienzo del programa -TP4 punto 12
// Ingresar tres números enteros, determinar si están ordenados en forma ascendente o descendente, y si son consecutivos. Presentar por pantalla el mensaje correspondiente.
#include <stdio.h>
#include <stdlib.h>

int main() { //creamos la funcion main
    int a, b, c; //creamos las variables a,b,c 
    printf ("Ingrese el primer numero entero:"); //usamos la funcion printf para decir al usuario lo que tiene que ingresar
    scanf ("%d", &a); //scanf detecta que numeros ingresa el usuario y %d detecta si es un numero y lo guarda en la variable &a

    printf ("Ingrese el segundo numero entero:");
    scanf ("%d", &b);

    printf ("Ingrese el tercer numero entero:");
    scanf ("%d", &c);

    if ((a < b) && (b < c)) { //primera condicion para saber si los numeros estan ordenados de forma ascendente o descendente

        if ((b == (a + 1)) && (c == (b + 1))) { //primera condicion dentro de la primera secuencia

        printf ("son ascendentes y consecutivos\n");

        } else { //else de la primera secuencia

        printf ("son ascendentes y no consecutivos\n"); 

        } 

        } // finaliza primera secuencia

          else { //empieza segunda secuencia

       if ((a > b) && (b > c)) { //primera condicion de la segunda secuencia
        
       if ((b == (a - 1)) && (c == (b - 1))) { //segunda condicion dentro de la primera secuencia

        printf ("son descendentes y consecutivos\n");

       } else { // primer else de la segunda secuencia de la segunda condicion de la segunda secuencia

        printf ("son descendentes y no consecutivos"); 

       }

       } else { // segundo else de la segunda secuendia de la primera condicion de la segunda secuencia

        printf ("no son descendentes ni consecutivos\n");

       }

      } //finaliza segunda secuencia

    return 0; //return 0 es necesario en todos los programas

    }

     





