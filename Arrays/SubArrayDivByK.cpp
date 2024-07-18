// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         unordered_map<int, int> mod_count = {{0, 1}};
//         int prefix_sum = 0;
//         int count = 0;

//         for (int num : nums) {
//             prefix_sum += num;
//             int mod = prefix_sum % k;
//             if (mod < 0) {
//                 mod += k; 
//             }

//             if (mod_count.find(mod) != mod_count.end()) {
//                 count += mod_count[mod];
//                 mod_count[mod]++;
//             } 
//             else {
//                 mod_count[mod] = 1;
//             }
//         }

//         return count;
//     }
// };