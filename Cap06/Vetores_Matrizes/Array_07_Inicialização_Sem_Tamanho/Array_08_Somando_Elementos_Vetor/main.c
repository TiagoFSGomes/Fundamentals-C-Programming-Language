#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, lista[5] = {3,51,18,2,45};

    int soma = 0; // Inicia-se com valor zero para evitar que o lixo da memoria nao atrapalhe o resultado

    for(i=0; i < 5; i++){ //percorre todos elementos do array
        soma = soma + lista[i];
            printf("Soma = %d\n\n",soma);
    }




    system("pause");
    return 0;
}
