#include <stdio.h>
#include <stdlib.h>

	int main() {
	float temp [7];
	int prom = 7; //Valor del promedio guardado en una variable pa
	char dias [7][10] = {"Lumes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"}; //Se define un array de cadenas de caracteres en el que declaramos cada día de la semana con un máximo de 10 caracteres oor palabra debido al caracter nulo 
	for (int fecha_imp = 0 ; fecha_imp <=7 ; fecha_imp++) { // requerimos de un for para poder insertar cada dia en un bucle (Usando numeros que representan posiciones  y luego traduciendo) en el que se nos muestre un dia le introducimos una temperatura en formato float lo gurarde y pase al siguiente.
	printf("%s\n",dias[fecha_imp]); //Imprimimos el valor de cada dia en cada vuelta para que se entienda dias[fecha_imp] = Lunes traducido de 1 segunda vuelta dias[fecha_imp = martes traducido de 2
	
	scanf("%f",&temp); // Pedir al usuario en cada dia del bucle que escriba la temperatura correspondiente ¿COMO LO ALMACENO?´
	} 
	return 0;
	}
