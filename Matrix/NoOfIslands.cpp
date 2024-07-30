// #include <iostream>
// #include <vector>

// using namespace std;

// void DFS(vector<vector<int>>& mat, int x, int y, vector<vector<bool>>& visited, int n, int m) {
//     static int rowNum[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//     static int colNum[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
//     visited[x][y] = true;

//     for (int k = 0; k < 8; ++k) {
//         int newX = x + rowNum[k];
//         int newY = y + colNum[k];
//         if (newX >= 0 && newX < n && newY >= 0 && newY < m && mat[newX][newY] == 1 && !visited[newX][newY]) {
//             DFS(mat, newX, newY, visited, n, m);
//         }
//     }
// }

// int countIslands(vector<vector<int>>& mat) {
//     int n = mat.size();
//     if (n == 0) return 0;
//     int m = mat[0].size();
    
//     vector<vector<bool>> visited(n, vector<bool>(m, false));
//     int count = 0;

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (mat[i][j] == 1 && !visited[i][j]) {
//                 DFS(mat, i, j, visited, n, m);
//                 ++count;
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     vector<vector<int>> mat = {
//         {1, 1, 0, 0, 0},
//         {0, 1, 0, 0, 1},
//         {1, 0, 0, 1, 1},
//         {0, 0, 0, 0, 0},
//         {1, 0, 1, 0, 0}
//     };

//     cout << "Number of islands: " << countIslands(mat) << endl;

//     return 0;
// }
