// class Solution {
// public:
//     bool isValid(string s) {
//         stack <char> S;
//         for(int i=0;i<s.length();i++){
//             char ch=s[i];
//             if(ch=='(' || ch=='{' || ch=='['){
//                   S.push(ch);
//             }
//             else{
//                 if(S.empty()){
//                     return false;
//                 }
//                 char topCh=S.top();
//                 if((ch==')') && (topCh=='(')){
//                     S.pop();
//                 }
//                 else if(ch=='}' && topCh=='{'){
//                     S.pop();
//                 }
//                 else if(ch==']' && topCh=='['){
//                     S.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }
//         if(S.empty()){
//             return true;

//         }
//         else{
//             return false;
//         }
//     }
// };