#include <iostream>
#include <vector>

using namespace std;

// mencari indeks target dalam array terurut
int searchInsert(vector<int>& nums, int target) {
    int left = 0; // inisialisasi indeks kiri
    int right = nums.size() - 1; // inisialisasi indeks kanan
    
    // melakukan pencarian biner
    while (left <= right) {
        int mid = left + (right - left) / 2; // menentukan indeks tengah
        
        if (nums[mid] == target) {
            return mid; // jika target ditemukan mka indeks dikembalikan
        } else if (nums[mid] < target) {
            left = mid + 1; // jika nilai tengah kurang dari target akan mencari di bagian kanan
        } else {
            right = mid - 1; // jika nilai tengah lebih dari target akan mencari di bagian kiri
        }
    }
    
    return left; // mengembalikan indeks dmn target seharusnya disisipkan
}

int main() {
    int n, target; // variabel untuk jumlah elemen dan target
    cout << "Masukkan jumlah elemen : ";
    cin >> n; // membaca jumlah elemen dari user

    vector<int> nums(n); // membuat vector untuk menyimpan elemen array
    cout << "Masukkan elemen array terurut : ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // membaca elemen array dari user
    }

    cout << "Target : ";
    cin >> target; // membaca target dari user

    // menampilkan input yang dimasukkan
    cout << endl <<"Input : nums = {";
    for (int i = 0; i < n; i++) {
        cout << nums[i]; // menampilkan elemen array
        if (i < n - 1) cout << ", "; // menambahkan koma antara elemen
    }
    cout << "}, target = " << target << endl;

    // menampilkan output dari fungsi searchInsert
    cout << "Output : " << searchInsert(nums, target) << endl;

    return 0; // program selesai
}
