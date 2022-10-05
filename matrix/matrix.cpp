#include <iostream>

using namespace std;

int main(){
    int aaa, aab, aba, abb;
    int baa, bab, bba, bbb;
    int caa, cac, cca, ccc;

    cout << "Masukkan Nilai Matriks A" << endl;
    cout << "[1][1] : ";
    cin >> aaa;
    cout << "[1][2] : ";
    cin >> aab;
    cout << "[2][1] : ";
    cin >> aba;
    cout << "[2][2] : ";
    cin >> abb;
    cout << endl;

    cout << "Masukkan Nilai Matriks B" << endl;
    cout << "[1][1] : ";
    cin >> baa;
    cout << "[1][2] : ";
    cin >> bab;
    cout << "[2][1] : ";
    cin >> bba;
    cout << "[2][2] : ";
    cin >> bbb;
    cout << endl;

    cout << "Matriks A" << endl;
    cout << aaa << aab << endl;
    cout << aba << abb << endl;

    cout << "Matriks B" << endl;
    cout << baa << " " << bab << endl;
    cout << bba << " " << bbb << endl;

    cout << "Hasil Penjumlahan" << endl;

    caa = aaa + baa;
    cac = aab + bab;
    cca = aba + bba;
    ccc = abb + bbb;

    cout << caa << " " << cac << endl;
    cout << cca << " " << ccc << endl;

    cin.get();
    return 0;
}