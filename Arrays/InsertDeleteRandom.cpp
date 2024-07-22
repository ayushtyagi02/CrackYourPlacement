// deque<pair<int, int>> dq;
//     int max_val = INT_MIN;

//     for (const auto& point : points) {
//         int x = point[0];
//         int y = point[1];

//         // Remove points from the deque where x_j - x_i > k
//         while (!dq.empty() && x - dq.front().second > k) {
//             dq.pop_front();
//         }

//         // Calculate the maximum value of the equation
//         if (!dq.empty()) {
//             max_val = max(max_val, y + x + dq.front().first);
//         }

//         // Maintain deque with the maximum (y - x) values in decreasing order
//         while (!dq.empty() && dq.back().first <= y - x) {
//             dq.pop_back();
//         }

//         // Add the current point to the deque
//         dq.emplace_back(y - x, x);
//     }

//     return max_val;