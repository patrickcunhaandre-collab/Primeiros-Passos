#include <stdio.h>
#include <string.h>

int aprovado = 0, recuperacao = 0, reprovado = 0;
 
float lerNotaValida() {
    float nota;
    //Loop para validar as notas, garantindo que sejam entre 0 e 10
    do {
    scanf("%f", &nota);

    if (nota > 10 || nota < 0) {
        printf("Nota inválida. Digite um valor entre 0 e 10.\n");
    }
   } while (nota > 10 || nota < 0);
   return nota;
}

   
int main() {

int totalalunos;

    printf("Quantos alunos tem na turma?\n");
    scanf("%i", &totalalunos);

    for (int alunoAtual = 1; alunoAtual <= totalalunos; alunoAtual++) {
    float nota1, nota2, nota3;
    float media;

        printf("Aluno %i\n", alunoAtual);
        printf("Digite a nota de Matemática:\n");
        nota1 = lerNotaValida();
        printf("Digite a nota de Português:\n");
        nota2 = lerNotaValida();
        printf("Digite a nota de História:\n");
        nota3 = lerNotaValida();

        media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7.0) {
        printf("Situação: Aprovado\n");
        printf("Parabéns! Continue assim! (=^.^=)\n");
        aprovado += 1;
    } else if (media >= 5.0) {
        printf("Situação: Recuperação\n");
        printf("Estude mais um pouco!\n");
        recuperacao += 1;
    } else {
        printf("Situação: Reprovado\n");
        printf("Não desista!\n");
        reprovado += 1;
    }


    }

    printf("Total de alunos na turma: %i\n\n", totalalunos);
    printf("Alunos aprovados: %i\n", aprovado);
    printf("Alunos em recuperação: %i\n", recuperacao);
    printf("Alunos reprovados: %i\n", reprovado);

    return 0;

}