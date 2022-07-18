#include <stdio.h>
#include <stdlib.h>
int main()
{
     int i, lista[] = {3,51,18,2,45};

    int soma = 0;




    for(i=0; i < sizeof(lista)/sizeof(int); i++)
        soma = soma + lista[i];

    float media = soma / (float)( sizeof(lista) / sizeof(int) );

    printf("Media = %.3f\n\n",media);


    printf("%d\n", sizeof(lista)); // numero bytes ocupados pelo vetor 1 int = 4 bytes = 8 bits

    system("pause");
    return 0;
}
