// comienzo del programa -TP4 punto 13
// Ingresar tres números, ordenarlos en forma ascendente y presentarlos por pantalla. En caso de ser iguales imprimir un mensaje que diga " Son Iguales".
#include <stdio.h>
#include <stdlib.h>

int main(){ // ponemos la funcion principal int main
int a, b, c; //creamos las variables a,b,c 
    printf ("Ingrese el primer numero entero:"); //usamos la funcion printf para decir al usuario lo que tiene que ingresar
    scanf ("%d", &a); //scanf detecta que numeros ingresa el usuario y %d detecta si es un numero y lo guarda en la variable &a

    printf ("Ingrese el segundo numero entero:");
    scanf ("%d", &b);

    printf ("Ingrese el tercer numero entero:");
    scanf ("%d", &c);

    if (a == b && b == c) //primer condicion para saber si son iguales
    {

    printf ("son iguales"); //muestra el mensaje en caso de que los valores sean iguales

    } else { //empieza la primera secuencia

    if (a > b){ //primera condicion de la primera secuencia 
     

    if (a > c){ //segunda condicion de la primera secuencia
    
    
    if (b > c){ //tercera condicion de la primera secuencia

    printf ("numeros ordenados %d-%d-%d",c,b,a); //primer orden de numeros

    } else { // else de la tercera condicion de la primera secuencia

    printf ("numeros ordenados %d-%d-%d",b,c,a); //segundo orden de numeros

    }

    } else { // else de la segunda condicion de la primera secuencia

    printf ("numeros ordenados %d-%d-%d",b,a,c); //tercer orden de numeros

    }

    } else { //else de la primera condicion de la primera secuencia

    if (b > c){ //primera condicion de la segunda secuencia 

    if (a > c){ //segunda condicion de la segunda secuencia if dentro de if

    printf ("numeros ordenados %d-%d-%d",c,a,b); //cuarto orden de numeros

    } else { //else de la segunda condicion de la segunda secuencia osea el if dentro de if

    printf ("numeros ordenados %d-%d-%d",a,c,b); //quinto orden de numeros

    }

    } else { //else de la primera condicion de la segunda secuencia

    printf ("numeros ordenados %d-%d-%d",a,b,c); //sexto orden de numeros

    }

    }

    }
    
return 0; //return 0 es necesario en todos los programas
}