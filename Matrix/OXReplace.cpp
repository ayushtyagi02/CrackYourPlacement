// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// void markBoundaryConnected(vector<vector<char>>& mat, int x, int y, vector<vector<bool>>& visited, int n, int m) {
//     static int rowNum[] = {-1, 0, 0, 1};
//     static int colNum[] = {0, -1, 1, 0};

//     queue<pair<int, int>> q;
//     q.push({x, y});
//     visited[x][y] = true;

//     while (!q.empty()) {
//         int cx = q.front().first;
//         int cy = q.front().second;
//         q.pop();

//         for (int k = 0; k < 4; ++k) {
//             int newX = cx + rowNum[k];
//             int newY = cy + colNum[k];
//             if (newX >= 0 && newX < n && newY >= 0 && newY < m && mat[newX][newY] == 'O' && !visited[newX][newY]) {
//                 visited[newX][newY] = true;
//                 q.push({newX, newY});
//             }
//         }
//     }
// }

// void replaceSurrounded(vector<vector<char>>& mat) {
//     int n = mat.size();
//     if (n == 0) return;
//     int m = mat[0].size();

//     vector<vector<bool>> visited(n, vector<bool>(m, false));

//     // Mark 'O's connected to the boundary
//     for (int i = 0; i < n; ++i) {
//         if (mat[i][0] == 'O' && !visited[i][0]) {
//             markBoundaryConnected(mat, i, 0, visited, n, m);
//         }
//         if (mat[i][m-1] == 'O' && !visited[i][m-1]) {
//             markBoundaryConnected(mat, i, m-1, visited, n, m);
//         }
//     }
//     for (int j = 0; j < m; ++j) {
//         if (mat[0][j] == 'O' && !visited[0][j]) {
//             markBoundaryConnected(mat, 0, j, visited, n, m);
//         }
//         if (mat[n-1][j] == 'O' && !visited[n-1][j]) {
//             markBoundaryConnected(mat, n-1, j, visited, n, m);
//         }
//     }

//     // Replace unvisited 'O' with 'X'
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (mat[i][j] == 'O' && !visited[i][j]) {
//                 mat[i][j] = 'X';
//             }
//         }
//     }

//     // Optionally, restore the visited 'O's back to 'O' if they were marked
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (visited[i][j]) {
//                 mat[i][j] = 'O';
//             }
//         }
//     }
// }

// int main() {
//     vector<vector<char>> mat = {
//         {'X', 'O', 'X', 'X', 'X', 'X'},
//         {'X', 'O', 'X', 'X', 'O', 'X'},
//         {'X', 'X', 'X', 'O', 'O', 'X'},
//         {'O', 'X', 'X', 'X', 'X', 'X'},
//         {'X', 'X', 'X', 'O', 'X', 'O'},
//         {'O', 'O', 'X', 'O', 'O', 'O'}
//     };

//     replaceSurrounded(mat);

//     for (const auto& row : mat) {
//         for (char c : row) {
//             cout << c << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
