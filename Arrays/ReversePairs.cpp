// #include <vector>

// class Solution {
// public:
//     int reversePairs(std::vector<int>& nums) {
//         return mergeSortAndCount(nums, 0, nums.size() - 1);
//     }
    
// private:
//     int mergeSortAndCount(std::vector<int>& nums, int start, int end) {
//         if (start >= end) {
//             return 0;
//         }
        
//         int mid = start + (end - start) / 2;
//         int count = mergeSortAndCount(nums, start, mid) + mergeSortAndCount(nums, mid + 1, end);
//         // int count=0;
//         int j = mid + 1;
//         for (int i = start; i <= mid; ++i) {
//             while (j <= end && nums[i] > 2LL * nums[j]) {
//                 j++;
//             }
//             count += j - (mid + 1);
//         }
        
//         merge(nums, start, mid, end);
        
//         return count;
//     }
    
//     void merge(std::vector<int>& nums, int start, int mid, int end) {
//         std::vector<int> temp;
//         int i = start, j = mid + 1;
        
//         while (i <= mid && j <= end) {
//             if (nums[i] <= nums[j]) {
//                 temp.push_back(nums[i++]);
//             } else {
//                 temp.push_back(nums[j++]);
//             }
//         }
        
//         while (i <= mid) {
//             temp.push_back(nums[i++]);
//         }
        
//         while (j <= end) {
//             temp.push_back(nums[j++]);
//         }
        
//         for (int i = start; i <= end; ++i) {
//             nums[i] = temp[i - start];
//         }
//     }
// };
