#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> grid;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    if(x < 0 || x >= n || y < 0 || y >= m || 
       visited[x][y] || grid[x][y] == 0) {
        return;
    }
    
    visited[x][y] = true;
    
    // 4 direções
    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}

int contarIlhas() {
    int count = 0;
    visited.assign(n, vector<bool>(m, false));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1 && !visited[i][j]) {
                count++;
                dfs(i, j);
            }
        }
    }
    return count;
}