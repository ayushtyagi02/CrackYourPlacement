// class Solution {
// public:
//     int countLiveNeighbors(vector<vector<int>>& board, int i, int j, int m, int n) {
//     int liveNeighbors = 0;
//     for (int x = max(0, i-1); x <= min(m-1, i+1); ++x) {
//         for (int y = max(0, j-1); y <= min(n-1, j+1); ++y) {
//             if (x == i && y == j) continue;
//             if (board[x][y] == 1 || board[x][y] == -1) liveNeighbors++;
//         }
//     }
//     return liveNeighbors;
// }

// // Function to update the board to the next state
// void gameOfLife(vector<vector<int>>& board) {
//     int m = board.size();
//     int n = board[0].size();
    
//     // First pass to mark the board with transitional states
//     for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             int liveNeighbors = countLiveNeighbors(board, i, j, m, n);
            
//             if (board[i][j] == 1) {
//                 // Rule 1 or 3
//                 if (liveNeighbors < 2 || liveNeighbors > 3) {
//                     board[i][j] = -1; // Mark live cell to die
//                 }
//             } else {
//                 // Rule 4
//                 if (liveNeighbors == 3) {
//                     board[i][j] = 2; // Mark dead cell to come to life
//                 }
//             }
//         }
//     }
    
//     // Second pass to finalize the board state
//     for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             if (board[i][j] == -1) {
//                 board[i][j] = 0; // Finalize live cell to dead
//             } else if (board[i][j] == 2) {
//                 board[i][j] = 1; // Finalize dead cell to live
//             }
//         }
//     }
// }
// };