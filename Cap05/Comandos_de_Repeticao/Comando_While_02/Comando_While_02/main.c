#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, s = 0;

    i = 1;

    while(i<=10){

        s += i;
        i++;
        printf("Soma = %d\n\n", s);
    }

    //printf("Soma = %d\n\n", s);


    system("pause");
    return 0;
}
