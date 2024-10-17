#include <iostream>

using namespace std;

int main() {
    const char* str = "Satu string."; // inisialisasi string
    const char* ptr = str; // pointer untuk mengakses string

    // mencetak huruf di indeks 0 mnggunakan pointer
    cout << "Huruf pada indeks 0: " << *ptr << endl;

    // mencari huruf 'g' dan mencetak lokasi pointer
    while (*ptr != '\0') { // looping
        if (*ptr == 'g') {
            cout << "Lokasi pointer huruf 'g' : " << (ptr - str) << endl; // Menghitung lokasi
            break; // keluar dari loop jika 'g' ditemukan
        }
        ptr++; // pindah ke karakter berikutnya
    }

    // memperbarui pointer dengan pointer + 2
    ptr += 2; 

    // mengakses huruf r dan u menggunakan pointer
    const char* rPtr = ptr + 1; // pointer untuk r
    const char* uPtr = ptr + 2; // pointer untuk u

    // mencetak huruf r dan u menggunakan pointer beserta indeksnya
    cout << "Huruf 'r' : " << *rPtr << " di indeks ke: " << (rPtr - str) << endl; // r dan indeksnya
    cout << "Huruf 'u' : " << *uPtr << " di indeks ke: " << (uPtr - str) << endl; // u dan indeksnya

    return 0; //  program selesai
}

