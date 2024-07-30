// class Solution {
// public:
//     string addBinary(string a, string b) {
//         int i = a.size() - 1;
//     int j = b.size() - 1;
//     int carry = 0;
//     string result = "";

//     // Loop through both strings from the end to the beginning
//     while (i >= 0 || j >= 0 || carry) {
//         int sum = carry;

//         if (i >= 0) {
//             sum += a[i] - '0';  // Convert char to int
//             i--;
//         }
//         if (j >= 0) {
//             sum += b[j] - '0';  // Convert char to int
//             j--;
//         }

//         carry = sum / 2;      // Calculate carry
//         result += (sum % 2) + '0';  // Append the result bit to the result string
//     }

//     reverse(result.begin(), result.end());  // Reverse the result string
//     return result;
//     }
// };