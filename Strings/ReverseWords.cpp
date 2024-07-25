// class Solution {
// public:
//     string reverseWords(string s) {
//         stack<string> ans;
//         s+=" ";
//         string str="";
//         for(char c:s){
//             if(c!=' '){
//                 str+=c;
//             }
//             else{
//                 if(str.length()>0)
//                 {ans.push(str);}
//                 str="";
//             }
//         }
//         string res;
//         while(!ans.empty()){
//             res+=ans.top();
//             ans.pop();
//             if(!ans.empty())
//             {res+=" ";}
//         }
//         return res;
//     }
// };