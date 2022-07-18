#include <stdio.h>
#include <stdlib.h>

/* Programa lê dois números inteiros e depois imprima
   na ordem inversa na ordem em que eles fora lidos
*/

int main(){

    int numb1,numb2;

    printf("Digite dois numeros inteiros:   ");
    scanf("%d%d", &numb1,&numb2);

    //Imprimindo na tela os números inseridos pelo usuário em ordem inversa
    printf("Os numeros digitados em ordem inversa sao: %d e %d\n\n",numb2,numb1);


    system("pause");
    return 0;
}
