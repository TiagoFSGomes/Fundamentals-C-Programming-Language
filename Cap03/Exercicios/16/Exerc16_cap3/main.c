#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int x, y;
    x = 44;
    printf("x = %d\n", x); // 44

    y = x << 1;  // x << 1 = x * 2
    printf("x = %d\n", y); //88

    y = x >> 1; // x >> 1 = x / 2
    printf("x = %d\n", y); //22


    system("pause");
    return 0;
}
