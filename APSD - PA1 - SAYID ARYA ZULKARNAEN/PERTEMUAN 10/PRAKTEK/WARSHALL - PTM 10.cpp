#include <iostream> // Untuk input/output stream (cin, cout)
#include <string>   // Mungkin tidak terlalu diperlukan di sini, tapi biasa disertakan
#include <cstring>  // Untuk memset

using namespace std; // Menggunakan namespace standar agar tidak perlu menulis std::

const int N = 100; // Mendefinisikan ukuran maksimum node (100)
int dist[N][N];    // Matriks untuk menyimpan jarak antar node

// Fungsi implementasi algoritma Floyd-Warshall
void floydWarshall(int n) {
    // Loop utama untuk algoritma Floyd-Warshall
    // k adalah node perantara
    for (int k = 0; k < n; k++) {
        // i adalah node sumber
        for (int i = 0; i < n; i++) {
            // j adalah node tujuan
            for (int j = 0; j < n; j++) {
                // Jika jalur melalui k lebih pendek dari jalur langsung
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() {
    int n; // Jumlah node pada graf

    cout << "Masukkan jumlah node pada graph: ";
    cin >> n; // Membaca jumlah node

    // Inisialisasi matriks jarak
    // Menggunakan 0x3f (nilai heksadesimal) sebagai representasi tak terhingga
    // Ini adalah nilai besar yang tidak akan tercapai oleh penjumlahan jarak normal,
    // dan juga mencegah overflow jika ada penambahan
    memset(dist, 0x3f, sizeof(dist));

    // Menginisialisasi jarak dari node ke dirinya sendiri menjadi 0
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }

    cout << "Masukkan jarak antar node: " << endl;
    // Membaca jarak antar node dari input pengguna
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int w; // Berat (jarak) edge
            cin >> w; // Membaca berat edge
            dist[i][j] = w; // Menyimpan berat ke matriks jarak
        }
    }

    floydWarshall(n); // Memanggil fungsi Floyd-Warshall untuk menghitung jalur terpendek

    cout << "Hasil jalur terpendek antar node: " << endl;
    // Menampilkan matriks jarak hasil perhitungan Floyd-Warshall
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Jika jaraknya masih sangat besar (tak terhingga), bisa ditampilkan sebagai "INF" atau "-1"
            // Di sini, asumsinya nilai yang sangat besar berarti tidak ada jalur
            cout << dist[i][j] << " ";
        }
        cout << endl; // Baris baru setelah setiap baris matriks
    }

    return 0; // Mengakhiri program dengan sukses
}
