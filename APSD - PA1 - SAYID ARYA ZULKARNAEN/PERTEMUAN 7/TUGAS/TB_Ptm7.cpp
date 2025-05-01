#include <iostream>
using namespace std;

int main() {
    int x[] = {0, 6, 12, 18, 24};
    int jumlah = sizeof(x) / sizeof(x[0]);
    int dataDicari;
    
    cout << "Masukkan data yang dicari: ";
    cin >> dataDicari;

    int L = 0, R = jumlah - 1;
    bool ditemukan = false;

    while (L <= R) {
        int mid = (L + R) / 2;

        if (x[mid] == dataDicari) {
            cout << "Bilangan ditemukan." << endl;
            ditemukan = true;
            break;
        } else if (x[mid] < dataDicari) {
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    if (!ditemukan) {
        cout << "Bilangan tidak ditemukan." << endl;
    }

    return 0;
}

