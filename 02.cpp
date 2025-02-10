
// ou are given a string s.

// Your task is to remove all digits by doing this operation repeatedly:

// Delete the first digit and the closest non-digit character to its left.
// Return the resulting string after removing all digits.

 

// Example 1:

// Input: s = "abc"

// Output: "abc"

// Explanation:

// There is no digit in the string.

// Example 2:

// Input: s = "cb34"

// Output: ""

// Explanation:

// First, we apply the operation on s[2], and s becomes "c4".

// Then we apply the operation on s[1], and s becomes "".




// class Solution {
// public:
//     string clearDigits(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             if(!isdigit(s[i])){
//                 st.push(s[i]);
//             }
//             else{
//                 st.pop();
//             }
//         }
//         string ans="";
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
        
//     }
// };