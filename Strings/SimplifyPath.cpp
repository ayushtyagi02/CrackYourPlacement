// #include <iostream>
// #include <vector>
// #include <sstream>

// class Solution {
// public:
//     string simplifyPath(string path) {
//         vector<string> stack;
//         stringstream ss(path);
//         string token;
        
//         while (getline(ss, token, '/')) {
//             if (token == "." || token.empty()) {
//                 continue;
//             } else if (token == "..") {
//                 if (!stack.empty()) {
//                     stack.pop_back();
//                 }
//             } else {
//                 stack.push_back(token);
//             }
//         }
        
//         string canonicalPath = "/";
//         for (int i = 0; i < stack.size(); ++i) {
//             canonicalPath += stack[i];
//             if (i != stack.size() - 1) {
//                 canonicalPath += "/";
//             }
//         }
        
//         return canonicalPath;
//     }
// };
