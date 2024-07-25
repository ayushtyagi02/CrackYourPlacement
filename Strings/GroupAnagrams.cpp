// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//     unordered_map<string, vector<string>> anagramsMap;
    
//     for (string s : strs) {
//         string sortedStr = s;
//         sort(sortedStr.begin(), sortedStr.end());
//         anagramsMap[sortedStr].push_back(s);
//     }
    
//     vector<vector<string>> result;
//     for (auto entry : anagramsMap) {
//         result.push_back(entry.second);
//     }
    
//     return result;
// }
// };