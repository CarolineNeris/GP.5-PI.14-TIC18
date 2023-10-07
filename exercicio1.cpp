#include <iostream>

using namespace std;

unsigned long long calcularFatorial(int n) {
    if (n < 0) {
        cout << "Erro: O fatorial não está definido para números negativos." << endl;
        return 0; 
    }

    unsigned long long fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int numero1 = 5;
    int numero2 = 10;
    int numero3 = 15;

    cout << "Fatorial de " << numero1 << ": " << calcularFatorial(numero1) << endl;
    cout << "Fatorial de " << numero2 << ": " << calcularFatorial(numero2) << endl;
    cout << "Fatorial de " << numero3 << ": " << calcularFatorial(numero3) << endl;

    return 0;
}
