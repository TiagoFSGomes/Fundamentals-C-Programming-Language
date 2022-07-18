#include <stdio.h>
#include <stdlib.h>


/*
Union utilizada para manipulação de bits.

Permite fazer acessos controlados a nível de bits



Sem utilizar o union:


    short int x = 1545; // 0000110 00001001
    unsigned char c0, c1;

    c0 = 0x00FF & x; // 00001001 -> 9
    c1 = x >> 8; // 00000110 ->6

    printf("x = %d\n, x");
    printf("c0 = %d\n, c0");
    printf("c1 = %d\n, c1");

*/

union tipo{
    short int x; //16 bits  = 2bytes
    unsigned char c[2]; // 8 bits = 1 byte

};


int main()
{
    //Sem utilizar o union:

    //short int x = 1545; // 0000110 00001001 - objetivo separar este valor ao meio
    //unsigned char c0, c1;

    //c0 = 0x00FF & x; // 00001001 = 9 em decimal - & E bit a bit (0x00FF = 11111111 = 255)
    //c1 = x >> 8; // 00000110 = 6 em decimal - >> Deslocamento de bits à direita.
                //Deslocar um bit para a direita equivale a dividir seu valor por 2.

    //printf("x = %d\n",x);
    //printf("c0 = %d\n", c0);
    //rintf("c1 = %d\n", c1);

    //Sem utilizar o union:


  // Utilizando o Union

  union tipo v;

  v.x = 1545;  // 0000110 00001001 - objetivo separar este valor ao meio
  printf("x = %d\n", v.x);

  printf("c0 = %d\n", v.c[0]); // 00001001 = 9 em decimal

  printf("c1 = %d\n", v.c[1]); // 00000110 = 6





    system("pause");
    return 0;
}
