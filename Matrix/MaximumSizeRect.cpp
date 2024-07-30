// #include <iostream>
// #include <vector>
// #include <stack>
// #include <algorithm>

// using namespace std;

// int largestRectangleArea(vector<int>& heights) {
//     stack<int> s;
//     heights.push_back(0);  // Add a zero height to ensure we empty the stack at the end
//     int max_area = 0;

//     for (int i = 0; i < heights.size(); ++i) {
//         while (!s.empty() && heights[i] < heights[s.top()]) {
//             int height = heights[s.top()];
//             s.pop();
//             int width = s.empty() ? i : i - s.top() - 1;
//             max_area = max(max_area, height * width);
//         }
//         s.push(i);
//     }
//     heights.pop_back();  // Restore the heights array
//     return max_area;
// }

// int maximalRectangle(vector<vector<int>>& matrix) {
//     if (matrix.empty()) return 0;

//     int max_area = 0;
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     vector<int> heights(cols, 0);

//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             heights[j] = matrix[i][j] == 0 ? 0 : heights[j] + 1;
//         }
//         max_area = max(max_area, largestRectangleArea(heights));
//     }
//     return max_area;
// }

// int main() {
//     vector<vector<int>> matrix = {
//         {0, 1, 1, 0},
//         {1, 1, 1, 1},
//         {1, 1, 1, 1},
//         {1, 1, 0, 0}
//     };

//     cout << "Maximum size rectangle with all 1s: " << maximalRectangle(matrix) << endl;

//     return 0;
// }
