#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);


    printf("%d\n", n1 << n2); // Deslocamento a esquerda do primeiro pelo segundo

    printf("%d\n\n", n1 >> n2); //Deslocamento a direita do primeiro pelo segundo


    system("pause");
    return 0;
}
