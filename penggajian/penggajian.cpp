#include <iostream>
using namespace std;

int main() {
    string pegawai, exit;
    int gpokok, tgaji, tunjangan;
    int gol, jmkerja, ulembur, pajak_gpokok, pajak_glembur, pajak_total;


    do
    {
        cout << "Penggajian" << endl << endl;

    cout << "Masukkan Nama Pegawai = ";
    cin >> pegawai;
    cout << endl;

    cout << "Masukkan Golongan = ";
    cin >> gol;
    cout << endl;

    cout << "Masukkan Jam Kerja = ";
    cin >> jmkerja;
    cout << endl;

    if (gol == 1) {
        gpokok = 3000000;
        tunjangan = gpokok * 15/100;
        pajak_gpokok = gpokok*0.005;
        if (jmkerja > 160) {
            ulembur = (jmkerja - 160) * (gpokok *0.01);
            pajak_glembur = ulembur*0.005;
        } else {
            ulembur = 0;
            pajak_glembur = 0;
        }
        pajak_total = pajak_glembur + pajak_gpokok;
        tgaji = gpokok + ulembur + tunjangan - pajak_glembur - pajak_gpokok;
    }

    if (gol == 2) {
        gpokok = 3500000;
        tunjangan = gpokok * 15/100;
        pajak_gpokok = gpokok*0.005;
        if (jmkerja > 160) {
            ulembur = (jmkerja - 160) * (gpokok *0.01);
            pajak_glembur = ulembur*0.005;
        } else {
            ulembur = 0;
            pajak_glembur = 0;
        }
        pajak_total = pajak_glembur + pajak_gpokok;
        tgaji = gpokok + ulembur + tunjangan - pajak_glembur - pajak_gpokok;
    }

    if (gol == 3) {
        gpokok = 4000000;
        tunjangan = gpokok * 15/100;
        pajak_gpokok = gpokok*0.005;
        if (jmkerja > 160) {
            ulembur = (jmkerja - 160) * (gpokok *0.01);
            pajak_glembur = ulembur*0.005;
        } else {
            ulembur = 0;
            pajak_glembur = 0;
        }
        pajak_total = pajak_glembur + pajak_gpokok;
        tgaji = gpokok + ulembur + tunjangan - pajak_glembur - pajak_gpokok;
    }

    if (gol == 4) {
        gpokok = 4500000;
        tunjangan = gpokok * 15/100;
        pajak_gpokok = gpokok*0.005;
        if (jmkerja > 160) {
            ulembur = (jmkerja - 160) * (gpokok *0.01);
            pajak_glembur = ulembur*0.005;
        } else {
            ulembur = 0;
            pajak_glembur = 0;
        }
        pajak_total = pajak_glembur + pajak_gpokok;
        tgaji = gpokok + ulembur + tunjangan - pajak_glembur - pajak_gpokok;
    }
    
    

    cout << "Output" << endl << endl;

    cout << "Nama Pegawai = ";
    cout << pegawai << endl;
    cout << "Golongan = ";
    cout << gol << endl;
    cout << "Gaji Pokok = ";
    cout << gpokok << endl;
    cout << "Upah Lembur = ";
    cout << ulembur << endl;
    cout << "Tunjangan Pegawai = ";
    cout << tunjangan << endl;
    cout << "Pajak Gaji Pokok = ";
    cout << pajak_gpokok << endl;
    cout << "Pajak Gaji Lembur = ";
    cout << pajak_glembur << endl;
    cout << "Total Pajak = ";
    cout << pajak_total << endl;
    cout << "Total Gaji = ";
    cout << tgaji << endl;

    cout << "Menghitung Lagi (y/t) = ";
    cin >> exit;
    } while (exit == "y");
 
    return 0;
}