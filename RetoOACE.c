#include <stdio.h>
#include <math.h>

float stack[8];

void mostrarPila(void)
{
    int i;
    for (i = 7; i >= 0; i--)
    {
        printf("%d. "
               "%f \n",
               i + 1, stack[i]);
    }
}

void ingresarNum(void)
{
    float num;
    printf("Ingrese el número: ");
    scanf("%f", &num);
    int i;
    for (i = 7; i >= 0; i--)
    {
        stack[i] = stack[i - 1];
    }
    stack[0] = num;
}

void mover(void)
{
    int i;
    for (i = 1; i < 8; i++)
    {
        stack[i] = stack[i + 1];
    }
}

void selecopera(void)
{
    char oper;
    float resultado;
    printf("Ingrese la operación que desea realizar \n"
           "+, -, *, /, r(raiz cuadrada), p(potencia), s(seno), c(coseno), t(tangente)\n");
    scanf("%s", &oper);
    switch (oper)
    {
    case '+':
        resultado = stack[0] + stack[1];
        stack[0] = resultado;
        mover();
        break;

    case '-':
        resultado = stack[1] + stack[0];
        stack[0] = resultado;
        mover();
        break;

    case '*':
        resultado = stack[0] * stack[1];
        stack[0] = resultado;
        mover();
        break;

    case '/':
        if (stack[0] == 0)
        {
            printf("\033[2J");
            printf("Math Error\n");
            break;
        }
        resultado = stack[1] / stack[0];
        stack[0] = resultado;
        mover();
        break;

    case 'r':
        if (stack[0] < 0)
        {
            printf("\033[2J");
            printf("Math Error\n");
            break;
        }
        resultado = sqrt(stack[0]);
        stack[0] = resultado;
        break;

    case 'p':
        resultado = pow(stack[1], stack[0]);
        stack[0] = resultado;
        break;

    case 's':
        resultado = sin(stack[0]);
        stack[0] = resultado;
        break;

    case 'c':
        resultado = cos(stack[0]);
        stack[0] = resultado;
        break;

    case 't':
        if (stack[0] == 90 || stack[0] == 270)
        {
            printf("\033[2J");
            printf("Math Error\n");
            break;
        }
        resultado = tan(stack[0]);
        stack[0] = resultado;
        break;

    default:
        printf("Opción incorrecta");
        break;
    }
}

void cleanlast(void)
{
    int i;
    for (i = 0; i < 8; i++)
    {
        stack[i] = stack[i + 1];
    }
}

void cleanall(void)
{
    int i;
    for (i = 0; i < 8; i++)
    {
        stack[i] = 0;
    }
}

int main(int argc, char const *argv[])
{
    int opcion;
    do
    {
        mostrarPila();
        printf("------ CALCULADORA RPN ------\n\n");
        printf("\n Ingrese el número de la opción que desa realizar \n"
               "1. Ingresar número\n"
               "2. Selecionar operación\n"
               "3. Limpiar último\n"
               "4. Limpiar todo\n"
               "5. Salir \n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("\033[2J");
            mostrarPila();
            ingresarNum();
            printf("\033[2J");
            break;

        case 2:
            printf("\033[2J");
            mostrarPila();
            selecopera();
            // printf("\033[2J");
            break;

        case 3:
            cleanlast();
            printf("\033[2J");
            break;

        case 4:
            cleanall();
            printf("\033[2J");
            break;

        default:
            printf("Ha finalizado exitosamente");
            break;
        }
    } while (opcion < 5);
    return 0;
}