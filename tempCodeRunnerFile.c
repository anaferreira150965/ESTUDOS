#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];
    

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Nome do aluno: %s", nome);
    printf("Idade do aluno: %d\n", idade);

    return 0;
}