// Lab porting: pindahkan rerata.py ke C++.
// Lengkapi tiga bagian bertanda TODO, lalu bangun dengan baseline kelas.
#include <iomanip>
#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;
    double mingguan = 93.8;
    double kehadiran = 98.9;
    double rata_rata;

    // TODO 1: hitung jumlah ketiga nilai. Di C++ tipe variabel wajib ditulis.
    double jumlah = tugas + uts + uas + mingguan + kehadiran;

    // TODO 2: hitung rata-rata. Ingat, int dibagi int membuang pecahannya.
    //         Pakai tipe double dan pastikan pembagiannya bukan pembagian bilangan bulat.
    double rerata = jumlah / 5;

    // TODO 3: cetak hasil dengan dua angka di belakang koma, sama seperti versi Python.
    std::cout << "Jumlah    : " << jumlah << "\n";
    std::cout << "Rata-rata : " << rerata << "\n";
    return 0;
}

//Catatan:
//Sebelumnya belum ada double harian, double kehadiran, dan double rata_rata. Sekarang ketiganya sudah
//ditambahkan beserta nilainya. Selain itu, double jumlah sudah tidak bernilai 0 lagi, dan double rata_rata
//juga sudah tidak bernilai 0 lagi karena sudah diisi dengan perhitungan.
