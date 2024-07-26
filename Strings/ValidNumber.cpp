// class Solution {
// public:
//     bool isNumber(string s) {
//          int i = 0;
//     int n = s.size();
    
//     // Skip leading whitespace
//     while (i < n && isspace(s[i])) i++;
    
//     // Optional sign
//     if (i < n && (s[i] == '+' || s[i] == '-')) i++;
    
//     bool isNumeric = false;
    
//     // Integer part
//     while (i < n && isdigit(s[i])) {
//         i++;
//         isNumeric = true;
//     }
    
//     // Decimal part
//     if (i < n && s[i] == '.') {
//         i++;
//         while (i < n && isdigit(s[i])) {
//             i++;
//             isNumeric = true;
//         }
//     }
    
//     // Exponent part
//     if (isNumeric && i < n && (s[i] == 'e' || s[i] == 'E')) {
//         i++;
//         isNumeric = false;
//         if (i < n && (s[i] == '+' || s[i] == '-')) i++;
//         while (i < n && isdigit(s[i])) {
//             i++;
//             isNumeric = true;
//         }
//     }
    
//     // Skip trailing whitespace
//     while (i < n && isspace(s[i])) i++;
    
//     return isNumeric && i == n;
//     }
// };