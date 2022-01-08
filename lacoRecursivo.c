#include <stdio.h>

int laco(int *lista, int total, int passos, int i){
    if (i >= total){
        printf("Preenchida\n");
    }
    else{
        lista[i] = i;
        return laco(lista,total,passos, i + passos);
    }
};

int main(){
    int lista[10];
    
    laco(lista,10,1,0);

    for (int i = 0; i < 10; i++)
    {
        printf(" | %i",lista[i]);
    }
    
    return 0;
}