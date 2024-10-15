#include <iostream>
#include <vector>

using namespace std;

void okk(int x, int y, vector<vector<int>>& grid, vector<vector<bool>>& visited, int n, int m) {
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] || grid[x][y] == 1)
        return;
    
    visited[x][y] = true;

    okk(x - 1, y, grid, visited, n, m);  // Up
    okk(x + 1, y, grid, visited, n, m);  // Down
    okk(x, y - 1, grid, visited, n, m);  // Left
    okk(x, y + 1, grid, visited, n, m);  // Right
}

int ans(vector<vector<int>>& grid, int n, int m) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int temp = 0;
    
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < m; ++y) {
            if (grid[x][y] == 0 && !visited[x][y]) {
                okk(x, y, grid, visited, n, m);
                temp++;
            }
        }
    }
    
    return temp;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m));
    
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < m; ++y) {
            cin >> grid[x][y];
        }
    }
    
    cout << ans(grid, n, m) << endl;
}
