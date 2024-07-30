// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//     int n = nums.size();
    
//     // Find the median
//     int median = nums[n / 2];
    
//     // Calculate the sum of absolute differences from the median
//     int moves = 0;
//     for (int num : nums) {
//         moves += abs(num - median);
//     }
    
//     return moves;
//     }
// };