#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertidor(int numero, int base, char mensaje[]);

int main()
{
    // El número que el usuario va a ingresar

    int decimal, base;
    printf("Bienvenido al convertidor de sistema de numeracion \n");
    printf("Ingresa un numero en base 10:\n");
    scanf("%d", &decimal);
    printf("Ingresa la base a convertir el numero:\n");
    scanf("%d", &base);
        convertidor(decimal,base,"El numero es: ");
    return 0;
}

void convertidor(int numero, int base, char mensaje[])
{
    if (numero < 0 || base < 2 || base > 16)
    {
        printf("No conviertes numero negativo");
    }
    else
    {
        char arrnumconvertido[32];
        char arrHexadecimal[16] = "0123456789ABCDEF";
        int contador = 0;
        while (numero > 0)
        {
            int residuo = numero % base;
            arrnumconvertido[contador++] = arrHexadecimal[residuo];
            numero = numero / base;
        }
        printf("\n %s", mensaje);
        for (int j = contador - 1; j >= 0; j--)
        {
            printf("%c", arrnumconvertido[j]);
        }
        printf("\n");
        }
}
