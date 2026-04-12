#include <stdio.h>

int main() {
    
    int idade;
    char nome[50];
    int matricula;
    
    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s", nome);
    printf("Idade do aluno: %d\n", idade);
    printf("Matrícula do aluno: %d\n", matricula);

    return 0;
}