#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void swap(int arr[], int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

// Fungsi partition untuk membagi array berdasarkan pivot
int partition(int arr[], int low, int high, int pivot) {
    int i = low;
    int j = low;

    // Looping sampai akhir bagian array
    while (i <= high) {
        if (arr[i] > pivot) {
            // Jika elemen lebih besar dari pivot, lanjut ke elemen berikutnya
            i++;
        } else {
            // Jika elemen lebih kecil atau sama dengan pivot, tukar elemen dan geser batas j
            swap(arr, i, j);
            i++;
            j++;
        }
    }
    // Kembalikan indeks pivot yang sudah di-partisi
    return j - 1;
}

// Fungsi utama quick sort rekursif
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high]; // Ambil pivot dari elemen paling kanan
        int pos = partition(arr, low, high, pivot); // Dapatkan posisi pivot yang benar

        // Rekursif untuk bagian kiri dan kanan dari pivot
        quickSort(arr, low, pos - 1);
        quickSort(arr, pos + 1, high);
    }
}

int main() {
    int n;
    cout << "Tentukan panjang array : ";
    cin >> n;

    int arr[n]; // Inisialisasi array dengan panjang n
    cout << "Masukkan elemen array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Panggil fungsi quick sort
    quickSort(arr, 0, n - 1);

    // Output hasil sorting
    cout << "Berikut adalah array yang telah di sort : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }

    cout << endl;
    return 0;
}
