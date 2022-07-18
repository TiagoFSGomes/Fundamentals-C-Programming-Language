#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;

    scanf("%f", &c);
    f = c * (9.0 / 5.0) + 32.0;
    printf("A temperatura em Fahrenheit e: %.3f\n",f);
    system("pause");
    return 0;
}
