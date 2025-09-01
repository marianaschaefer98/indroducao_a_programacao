#include <stdio.h>

int main(){

    int idade;
    int matricula;
    float altura;
    char nome[20];

        printf("Digite sua idade: \n");
        scanf("%d", &idade);

        printf("Digite sua matricula: \n");
        scanf("%d", &matricula);

        printf("Digite sua altura: \n");
        scanf("%f", &altura);

        printf("Digite seu nome: \n");
        scanf("%20s", nome);

        printf("Idade: %d - Nome: %s \n", idade, nome);
        printf("Altura: %f - Matricula: %d", altura, matricula);

        return 0;

}