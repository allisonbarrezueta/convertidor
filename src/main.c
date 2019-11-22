#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/main.h"

int main()
{
    // El número que el usuario va a ingresar

    int decimal;
    printf("Bienvenido al convertidor de sistema de numeracion ");
    printf("Ingresa un numero en base 10:\n");
    scanf("%d", &decimal);
    /*if (decimal < 0)
    {
        printf("No convierte numeros negativo");
    }
    else
    {
        binario(decimal);
        printf("\n");
        octal(decimal);
        printf("\n");
        hexadecimal(decimal);
        printf("\n");
    }*/
        binario(decimal);
        printf("\n");
        octal(decimal);
        printf("\n");
        hexadecimal(decimal);
        printf("\n");
    

    return 0;
}

int binario(int numero)
{
    if (numero < 0)
    {
        printf("No conviertes numero negativo");
    }
    else
    {
        int arrBinario[32];
        int contador = 0;
        while (numero > 0)
        {
            int valor = numero % 2;
            arrBinario[contador++] = valor;
            numero = numero / 2;
        }
        printf("\nEl numero binario es: ");
        for (int j = contador - 1; j >= 0; j--)
        {
            printf("%d", arrBinario[j]);
        }
    }
}

int octal(int numero)
{
    if (numero < 0)
    {
        printf("No convierte numeros negativo");
    }
    else
    {
        int arrOctal[16];
        int contador = 0;
        while (numero > 0)
        {
            int valor = numero % 8;
            arrOctal[contador++] = valor;
            numero = numero / 8;
        }
        printf("\nEl numero octal es: ");
        for (int j = contador - 1; j >= 0; j--)
        {
            printf("%d", arrOctal[j]);
        }
    }
}

int hexadecimal(int numero)
{

    //Vector con los valores en Hexadecimal
    char Hexadecimal[16] = "0123456789ABCDEF";
    
    // Contador
    int contador = 0;
    //Vector para resultados
    char arrDigHexa[10];

    while (numero > 0)
    {
        int residuo = numero % 16;

        arrDigHexa[contador++] = Hexadecimal[residuo];
        numero = numero / 16;
    }
    printf("\nEl numero hexadecimal es: ");
    for (int j = contador - 1; j >= 0; j--)
    {
        printf("%c", arrDigHexa[j]);
    }
}
