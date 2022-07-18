#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[3];
    int i;

    for(i=0; i<3; i++){
        printf("Digite a nota do aluno %d: ",i);
        scanf("%d", &notas[i]); //Armazena com comando de repetição as 100 notas dos alunos no array
    }

    printf("Nota aluno 1: %d\n\n", notas[1]);

    system("pause");
    return 0;
}
