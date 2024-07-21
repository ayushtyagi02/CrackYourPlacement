// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int c = 0;
//         int e = nums[0] ;
//         for (int i = 0 ; i < nums.size() ; i++) {
//             if (!c)
//                 e = nums[i];
//             if (nums[i] == e)
//                 c++;
//             else {
//                 c--;
//             }
//         }
//         return e;
        
//     }
// };