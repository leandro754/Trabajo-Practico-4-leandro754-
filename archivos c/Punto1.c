// comienzo del programa -TP4 punto 1 
// Ingresar tres números enteros, presentar por pantalla la suma de ellos.
#include <stdio.h> //incluimos las librerias de stdio (standart input output)

int main() { //creamos la funcion main
    int a, b, c, Suma; //creamos las variables a,b,c y suma
    printf ("Ingrese el primer numero: "); //usamos la funcion printf para decir al usuario lo que tiene que ingresar
    scanf ("%d", &a); //scanf detecta que numeros ingresa el usuario y %d detecta si es un numero y lo guarda en la variable &a
    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &b);
    printf ("Ingrese el tercer numero: ");
    scanf ("%d", &c);

    Suma = a + b + c; // aca declaramos que la funcion suma va a ser igual a a+b+c

    printf("La suma de a+b+c es: %d\n",Suma); //con este printf mostramos el mensaje de la suma y con %d\n mostramos el valor de suma y damos un salto de linea

    return 0; //return 0 se pone siempre al final de cada programa
}

