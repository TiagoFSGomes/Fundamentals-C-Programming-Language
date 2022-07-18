#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros  :");
    scanf("%d%d", &a, &b);

    if(a > b){
        printf("%d e maior que %d\n", a, b);
    }else{
        if( b > a)
        printf("%d e maior que %d\n", b, a);

        else
        printf("%d e igual %d\n", a, b);
    }

    system("pause");
    return 0;
}
