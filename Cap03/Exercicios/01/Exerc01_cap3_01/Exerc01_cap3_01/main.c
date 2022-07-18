#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    int num;

    scanf("%d", &num);
    printf("O número sucessor é: %d e o anterior é: %d\n\n",  num + 1, num - 1);

    system("pause");
    return 0;
}
