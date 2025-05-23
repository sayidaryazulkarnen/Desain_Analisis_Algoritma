#include <iostream>
using namespace std;

const int MAX = 10;

class Queue {
private:
    int front, rear;
    string data[MAX];

public:
    Queue() {
        front = rear = -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(string name) {
        if (isFull()) {
            cout << "Antrian penuh. " << name << " tidak dapat masuk.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        data[rear] = name;
        cout << name << " masuk ke dalam antrian.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak ada yang bisa dilayani.\n";
            return;
        }
        cout << data[front] << " telah dilayani dan keluar dari antrian.\n";
        front++;
    }

    void display() {
        if (isEmpty()) {
            cout << "Antrian kosong.\n";
            return;
        }
        cout << "Daftar antrian:\n";
        for (int i = front; i <= rear; i++) {
            cout << i - front + 1 << ". " << data[i] << endl;
        }
    }
};

int main() {
    Queue loket;
    int pilihan;
    string nama;

    do {
        cout << "\n===== MENU LOKET TIKET =====\n";
        cout << "1. Tambah Antrian (enqueue)\n";
        cout << "2. Layani Antrian (dequeue)\n";
        cout << "3. Tampilkan Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama pelanggan: ";
                cin >> nama;
                loket.enqueue(nama);
                break;
            case 2:
                loket.dequeue();
                break;
            case 3:
                loket.display();
                break;
            case 4:
                cout << "Terima kasih. Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}

