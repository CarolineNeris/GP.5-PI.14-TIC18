#include <iostream>
#include <cmath> 

using namespace std;

struct Ponto {
    double x;
    double y;
};

double calcularDistancia(Ponto p1, Ponto p2) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    Ponto ponto1, ponto2;

    cout << "Digite as coordenadas do primeiro ponto (x y): ";
    cin >> ponto1.x >> ponto1.y;

    cout << "Digite as coordenadas do segundo ponto (x y): ";
    cin >> ponto2.x >> ponto2.y;

    double distancia = calcularDistancia(ponto1, ponto2);

    cout << "A distancia entre os dois pontos eh: " << distancia << endl;

    return 0;
}
