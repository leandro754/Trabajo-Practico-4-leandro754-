// comienzo del programa -TP4 punto 11
// Ingresar la fecha de nacimiento de una persona con en el formato dd, mm y aaaa. Mostrar por pantalla la edad.
#include <stdio.h> //uso librerias necesarias para este ejercicio en este caso la libreria time la utilizamos para poder sacar los datos del tiempo del a computadora de la fecha de hoy
#include <stdlib.h>
#include <time.h>

int main () { // ponemos la funcion principal int main

    int dia,mes,year,diahoy,meshoy,yearhoy,edad; //creamos todas las variables que vamos a necesitas

     printf("Ingrese su fecha de nacimiento en formato dd/mm/aaaa\n"); //le pedimos al usuario que ingrese su fecha de nacimiento en el fomato correspondiente

     scanf ("%d/%d/%d",&dia,&mes,&year); //verificamos los datos que ingresa el usuario y los guardamos en las variables dia,mes,year

     time_t fechahoy = time(NULL); //estas funciones nos permiten sacar la fecha del dia de hoy

     char * string_now = ctime(&fechahoy); //con esta podemos sacar de la cadena de texto de ctime los datos de la fecha de hoy en texto

     struct tm * fechapc = localtime(&fechahoy);; //con esto podemos estructurar los datos de la manera que necesitamos y usando el tiempo local y guardarlo en la direccion de fechahoy

     diahoy = fechapc->tm_mday; //esto nos permite sacar el dato del dia que hay en la fecha de la computadora,lo mismo con el mes y el year

     meshoy = fechapc->tm_mon+1; //en este caso se suma uno porque comienza a contar desde 0 entonces para darnos el mes exacto necesitamos sumarle 1

     yearhoy = fechapc->tm_year+1900; //en este caso la libreria cuenta desde 1900 en adelante por lo que para un calculo exacto le sumamos 1900

     edad = yearhoy - year; //realizamos el calculo correspondiente de la edad

     if (meshoy > mes || (meshoy == mes && diahoy >= dia)) { //verificamos si el usuario ya cumplio años con una de estas 2 condiciones 

         printf("Tu edad es de: %d years, feliz cumple atrasado \n", edad); //en los 2 casos mostramos la edad correspondiente

    } else { //si no se verifica la condicion de arriba significa que no cumplio años todavia

        edad = edad-1;

        printf("Tu edad es de: %d years, no cumpliste todavia \n", edad);
    }
    return 0; //return 0 es necesario en todos los programas

}
