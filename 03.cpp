// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.

 

// Example 1:

// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".
// Example 2:

// Input: s = "axxxxyyyyb", part = "xy"
// Output: "ab"
// Explanation: The following operations are done:
// - s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
// - s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
// - s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
// - s = "axyb", remove "xy" starting at index 1 so s = "ab".
// Now s has no occurrences of "xy".

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//       size_t pos = s.find(part);
//     while (pos != string::npos) {
//         s.erase(pos, part.length());
//         pos = s.find(part); 
//     }
//     return s;  
//     }
// };

// Here, size_t pos is used to store the index (position) where the substring part is found inside s
// What is size_t?
// size_t is an unsigned integer type used to represent sizes and indices in C++.
// It is the return type of functions like std::string::find() because index positions cannot be negative.
// size_t ensures that the value is always non-negative.
// It is commonly used for sizes of arrays, strings, and memory-related operations.
// size_t is defined in the C++ Standard Library inside the <cstddef> and <stddef.h> headers.