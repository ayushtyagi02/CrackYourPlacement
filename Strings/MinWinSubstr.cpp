// class Solution {
// public:
//     string minWindow(string s, string t) {
//          if (s.empty() || t.empty()) {
//         return "";
//     }

//     unordered_map<char, int> tFreq, windowFreq;
//     for (char c : t) {
//         tFreq[c]++;
//     }

//     int left = 0, right = 0, required = tFreq.size(), formed = 0;
//     int minLen = INT_MAX, start = 0;
    
//     while (right < s.size()) {
//         char c = s[right];
//         windowFreq[c]++;
        
//         if (tFreq.find(c) != tFreq.end() && windowFreq[c] == tFreq[c]) {
//             formed++;
//         }

//         while (left <= right && formed == required) {
//             c = s[left];
//             if (right - left + 1 < minLen) {
//                 minLen = right - left + 1;
//                 start = left;
//             }

//             windowFreq[c]--;
//             if (tFreq.find(c) != tFreq.end() && windowFreq[c] < tFreq[c]) {
//                 formed--;
//             }
//             left++;
//         }

//         right++;
//     }

//     return minLen == INT_MAX ? "" : s.substr(start, minLen);
//     }
// };