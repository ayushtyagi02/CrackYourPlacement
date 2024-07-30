// class Solution {
// public:
//     string convertToTitle(int columnNumber) {
//         string result = "";
//         while (columnNumber > 0) {
//             columnNumber--; // Decrement columnNumber to handle 1-based index
//             int remainder = columnNumber % 26;
//             result += (remainder + 'A'); // Convert to corresponding character
//             columnNumber /= 26;
//         }
//         reverse(result.begin(), result.end()); // Reverse the result string
//         return result;
//     }
// };