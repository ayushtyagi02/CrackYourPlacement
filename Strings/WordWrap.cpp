// public:
//     int solveWordWrap(vector<int>nums, int k) 
//     { 
        
//         int n = nums.size();
        
//         // Extras[i][j] will have number of extra spaces if words from i to j are put in a single line
//         vector<vector<int>> extras(n + 1, vector<int>(n + 1, 0));

//         // Line cost of the line starting with word i and ending with word j
//         vector<vector<int>> lc(n + 1, vector<int>(n + 1, 0));

//         // c[i] will have total cost of optimal arrangement of words from 1 to i
//         vector<int> c(n + 1, 0);

//         // Calculate extra spaces in a single line. The value extra[i][j] indicates extra spaces if words from word number i to word number j are placed in a single line
//         for (int i = 1; i <= n; i++) {
//             extras[i][i] = k - nums[i - 1];
//             for (int j = i + 1; j <= n; j++) {
//                 extras[i][j] = extras[i][j - 1] - nums[j - 1] - 1;
//             }
//         }

//         // Calculate line cost corresponding to the above calculated extra spaces. The value lc[i][j] indicates cost of putting words from word number i to word number j in a single line
//         for (int i = 1; i <= n; i++) {
//             for (int j = i; j <= n; j++) {
//                 if (extras[i][j] < 0) {
//                     lc[i][j] = INT_MAX;
//                 } else if (j == n && extras[i][j] >= 0) {
//                     lc[i][j] = 0;
//                 } else {
//                     lc[i][j] = extras[i][j] * extras[i][j];
//                 }
//             }
//         }

//         // Calculate minimum cost and find minimum cost arrangement
//         c[0] = 0;
//         for (int j = 1; j <= n; j++) {
//             c[j] = INT_MAX;
//             for (int i = 1; i <= j; i++) {
//                 if (c[i - 1] != INT_MAX && lc[i][j] != INT_MAX && (c[i - 1] + lc[i][j] < c[j])) {
//                     c[j] = c[i - 1] + lc[i][j];
//                 }
//             }
//         }

//         return c[n];
//         // Code here
//     } 