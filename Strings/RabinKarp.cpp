// #include <iostream>
// #include <string>
// #include <vector>

// #define d 256  // Number of characters in the input alphabet

// // Rabin-Karp algorithm for pattern searching
// void rabinKarpSearch(const string& pattern, const std::string& text, int q) {
//     int M = pattern.size();
//     int N = text.size();
//     int i, j;
//     int p = 0; // Hash value for pattern
//     int t = 0; // Hash value for text
//     int h = 1;

//     // The value of h would be "pow(d, M-1) % q"
//     for (i = 0; i < M - 1; i++) {
//         h = (h * d) % q;
//     }

//     // Calculate the hash value of the pattern and first window of the text
//     for (i = 0; i < M; i++) {
//         p = (d * p + pattern[i]) % q;
//         t = (d * t + text[i]) % q;
//     }

//     // Slide the pattern over text one by one
//     for (i = 0; i <= N - M; i++) {
//         // Check the hash values of the current window of text and pattern
//         if (p == t) {
//             // Check for characters one by one
//             for (j = 0; j < M; j++) {
//                 if (text[i + j] != pattern[j]) {
//                     break;
//                 }
//             }

//             // If p == t and pattern[0...M-1] = text[i, i+1, ...i+M-1]
//             if (j == M) {
//                 std::cout << "Pattern found at index " << i << std::endl;
//             }
//         }

//         // Calculate hash value for the next window of text
//         if (i < N - M) {
//             t = (d * (t - text[i] * h) + text[i + M]) % q;

//             // We might get a negative value of t, converting it to positive
//             if (t < 0) {
//                 t = (t + q);
//             }
//         }
//     }
// }

// int main() {
//     string text = "GEEKS FOR GEEKS";
//     string pattern = "GEEK";
//     int q = 101; // A prime number

//     rabinKarpSearch(pattern, text, q);

//     return 0;
// }
