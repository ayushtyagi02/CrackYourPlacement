// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_map<int,long int> occ;
//         for(auto i:nums){
//             occ[i]++;
//         }
//         for(auto i:occ){
//             if(i.second>1){
//                 long int n=i.first;
//                 return n;
//             }
//         }
//         return 0;
//     }
// };