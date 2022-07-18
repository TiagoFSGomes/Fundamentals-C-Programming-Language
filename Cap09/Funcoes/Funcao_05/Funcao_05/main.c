#include <stdio.h>
#include <stdlib.h>

//Função contendo operação de leitura e escrita

int menu(){
    int i;
 // menu de opções é apresentado ao usuário, que tem de escolher entre uma delas
    do{
        printf("Escolha uma opção:\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        printf("(3) Opcao 3\n");
        scanf("%d", &i);
    }while( (i<1) || (i>3) );

    return i;

}


int main()
{
    int op = menu(); // chamando a função

    printf("Vc escolheu a Opcao %d\n", op);

    system("pause");
    return 0;
}
