### Penjelasan nomor 4

Program Parkir Kampus yang awalnya dibuat dalam satu bagian dipecah menjadi beberapa fungsi, yaitu fungsi untuk menampilkan judul, memasukkan data, menghitung biaya, dan menampilkan struk. Setiap fungsi memiliki tugas masing-masing sehingga program menjadi lebih teratur. Dengan menggunakan fungsi, kode lebih mudah dibaca, diperbaiki, dan digunakan kembali.

### Nomor 5
### codingan sebelum di perbaiki
#include <iostream>

using namespace std;

int tarifMotor = 2000; // Variabel global

int hitungBiaya(int lama) {
    return lama * tarifMotor;
}

int main() {
    int lama = 3;

    cout << "Total biaya: Rp"
         << hitungBiaya(lama) << endl;

    return 0;
}

### codingan sesudah di perbaiki
#include <iostream>

using namespace std;

int hitungBiaya(int lama, int tarifMotor) {
    return lama * tarifMotor;
}

int main() {
    int lama = 3;
    int tarifMotor = 2000;

    int total = hitungBiaya(lama, tarifMotor);

    cout << "Total biaya: Rp" << total << endl;

    return 0;
}

### Penjelasan nomor 5

Variabel global tarifMotor dipindahkan ke dalam fungsi main() dan dikirimkan ke fungsi hitungBiaya() melalui parameter. Dengan cara ini, fungsi tidak lagi bergantung pada variabel global sehingga program lebih teratur dan mudah dipahami.