#include <iostream>
#include <string>

using namespace std;

// Fungsi menampilkan judul
void tampilkanJudul() {
    cout << "==============================" << endl;
    cout << "       PARKIR KAMPUS         " << endl;
    cout << "==============================" << endl;
}

// Fungsi memasukkan data kendaraan
void inputData(string &nama, char &jenis, int &lama) {
    cout << "Nama Pengguna       : ";
    getline(cin, nama);

    cout << "Jenis Kendaraan (M/O): ";
    cin >> jenis;

    cout << "Lama Parkir (jam)   : ";
    cin >> lama;
}

// Fungsi menghitung biaya parkir
int hitungBiaya(int lama, int tarifPerJam) {
    return lama * tarifPerJam;
}

// Fungsi menampilkan struk
void tampilkanStruk(string nama, string jenis,
                    int lama, int tarif, int total) {
    cout << "\n========== STRUK PARKIR ==========" << endl;
    cout << "Nama Pengguna   : " << nama << endl;
    cout << "Jenis Kendaraan : " << jenis << endl;
    cout << "Lama Parkir     : " << lama << " jam" << endl;
    cout << "Tarif Per Jam   : Rp" << tarif << endl;
    cout << "Total Biaya     : Rp" << total << endl;
    cout << "==================================" << endl;
}

int main() {
    string nama;
    char jenis;
    int lama;
    int tarifMotor = 2000;
    int tarifMobil = 5000;
    int tarif;

    tampilkanJudul();

    inputData(nama, jenis, lama);

    string namaJenis;

    if (jenis == 'M' || jenis == 'm') {
        tarif = tarifMobil;
        namaJenis = "Mobil";
    } 
    else if (jenis == 'O' || jenis == 'o') {
        tarif = tarifMotor;
        namaJenis = "Motor";
    } 
    else {
        cout << "Jenis kendaraan tidak valid!" << endl;
        return 0;
    }

    int total = hitungBiaya(lama, tarif);

    tampilkanStruk(nama, namaJenis,
                   lama, tarif, total);

    return 0;
}