#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n+1);
        size.assign(n+1, 1);
        for (int i = 0; i <= n; i++) parent[i] = i;
    }

    // find(x)
    // Objetivo: achar a raiz da árvore de x.
    // Implementação simples (recursiva):
    // int find(int x) {
    // if (parent[x] == x) return x;
    // return find(parent[x]);
    // }


    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};



int main() {
    vector<vector<int>> grafo;



    
    
    
    
    
    return 0;
}