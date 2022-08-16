#include<stdio.h>
#include<locale.h>

float somar(float a, float b){
    return a + b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

float porcentagem(float a, float b){
    return (a/100)*b;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brasil.1252");

    int continuarJogo = 0;
    int opcao;
    float num_1, num_2;
    int continuar;

    while(continuarJogo == 0){

        printf("*********************************\n");
        printf("********** Calculadora **********\n");
        printf("*********************************\n");
        printf("\n********\n");
        printf("*Opções*\n");
        printf("********\n");
         printf("\n[1] Somar. \n");
        printf("[2] Multiplicar. \n");
        printf("[3] Dividir. \n");
        printf("[4] Porcentagem.\n");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite os dois números que você quer somar: ");
            scanf("%f %f", &num_1, &num_2);
            printf("A soma é: %f", somar(num_1, num_2));
            break;
        case 2:
            printf("Digite os dois números que você quer multiplicar: ");
            scanf("%f %f", &num_1, &num_2);
            printf("A multiplicação é: %f", multiplicar(num_1, num_2));
            break;
        case 3:
            printf("Digite os dois números que você quer dividir: ");
            scanf("%f %f", &num_1, &num_2);
            printf("A divisão é: %f", dividir(num_1, num_2));
            break;
        case 4:
            printf("Digite os dois números que você quer saber a porcentagem: ");
            scanf("%f %f", &num_1, &num_2);
            printf("A porcentagem é: %f", porcentagem(num_1, num_2));
            break;
        default:
            break;
        }

        printf("\nQuer continuar? 1 para sim, 0 para não.");

        scanf("%i", &continuar);
        if(continuar == 0){
            continuarJogo = 1;
        }
    }
}