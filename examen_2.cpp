#include <iostream>

void suma(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

void resta(int *a, int *b, int *resultado) {
    *resultado = *a - *b;
}

void multiplicacion(int *a, int *b, int *resultado) {
    *resultado = 0;
    int contador = 0;
    while (contador < *b) {
        *resultado += *a;
        contador++;
    }
}

void division(int *a, int *b, int *resultado) {
    *resultado = 0;
    int acumulador = *a;
    while (acumulador >= *b) {
        acumulador -= *b;
        (*resultado)++;
    }
}

int main() {
    int num1, num2;
    int resultado;

    num1 = 10;
    num2 = 5;
    suma(&num1, &num2, &resultado);
    std::cout << "Suma: " << num1 << " + " << num2 << " = " << resultado << std::endl;

    num1 = 10;
    num2 = 5;
    resta(&num1, &num2, &resultado);
    std::cout << "Resta: " << num1 << " - " << num2 << " = " << resultado << std::endl;

    num1 = 4;
    num2 = 3;
    multiplicacion(&num1, &num2, &resultado);
    std::cout << "Multiplicación: " << num1 << " * " << num2 << " = " << resultado << std::endl;

    num1 = 10;
    num2 = 2;
    division(&num1, &num2, &resultado);
    std::cout << "División: " << num1 << " / " << num2 << " = " << resultado << std::endl;

    return 0;
}
