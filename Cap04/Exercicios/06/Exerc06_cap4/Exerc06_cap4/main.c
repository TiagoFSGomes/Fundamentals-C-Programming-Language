#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Qual o sexo m ou h: ");
    scanf(" %c", &sexo);

    switch(sexo){

        case 'm':{

            printf("Peso ideal %.2f\n\n", (62.1 * altura) - 44.7);
            break;
            }

        case 'h':{
            printf("Peso ideal %.2f\n\n", (72.7 * altura) - 58);
            break;
            }
}

    system("pause");
    return 0;
}
