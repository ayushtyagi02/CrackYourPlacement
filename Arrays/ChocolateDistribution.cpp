// class Solution {
//     public int maxProfit(int[] prices) {
//         int buyprice=Integer.MAX_VALUE;
//         int sellprice=0;
//         int maxProfit=0;
//         buyprice=prices[0];
//         for(int i=1;i<prices.length;i++){
//             sellprice=prices[i];
//             if(buyprice<sellprice){
//                  int Profit=sellprice-buyprice;
//                 maxProfit=Math.max(Profit,maxProfit);
//             }
//             else{
//                 buyprice=sellprice;
//             }
//         }
//         return maxProfit;
//     }
// }