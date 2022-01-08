#include <iostream>
using namespace std;

int potencia(int x, int n){
    if (n == 0)
        return 1;
    else
        return x * potencia(x,n-1);
}

int main(){

    cout<< "O potencia de 5 e >: " << potencia(5,2);
    
    return EXIT_SUCCESS;
}