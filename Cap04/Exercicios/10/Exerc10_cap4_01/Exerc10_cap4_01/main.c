#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{

    float num_usuario1, num_usuario2, num_usuario3, med1, med2, med3, med4;
    signed int opera;

    printf("Digite tres numeros positivos:\n\n");
    scanf("%f %f %f", &num_usuario1, &num_usuario2, &num_usuario3);

    printf("\n");
    printf("Digite a operacao matematica\n");
    printf("1 - Media Geometrica / 2 - Media Ponderada / 3 - Media Harmonica / 4 - Media Aritmetica:");
    printf("\n");
    scanf("%d", &opera);

    if(opera == 1){
        med1 = pow(num_usuario1 * num_usuario2 * num_usuario3, 1/3);
        printf("Media Geometrica: %.2f\n", med1);

    }else if(opera == 2){
        med2 = (num_usuario1 + 2 * num_usuario2 + 3 * num_usuario3) / 6;
        printf("Media Ponderada: %.2f\n", med2);

    }else if(opera == 3){
        med3 = 1 / (1/num_usuario1) + (1/num_usuario2) + (1/num_usuario3);
        printf("Media Harmonica: %.2f\n", med3);

    }else if(opera == 4){
        med4 = (num_usuario1 + num_usuario2 + num_usuario3) / 3;
        printf("Media Aritmetica: %.2f\n", med4);

    }else
        printf("Digite o numero correto da operacao!\n\n");

    system("pause");
    return 0;
}
