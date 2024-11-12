#include <stdio.h>
#include "operaciones.h"

int main() {
    int n;

    // Solicita al usuario que ingrese un número
    printf("Introduce un número entero: ");
    while (scanf("%d", &n) != 1) {  // Validación: solo acepta enteros
        printf("Entrada no válida. Introduce un número entero: ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    // Determina si el número es positivo, negativo o neutro
    if (is_positive(n)) {
        printf("El número %d es positivo.\n", n);
    } else if (is_negative(n)) {
        printf("El número %d es negativo.\n", n);
    } else {
        printf("El número es neutro.\n");
    }

    return 0;
}
