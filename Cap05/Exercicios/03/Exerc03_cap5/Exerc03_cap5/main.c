#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, i;
    printf("digite um numero inteiro: ");
    scanf("%d",&num1);


     for(i = 1; i <= num1; i += 2){ //imprime somente os n�meros �mpares at� o n�mero digitado pelo usu�rio
                                    // como num � �mpar, soma-se 2 para ir para o pr�ximo �mpar
        printf("%d\n\n", i);
    }

    system("pause");
    return 0;
}
