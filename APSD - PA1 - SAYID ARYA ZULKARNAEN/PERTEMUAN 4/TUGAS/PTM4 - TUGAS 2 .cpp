#include <iostream> 
using namespace std; 

class contoh { // Deklarasi class bernama 'contoh'
private:
    int nilai; // Variabel privat untuk menyimpan nilai

public:
    // Constructor: otomatis dipanggil saat objek dibuat
    contoh(int n) {
        nilai = n; // Menginisialisasi nilai dengan nilai yang diberikan saat objek dibuat
    }

    // Method untuk mengembalikan nilai
    int getNum() {
        return nilai; // Mengembalikan nilai dari atribut 'nilai'
    }
};

int main() {
    contoh obj(10); // Membuat objek 'obj' dari class 'contoh' dan mengisi nilai 10 lewat constructor

    // Menampilkan nilai yang sudah diinput ke layar
    cout << "nilai yang diinput: " << obj.getNum() << endl;

    return 0; // Mengembalikan nilai 0 menandakan program selesai dengan sukses
}

// Program tersebut adalah penerapan dari constructor, bukan destructor 
// Karena : Fungsi khusus yang otomatis dipanggil saat objek dibuat, Nama fungsi sama dengan nama kelas, dan Tidak memiliki tipe data pengembalian (return type)
