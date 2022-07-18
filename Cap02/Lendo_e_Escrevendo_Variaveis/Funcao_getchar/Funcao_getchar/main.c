#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    c = getchar(); // int getchar(void);

    printf("Caractere: %c\n", c);

    printf("Codigo ASCII: %d\n", c);

    system("pause");
    return 0;
}
