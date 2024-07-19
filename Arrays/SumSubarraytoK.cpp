// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k){
//         unordered_map<int, int> cumulativeSumCount;
//         cumulativeSumCount[0] = 1; 
        
//         int cumulativeSum = 0;
//         int count = 0;
        
//         for (int num : nums) {
//             cumulativeSum += num;
            
//             if (cumulativeSumCount.find(cumulativeSum - k) != cumulativeSumCount.end()) {
//                 count += cumulativeSumCount[cumulativeSum - k];
//             }
            
//             cumulativeSumCount[cumulativeSum]++;
//         }
        
//         return count;
//     }
// };