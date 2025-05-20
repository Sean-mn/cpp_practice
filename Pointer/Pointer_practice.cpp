#include <iostream>

using namespace std;

double ToCelsius(double f);

int main() {
    double temperature = 32;
    ToCelsius(temperature);

    cout << temperature << endl;

    return 0;
}

double ToCelsius(double f){
    return (f - 32) / 1.8f;
}