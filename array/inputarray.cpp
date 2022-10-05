#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortkecil(int x[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1;j < n; j++)
        if(x[j] < x[min])
        min = j;
        temp = x[i];
        x[i] = x[min];
        x[min] = temp;
    }
}

void sortbesar(int x[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1;j < n; j++)
        if(x[j] > x[min])
        min = j;
        temp = x[i];
        x[i] = x[min];
        x[min] = temp;
    }
}

int main() {
    int x[5];
    int n = sizeof(x) / sizeof(x[0]), sum = 0;
    int index;

    cout << "Masukkan jumlah length = ";
    cin >> index;

    for (int i = 0; i < index; i++)
    {
        cout << "Masukkan angka ke-" << i + 1 << " = ";
        cin >> x[i];
    }
    
    for (int i = 0; i < index; i++) {
        cout << "Nilai ke-" << i+1 << " = " << x[i] << endl << endl;
    }

    cout << "Nilai urut dari yang terkecil" << endl;
    sortkecil(x, n);
    for(int i = 0; i < n; i++)
    cout << x[i] << " ";
    cout << endl << endl;

    cout << "Nilai urut dari yang terbesar" << endl;
    sortbesar(x, n);
    for(int i = 0; i < n; i++)
    cout << x[i] << " ";
    cout << endl << endl;


    cout << "Total = ";
    for (int i = 0; i < n; i++) {
        sum+=x[i];
    }
    cout << sum << endl << endl;

    float avg = sum / n;
    cout << "Rata - rata = ";
    cout << avg << endl << endl;

    cout << "Max = ";
    cout << *max_element(x, x + n) << endl << endl;

    cout << "Min = ";
    cout << *min_element(x, x + n);


    return 0;
}