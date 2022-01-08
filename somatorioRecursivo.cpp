#include <iostream>
using namespace std;

int somatorio(int n){
    if (n == 1)
        return 1;
    else
        return somatorio(n-1)+n;
}

int main(){

    cout<< "O somatorio >: " << somatorio(5);
    
    return EXIT_SUCCESS;
}