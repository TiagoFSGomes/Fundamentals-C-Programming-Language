#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, cont;

    for(i = 1, cont = 0; cont < 5; i++){
        if(i % 3 == 0){
            printf("%d\n\n", i);
            cont++;
        }
    }
    system("pause");
    return 0;
}
