#include <iostream>
using namespace std;

int main() {
    int c;

    cout << "Aplikasi Konversi Suhu" << endl;
    cout << "Masukkan suhu dalam celcius : ";
    cin >> c;
    cout << endl;

    cout << "Hasil Konversi :" << endl;

    
    cout << "Celcius = ";
    cout << c << endl;

    float r = 0.8*c;
    cout << "Reamur = ";
    cout << r << endl;

    float f = 1.8*c+32;
    cout << "Fahrenheit = ";
    cout << f << endl;

    float k = c + 273;
    cout << "Kelvin = ";
    cout << k;

    return 0;
}