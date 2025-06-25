#include <iostream>
using namespace std;

const int SIZE = 10;

int hash1(int key) {
    return key % SIZE;
}

int hash2(int key) {
    return 7 - (key % 7);
}

void insert(int table[], int key) {
    int index = hash1(key);
    int step = hash2(key);

    int i = 0;
    while (table[(index + i * step) % SIZE] != -1 && i < SIZE) {
        i++;
    }

    if (i < SIZE)
        table[(index + i * step) % SIZE] = key;
    else
        cout << "Tabel penuh, tidak bisa memasukkan " << key << endl;
}

void tampilkan(int table[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << i << " : ";
        if (table[i] != -1)
            cout << table[i];
        else
            cout << "kosong";
        cout << endl;
    }
}

int main() {
    int table[SIZE];
    for (int i = 0; i < SIZE; i++)
        table[i] = -1;

    int data[] = {28, 12, 50, 40, 30};
    for (int i = 0; i < 5; i++)
        insert(table, data[i]);

    cout << "Isi Hash Table:\n";
    tampilkan(table);

    return 0;
}
