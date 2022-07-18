#include <stdio.h>
#include <stdlib.h>

int main()
{

/* programa inspirado na figura 3.5 da pagina 60 do livro */
    unsigned char y;
    unsigned int x;
    scanf("%d", &x);
    y = ~x; // "~" eh operador bit a bit
    printf("O complemento e: %d\n\n\n", y);

    system("pause");
    return 0;
}
