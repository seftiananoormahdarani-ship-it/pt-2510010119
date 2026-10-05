include <iostream>

int main() {
    std::cout << "Halo dari C++\n";
    return 0;
}

// Catatan: jika tanda kutip di hapus maka pesan errornya seperti ini
//hello.cpp:4:18: warning: missing terminating " character
//    4 |     std::cout << "Halo dari C++\n;
//      |                  ^
//hello.cpp:4:18: error: missing terminating " character
//    4 |     std::cout << "Halo dari C++\n;
//      |                  ^~~~~~~~~~~~~~~~~
//hello.cpp: In function 'int main()':
//hello.cpp:5:5: error: expected primary-expression before 'return'
//    5 |     return 0;
//      |     ^~~~~~