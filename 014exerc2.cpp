#include <iostream>
using namespace std;

double calcularCtoF(double graus){
    return (9*graus/5) + 32;
}

void celsiusFahrenheit(){

    double celsius;
    cin>>celsius;
    cout<< "Fahrenheit: "<<calcularCtoF(celsius)<<endl;
}

int main(){
    celsiusFahrenheit();
    return 0;
}