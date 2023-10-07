#include <iostream>

using namespace std;

double converterCelsiusParaFahrenheit(double temperaturaCelsius) {
    return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
}

void lerTemperaturaEConverter() {
    double temperaturaCelsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> temperaturaCelsius;

    double temperaturaFahrenheit = converterCelsiusParaFahrenheit(temperaturaCelsius);

    cout << "Temperatura em Fahrenheit: " << temperaturaFahrenheit << "F" << endl;
}

int main() {
    lerTemperaturaEConverter();
    return 0;
}
