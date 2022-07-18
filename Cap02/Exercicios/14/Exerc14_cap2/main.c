#include <stdio.h>
#include <stdlib.h>
/*Pograma lê três caracteres do tipo char e depois imprima um em cada linha
  utilizando um único comando printf()
*/
int main()
{

    char a,b,c;

    scanf("%c%c%c",&a,&b,&c);
    printf("Os caracteres lidos sao %c %c e %c\n",a,b,c);

    system("pause");
    return 0;
}
