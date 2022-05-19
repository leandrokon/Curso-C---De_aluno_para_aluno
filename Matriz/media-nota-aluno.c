#include <stdio.h>

int main(void) {
    const int bimestres = 4;   //constante de bimestres anuais.
    const int alunos = 4;      //constante do número de alunos.

    float notasAlunos[alunos] [bimestres]; //matriz que armazena os alunos e suas notas.
    float mediasAlunos[alunos]; //vetor que armazena as médias de todos os alunos.
    float media = 0; //variavel que armazena a média de cada aluno.

    printf("Informe as notas do aluno 1: \n");

    for (int aluno = 0; aluno < alunos; aluno++) {
        for (int bimestre = 0; bimestre < bimestres; bimestre++) {
            scanf("%f", &notasAlunos[aluno][bimestre]);
            media += notasAlunos[aluno][bimestre];
        }
        mediasAlunos[aluno] = media / bimestres;
        media = 0;
        printf("Informe as notas do aluno %d: \n",aluno + 2);
    }

    for (int aluno = 0; aluno < alunos; aluno++) {
        printf("A media do aluno %d e: %.2f\n", aluno + 1, mediasAlunos[aluno]);
    }
   
    return 0;
}