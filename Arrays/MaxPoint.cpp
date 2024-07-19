// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n = cardPoints.size();
        
//         int total_sum = accumulate(cardPoints.begin(), cardPoints.end(), 0);

//         if (k == n) {
//             return total_sum;
//         }
//         int subarray_length = n - k;
        
//         int current_subarray_sum = accumulate(cardPoints.begin(), cardPoints.begin() + subarray_length, 0);
//         int min_subarray_sum = current_subarray_sum;
        
//         for (int i = subarray_length; i < n; i++) {
//             current_subarray_sum += cardPoints[i] - cardPoints[i - subarray_length];
//             min_subarray_sum = min(min_subarray_sum, current_subarray_sum);
//         }
        
//         return total_sum - min_subarray_sum;
//     }
// };