// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
//  int m=matrix.size();
//     int n=matrix[0].size();

//     vector<int> a;
//     int Sc=0;
//     int Ec=n-1;
//     int Er=m-1;
//     int Sr=0;
//     int total_elements=m*n;
//     int count=0;
//     while(count<total_elements){
//         for(int i=Sc; i<=Ec && count<total_elements; i++){
//             a.push_back(matrix[Sr][i]);
//             count++;
//     }
//     Sr++;
//         for(int i=Sr; i<=Er && count<total_elements; i++){
//             a.push_back(matrix[i][Ec]);
//             count++;

//     }
//     Ec--;
//         for(int i=Ec; i>=Sc && count<total_elements; i--){
//             a.push_back(matrix[Er][i]);
//             count++;
//     }
//     Er--;

//         for(int i=Er; i>=Sr && count<total_elements; i--){
//             a.push_back(matrix[i][Sc]);
//             count++;
//     }
//     Sc++;
// }
// return a;
//     }
// };