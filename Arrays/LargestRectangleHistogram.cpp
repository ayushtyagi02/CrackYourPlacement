// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//     int n = heights.size();
//     stack<int> st;
//     int max_area = 0;
//     int i = 0;

//     while (i < n) {
//         if (st.empty() || heights[st.top()] <= heights[i]) {
//             st.push(i++);
//         } else {
//             int tp = st.top();
//             st.pop();
//             int height = heights[tp];
//             int width = st.empty() ? i : i - st.top() - 1;
//             max_area = max(max_area, height * width);
//         }
//     }

//     while (!st.empty()) {
//         int tp = st.top();
//         st.pop();
//         int height = heights[tp];
//         int width = st.empty() ? i : i - st.top() - 1;
//         max_area = max(max_area, height * width);
//     }

//     return max_area;
//     }
// };