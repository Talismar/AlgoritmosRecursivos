#include <iostream>
using namespace std;

int fatorial(int n){
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fatorial(n-1);
}

int main(){

    cout<< "O fatorial de 5 e >: " << fatorial(5);
    
    return EXIT_SUCCESS;
}