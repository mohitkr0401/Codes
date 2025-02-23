// to remove the all occurrence of a given substring from a string
// Given a string s and a string part, remove all occurrences of part in s.
// Return s after removing part.


// A substring is a contiguous sequence of characters in a string.

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
    public:
        string removeOccurrences(string s, string part) {
            while(s.length()>0 && s.find(part)<s.length()){
                s.erase(s.find(part),part.length());
            }
            return s;
        }
    };