#include <iostream>
using namespace std;

const int MAX = 4;
const int INF = 999;

int main() {
    int graph[MAX][MAX] = {
        {0, 4, 0, 3},
        {4, 0, 2, 0},
        {0, 2, 0, 5},
        {3, 0, 5, 0}
    };

    int cost[MAX], visited[MAX], path[MAX];
    int start = 0;

    // Inisialisasi
    for (int i = 0; i < MAX; i++) {
        cost[i] = INF;
        visited[i] = 0;
        path[i] = -1;
    }

    cost[start] = 0;

    for (int count = 0; count < MAX - 1; count++) {
        int min = INF, u;

        // Cari simpul dengan cost terkecil
        for (int i = 0; i < MAX; i++) {
            if (!visited[i] && cost[i] < min) {
                min = cost[i];
                u = i;
            }
        }

        visited[u] = 1;

        // Update cost tetangga
        for (int v = 0; v < MAX; v++) {
            if (!visited[v] && graph[u][v] && cost[u] + graph[u][v] < cost[v]) {
                cost[v] = cost[u] + graph[u][v];
                path[v] = u;
            }
        }
    }

    // Tampilkan hasil
    cout << "Cost List : ";
    for (int i = 0; i < MAX; i++)
        cout << cost[i] << " ";
    cout << endl;

    // Jalur terpendek dari simpul 1 ke simpul 1 (siklus)
    int target = 0;
    cout << "Jalur Terpendek : ";
    cout << target + 1;
    while (true) {
        target = path[target];
        if (target == -1) break;
        cout << " <- " << target + 1;
    }

    cout << endl;
    cout << "Minimum Cost : " << cost[0] << endl;

    return 0;
}
