// vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
//            if (n == 0) return {};

//     vector<long long int> left(n, 1);
//     vector<long long int> right(n, 1);
//     vector<long long int> result(n);

//     // Calculate left product array
//     for (int i = 1; i < n; ++i) {
//         left[i] = left[i - 1] * nums[i - 1];
//     }

//     // Calculate right product array
//     for (int i = n - 2; i >= 0; --i) {
//         right[i] = right[i + 1] * nums[i + 1];
//     }

//     // Calculate result array by multiplying left and right product arrays
//     for (int i = 0; i < n; ++i) {
//         result[i] = left[i] * right[i];
//     }

//     return result;
//         //code here        
//     }