#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, s = 0;

    for(i = 0; i<=10; i++){

        s += i;
        printf("Soma = %d\n\n", s);
    }

    //printf("Soma = %d\n\n", s);


    system("pause");
    return 0;
}
