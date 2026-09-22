// Kesalahan 1: sintaks. Ada satu tanda titik koma yang hilang.
// Program ini gagal pada tahap compile, berkas .exe tidak terbentuk.
#include <iostream>
int main() {
int nilai = 80
std::cout << "Nilai: " << nilai << "\n";
return 0;
}

// Kesalahan 2: nama yang belum dikenal. Variabel dipakai sebelum dideklarasikan,
// dan ada salah ketik huruf besar. Di Python kesalahan ini baru terasa saat baris
// itu dijalankan; di C++ ditolak compiler sebelum program pernah berjalan.
#include <iostream>
int main() {
int nilai = 80;
std::cout << "Nilai: " << Nilai << "\n";
std::cout << "Bonus: " << bonus << "\n";
return 0;
}

// Kesalahan 3: runtime. Kode ini lolos compile tanpa error dan tanpa warning,
// tetapi berhenti mendadak saat pengguna memasukkan 0 sebagai jumlah mahasiswa.
#include <iostream>
int main() {
int total = 240;
int jumlah_mahasiswa = 0;
std::cout << "Jumlah mahasiswa: ";
std::cin >> jumlah_mahasiswa;
int rerata = total / jumlah_mahasiswa;
std::cout << "Rata-rata: " << rerata << "\n";
return 0;
}

// Kesalahan 4: logika. Program berjalan mulus, tidak ada pesan apa pun,
// tetapi hasilnya salah. Rata-rata 80, 75, dan 90 seharusnya 81.67, bukan 81.
#include <iostream>
int main() {
int tugas = 80;
int uts = 75;
int uas = 90;
double rerata = (tugas + uts + uas) / 3;
std::cout << "Rata-rata: " << rerata << "\n";
return 0;
}

## kesalahan yang paling berbahaya
   Menurut saya, kesalahan nya itu karena saat progam ini di jalankan tetap bisa berjalan tanpa ada warning atau error, tetapi hasil yang di jalankan itu tidak benar