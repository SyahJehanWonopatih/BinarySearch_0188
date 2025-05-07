#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input() {
   
    cout << "\n=========================================\n";
    cout << "            Masukkan Elemen Array        \n";
    cout << "=========================================\n";
    for (int i = 0; i < nPanjang; i++) {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}