#include <stdio.h>
#include <stdlib.h>

//Fun��o contendo opera��o de leitura e escrita

int menu(){
    int i;
 // menu de op��es � apresentado ao usu�rio, que tem de escolher entre uma delas
    do{
        printf("Escolha uma op��o:\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        printf("(3) Opcao 3\n");
        scanf("%d", &i);
    }while( (i<1) || (i>3) );

    return i;

}


int main()
{
    int op = menu(); // chamando a fun��o

    printf("Vc escolheu a Opcao %d\n", op);

    system("pause");
    return 0;
}
