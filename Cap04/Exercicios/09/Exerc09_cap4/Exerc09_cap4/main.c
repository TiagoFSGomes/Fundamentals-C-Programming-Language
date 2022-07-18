#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    scanf("%f%f", &altura, &peso);

// Até 60KG
    if(altura < 1.20 && peso < 60.0){
        printf("Classificacao da pessoa: A\n\n");
    }
    if(altura >= 1.20 && altura < 1.70 && peso < 60.0){
            printf("Classificacao da pessoa: B\n\n");
    }
    if(altura >= 1.70 && peso < 60.0){
            printf("Classificacao da pessoa: C\n\n");
    }

  // De 60KG até 90Kg
    if(altura < 1.20 &&  peso >= 60.0 && peso <= 90.0){
        printf("Classificacao da pessoa: D\n\n");
    }
    if(altura >= 1.20 && altura < 1.70 && peso >= 60.0 && peso <= 90.0){
            printf("Classificacao da pessoa: E\n\n");
    }
    if(altura >= 1.70 && peso >= 60.0 && peso <= 90.0){
            printf("Classificacao da pessoa: F\n\n");
    }

    // Acima de 90Kg
    if(altura < 1.20 && peso > 90.0){
        printf("Classificacao da pessoa: G\n\n");
    }
    if(altura >= 1.20 && altura < 1.70 && peso > 90.0){
            printf("Classificacao da pessoa: H\n\n");
    }
    if(altura >= 1.70 && peso > 90.0){
            printf("Classificacao da pessoa: I\n\n");
    }


    system("pause");
    return 0;
}
