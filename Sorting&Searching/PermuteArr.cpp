// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// string canFormPermutation(vector<int>& a, vector<int>& b, int k) {
//     int n = a.size();
    
//     // Sort a in ascending order
//     sort(a.begin(), a.end());
    
//     // Sort b in descending order
//     sort(b.begin(), b.end(), greater<int>());
    
//     // Check if each pair a[i] + b[i] >= k
//     for (int i = 0; i < n; ++i) {
//         if (a[i] + b[i] < k) {
//             return "No";
//         }
//     }
    
//     return "Yes";
// }

// int main() {
//     vector<int> a1 = {2, 1, 3};
//     vector<int> b1 = {7, 8, 9};
//     int k1 = 10;
//     cout << "Example 1: " << canFormPermutation(a1, b1, k1) << endl;  // Output: Yes

//     vector<int> a2 = {1, 2, 2, 1};
//     vector<int> b2 = {3, 3, 3, 4};
//     int k2 = 5;
//     cout << "Example 2: " << canFormPermutation(a2, b2, k2) << endl;  // Output: No

//     return 0;
// }
