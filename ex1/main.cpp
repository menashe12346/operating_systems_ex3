#include <iostream>
#include <vector>
#include <utility>
#include "kosaraju_linked_list.hpp"

using namespace std;

int main() {
    cout << "Reading number of vertices and edges..." << endl;
    int n, m;
    cin >> n >> m;
    cout << "Number of vertices: " << n << ", Number of edges: " << m << endl;
    vector<pair<int, int>> edges(m);

    cout << "Reading edges..." << endl;
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].first >> edges[i].second;
        cout << "Edge " << i << ": " << edges[i].first << " -> " << edges[i].second << endl;
    }

    KosarajuLinkedList kosaraju(n, edges);
    kosaraju.findSCCs();
    kosaraju.printSCCs();
    cout << "Done!" << endl;

    return 0;
}
