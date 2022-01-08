#include <iostream>
using namespace std;

int laco(int *lista, int total, int passos=1, int i=0){
    if (i >= total){
        cout<<"Preenchida";
    }
    else{
        lista[i] = i;
        return laco(lista,total,passos, i + passos);
    }
};

int main(){
    int lista[10];

    laco(lista,10);
    for(int j = 0; j < 10; j++)
        cout<<" | " <<lista[j];

    return 0;
}