#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void calcPrimeNumbers(){
    printf("Selecciono la opcion 1\n");
    getchar();
}

void calcEgotisticalNumber(){
    printf("Selecciono la opcion 2\n");
    getchar();
}

void calcMagicNumber(){
    printf("Selecciono la opcion 3\n");
    getchar();
}

void calcIMC(){
    printf("Selecciono la opcion 4\n");
    getchar();
}

void calcSumOfDigits(){
    printf("Selecciono la opcion 5\n");
    getchar();
}

void calcFibonacciSequence(){
    printf("Selecciono la opcion 6\n");
    getchar();
}

void calcTestScore(){
    printf("Selecciono la opcion 7\n");
    getchar();
}

void mainMenu(){
    int option;
    char temp[10];

    char *mainMenu = "<<<<< MENU PRINCIPAL >>>>>\n\n"
                     "1. Numeros Primos\n"
                     "2. Numero Egolatra\n"
                     "3. Numero Magico\n"
                     "4. Indice de Masa Corporal\n"
                     "5. Suma de Digitos\n"
                     "6. Secuencia Fibonacci\n"
                     "7. Puntaje de una Prueba\n"
                     "8. SALIR\n";

    do{
        printf(mainMenu);
        fgets(temp, 5, stdin);
        strtok(temp, "\n");
        option = atoi(temp);

        switch(option){

            case 1:
                calcPrimeNumbers();
                break;

            case 2:
                calcEgotisticalNumber();
                break;

            case 3:
                calcMagicNumber();
                break;

            case 4:
                calcIMC();
                break;

            case 5:
                calcSumOfDigits();
                break;

            case 6:
                calcFibonacciSequence();
                break;

            case 7:
                calcTestScore();
                break;

            case 8:
                break;

            default:
                printf("ERROR. Opcion no valida, intentelo nuevamente\n");
                break;

        }
    }while(option != 8);
}

int main(int argc, char** argv) {

    mainMenu();

    return 0;
}
