#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
@brief convierte números en base 10 a base del 2 al 16
@param número entero y en base 10
@param base número entero del 2 al 16
*/
void convertidor(int numero, int base);

int main() {
    int decimal; //Número entero base 10
    int base; // Base que desea que el número se convierta
    printf("\n\tBienvenido al convertidor de sistema de numeración \n\n");

    printf("Ingresa un número entero en base 10:\n");
    scanf("%d", &decimal);
    printf("Ingresa la base a convertir el numero:\n");
    scanf("%d", &base);

    if (decimal < 0 || base < 2 || base > 16){
      printf("No se conviertes numero negativo");
      return -1;
    }

    convertidor(decimal,base);

    return 0;
}

void convertidor(int numero, int base) {
  char arrnumconvertido[32]; //Arreglo de 32 espacios
  char arrHexadecimal[16] = "0123456789ABCDEF"; //Se usará dependiendo de la base escogida
  int contador = 0; //contador para ingresar numeros en arrnumconvertido

  while (numero > 0) {
    int residuo = numero % base; //Módulo de la base
    arrnumconvertido[contador++] = arrHexadecimal[residuo];
    numero = numero / base;
  }

  printf("\n El número en base %d es:  ", base);
  //Recorro arrnumconvertido de manera descendiente
  for (int j = contador - 1; j >= 0; j--) {
    printf("%c", arrnumconvertido[j]);
  }
  printf("\n");
}
