#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int z;

    for(c = 'A'; c <= 'Z'; c++){

        printf("Letra = %c\n\n",c);

        z = (int)(c); //type cast char para int
        printf("ASCII = %d\n\n",z);

    // printf("ASCII = %d\n\n",c); também realiza a conversão
    }
    system("pause");
    return 0;
}
