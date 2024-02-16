#include <stdio.h>

void main(){

int teclado, operacion;
printf("Menú\n");

do{
    printf("1. Ingresar un número:\n");
    printf("2. Seleccionar Operación:\n");
    printf("3. Limpiar Ultimo\n");
    printf("4. Limpiar todo\n");
    printf("5. Salir\n");

    scanf("%d",&teclado);
    switch (teclado)
    {
    case 1:
    
        break;
    case 2:
    
        do{
            printf("1. Suma\n");
            printf("2. Resta\n");
            printf("3. Multiplicación\n");
            printf("4. División\n");
            printf("5. Raiz cuadrada\n");
            printf("6. s(seno)\n");
            printf("7. c(coseno)\n");
            printf("8. t(tangente)\n");
            printf("9. Potencia ^\n");
            printf("10. Regresar\n");

            scanf("%d",&operacion);
                switch (operacion)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    break;
                }
        }while(operacion != 10);

    break;
    case 3:
        
    break;
    case 4:
        
        
    default:
        break;
    }

    }while (teclado != 2);



}