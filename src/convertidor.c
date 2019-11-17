#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* itoa( int value, char* result, int base ) {
	if (base < 2 || base > 16) {
		*result = 0; return result;
	}

	char* out = result;
	int tmp = value;

	do {
		*out = "0123456789abcdef"[abs(tmp % base)];
		++out;
		tmp /= base;
	} while (tmp);

	return result;

}

int main() {
    // El número que el usuario va a ingresar
    unsigned int decimal = 0;

    // Una cadena de máximo 63 bits, o sea longitud 63
    char cadena[63];

    // La base que el usuario ingresa
    int base = 0;

    printf("Ingresa un numero decimal:\n");
    scanf("%u", &decimal);

    printf("Ingresa la base [2 al 16]:\n");
    scanf("%d", &base);

    itoa(decimal, cadena, base);
    printf("El numero en base %d es: %s\n", base, cadena);
    return 0;
}
