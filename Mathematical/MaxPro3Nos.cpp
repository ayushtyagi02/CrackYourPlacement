// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         if(nums.size()<3){
//             if(nums.size()==2){
//                 return nums[0]*nums[1];
//             }
//             else if(nums.size()==0){
//                 return 0;
//             }
//             return nums[0];
//         }
        
//         sort(nums.begin(),nums.end());
//         int promax=nums[nums.size()-3]*nums[nums.size()-2]*nums[nums.size()-1];
//         int promin=nums[0]*nums[1]*nums[nums.size()-1];

//         promax=max(promax,promin);
//         return promax;

//    }
// };