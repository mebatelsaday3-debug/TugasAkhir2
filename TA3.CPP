#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string nama[100], cari;
    int posisi = -1; 

    cout << "Masukkan jumlah siswa: ";
    cin >> n;
    cin.ignore(); 

    cout << "Masukkan nama siswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Siswa ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
    }

    cout << "\nMasukkan nama yang ingin dicari: ";
    getline(cin, cari);

    for (int i = 0; i < n; i++) {
        if (nama[i] == cari) {
            posisi = i;
            break; 
        }
    }

    if (posisi != -1) {
        cout << "\nNama \"" << cari << "\" ditemukan pada urutan ke-" << posisi + 1 << " dalam daftar hadir." << endl;
    } else {
        cout << "\nNama \"" << cari << "\" tidak ditemukan dalam daftar hadir." << endl;
    }

    return 0;
}
