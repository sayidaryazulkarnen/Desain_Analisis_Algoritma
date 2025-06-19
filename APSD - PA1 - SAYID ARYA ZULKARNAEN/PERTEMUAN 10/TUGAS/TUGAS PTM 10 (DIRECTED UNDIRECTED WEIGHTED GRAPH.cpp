//DIRECTED GRAPH
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class DirectedGraph {
//public:
//    int V;
//    vector< vector<int> > adj; // ? spasi antar > >
//
//    DirectedGraph(int vertices) {
//        V = vertices;
//        adj.resize(V);
//    }
//
//    void addEdge(int u, int v) {
//        adj[u].push_back(v);
//    }
//
//    void display() {
//        for (int i = 0; i < V; i++) {
//            cout << "Node " << i << " --> ";
//            for (int j = 0; j < adj[i].size(); j++) {
//                cout << adj[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    DirectedGraph g(4);
//    g.addEdge(0, 1);
//    g.addEdge(0, 2);
//    g.addEdge(1, 2);
//    g.addEdge(2, 3);
//
//    cout << "Directed Graph:\n";
//    g.display();
//
//    return 0;
//}


// //UNDIRECTED GRAPH
#include <iostream>
//#include <vector>
//using namespace std;
//
//class UndirectedGraph {
//public:
//    int V;
//    vector< vector<int> > adj;
//
//    UndirectedGraph(int vertices) {
//        V = vertices;
//        adj.resize(V);
//    }
//
//    void addEdge(int u, int v) {
//        adj[u].push_back(v);
//        adj[v].push_back(u); // arah balik
//    }
//
//    void display() {
//        for (int i = 0; i < V; i++) {
//            cout << "Node " << i << " --> ";
//            for (int j = 0; j < adj[i].size(); j++) {
//                cout << adj[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    UndirectedGraph g(4);
//    g.addEdge(0, 1);
//    g.addEdge(0, 2);
//    g.addEdge(1, 3);
//
//    cout << "Undirected Graph:\n";
//    g.display();
//
//    return 0;
//}

//WEIGHTED GRAPH
#include <iostream>
#include <vector>
using namespace std;

class WeightedGraph {
public:
    int V;
    vector< vector< pair<int, int> > > adj; // pasangan: (tujuan, bobot)

    WeightedGraph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v, int weight) {
        adj[u].push_back(make_pair(v, weight));
        // jika undirected, tambahkan ini: adj[v].push_back(make_pair(u, weight));
    }

    void display() {
        for (int i = 0; i < V; i++) {
            cout << "Node " << i << " --> ";
            for (int j = 0; j < adj[i].size(); j++) {
                cout << "(" << adj[i][j].first << ", w=" << adj[i][j].second << ") ";
            }
            cout << endl;
        }
    }
};

int main() {
    WeightedGraph g(4);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 4);
    g.addEdge(2, 3, 2);

    cout << "Weighted Graph:\n";
    g.display();

    return 0;
}

