#include <stdio.h>
#include <math.h>

float suma(float num1, float num2) {
    return num1 + num2;
}

float resta(float num1, float num2) {
    return num1 - num2;
}

float multiplicacion(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: División por cero\n");
        return 0;
    }
}

float seno(float num) {
    return sin(num);
}

float coseno(float num) {
    return cos(num);
}

float tangente(float num) {
    return tan(num);
}

int main() {
    int teclado, operacion;
    float num1, num2, resultado;

    printf("Menú\n");

    do {
        printf("1. Ingresar un número:\n");
        printf("2. Seleccionar Operación:\n");
        printf("3. Limpiar Ultimo\n");
        printf("4. Limpiar todo\n");
        printf("5. Salir\n");

        scanf("%d", &teclado);
        switch (teclado) {
            case 1:
                printf("Ingrese un número: ");
                scanf("%f", &num1);
                break;
            case 2:
                do {
                    printf("1. Suma\n");
                    printf("2. Resta\n");
                    printf("3. Multiplicación\n");
                    printf("4. División\n");
                    printf("5. Seno\n");
                    printf("6. Coseno\n");
                    printf("7. Tangente\n");
                    printf("8. Regresar\n");

                    scanf("%d", &operacion);
                    switch (operacion) {
                        case 1:
                            printf("Ingrese el segundo número: ");
                            scanf("%f", &num2);
                            resultado = suma(num1, num2);
                            printf("La suma es: %.2f\n", resultado);
                            num1 = resultado;
                            break;
                        case 2:
                            printf("Ingrese el segundo número: ");
                            scanf("%f", &num2);
                            resultado = resta(num1, num2);
                            printf("La resta es: %.2f\n", resultado);
                            num1 = resultado;
                            break;
                        case 3:
                            printf("Ingrese el segundo número: ");
                            scanf("%f", &num2);
                            resultado = multiplicacion(num1, num2);
                            printf("La multiplicación es: %.2f\n", resultado);
                            num1 = resultado;
                            break;
                        case 4:
                            printf("Ingrese el segundo número: ");
                            scanf("%f", &num2);
                            resultado = division(num1, num2);
                            printf("La división es: %.2f\n", resultado);
                            num1 = resultado;
                            break;
                        case 5:
                            resultado = seno(num1);
                            printf("El seno es: %.2f\n", resultado);
                            num1 = resultado;
                            break;
                        case 6:
                            resultado = coseno(num1);
                            printf("El coseno es: %.2f\n", resultado);
                            num1 = resultado;
                            break;
                        case 7:
                            resultado = tangente(num1);
                            printf("La tangente es: %.2f\n", resultado);
                            num1 = resultado;
                            break;
                        default:
                            break;
                    }
                } while (operacion != 8);
                break;
            case 3:
                // Limpiar Ultimo
                num1 = 0;
                break;
            case 4:
                // Limpiar todo
                num1 = 0;
                num2 = 0;
                break;
            default:
                break;
        }
    } while (teclado != 5);

    return 0;
}
