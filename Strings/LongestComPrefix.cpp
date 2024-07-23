// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {

//         string ans="";
//         sort(strs.begin(),strs.end());
//         string str1=strs[0];
//         string str2=strs[strs.size()-1];
//         int size=min(str1.length(),str2.length());
//         for(int i=0;i<size;i++){
//             if(str1[i]!=str2[i]){
//                 return ans;
//             }
//             ans+=str1[i];
//         }
//         return ans;
//         }
// };