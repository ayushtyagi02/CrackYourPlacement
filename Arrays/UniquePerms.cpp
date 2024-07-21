// class Solution {
//   public:

//        void helper(vector<int> &nums, vector<int> &ds, set<vector<int>> &ans, vector<int> &freq){
//         //base condition
//         if (ds.size() == nums.size()){
//             ans.insert(ds);
//             return;
//         }
        
//         for (int i=0 ; i<nums.size() ; i++){
//             if (freq[i] == 0){
//                 ds.push_back(nums[i]);
//                 freq[i] = 1;
//                 helper(nums, ds, ans, freq);
//                 freq[i] = 0;
//                 ds.pop_back();
//             }
//         }
//     }

//     vector<vector<int> > uniquePerms(vector<int> &arr, int n) {
//     vector<int> freq(arr.size(), 0);
//     set<vector<int>> ans;
//     vector<int> ds;
    
//     helper(arr, ds, ans, freq);
//     vector<vector<int>> finalAns(ans.begin(), ans.end());
//     return finalAns;
// }
// };