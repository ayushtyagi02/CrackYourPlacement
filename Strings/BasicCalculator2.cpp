// class Solution {
// public:
//    int calculate(string s) {
//     stack<int> operands;
//     stack<char> operators;
//     int n = s.length();
//     int currentNumber = 0;
//     char currentOperator = '+';

//     for (int i = 0; i < n; ++i) {
//         char ch = s[i];
//         if (isdigit(ch)) {
//             currentNumber = currentNumber * 10 + (ch - '0');
//         }
//         if (!isdigit(ch) && !isspace(ch) || i == n - 1) {
//             if (currentOperator == '+') {
//                 operands.push(currentNumber);
//             } else if (currentOperator == '-') {
//                 operands.push(-currentNumber);
//             } else if (currentOperator == '*') {
//                 int top = operands.top();
//                 operands.pop();
//                 operands.push(top * currentNumber);
//             } else if (currentOperator == '/') {
//                 int top = operands.top();
//                 operands.pop();
//                 operands.push(top / currentNumber);
//             }
//             currentOperator = ch;
//             currentNumber = 0;
//         }
//     }

//     int result = 0;
//     while (!operands.empty()) {
//         result += operands.top();
//         operands.pop();
//     }

//     return result;
// }
// };