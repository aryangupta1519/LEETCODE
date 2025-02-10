// You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

// Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.
// Example 1:
// Input: s1 = "bank", s2 = "kanb"
// Output: true
// Explanation: For example, swap the first character with the last character of s2 to make "bank".
// Example 2:
// Input: s1 = "attack", s2 = "defend"
// Output: false
// Explanation: It is impossible to make them equal with one string swap.
// Example 3:
// Input: s1 = "kelb", s2 = "kelb"
// Output: true
// Explanation: The two strings are already equal, so no string swap operation is required.

//bas areAlmostEqual function ko dhyan do main logic wahi likha hai 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) {
            return true;
        }
        vector<int> a;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                a.push_back(i);
            }
        }
        return (a.size() == 2 && s1[a[0]] == s2[a[1]] && s1[a[1]] == s2[a[0]]);
    }
};

int main() {
    Solution solution;
    string s1 = "kelb";
    string s2 = "kelb";
    bool result = solution.areAlmostEqual(s1, s2);
    cout << (result ? "true" : "false") << endl; // Output: true

    s1 = "bank";
    s2 = "kanb";
    result = solution.areAlmostEqual(s1, s2);
    cout << (result ? "true" : "false") << endl; // Output: true

    s1 = "attack";
    s2 = "defend";
    result = solution.areAlmostEqual(s1, s2);
    cout << (result ? "true" : "false") << endl; // Output: false

    return 0;
}