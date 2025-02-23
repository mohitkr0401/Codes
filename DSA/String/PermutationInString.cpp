// find the permutation of a string in another string
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public:
        bool isFreqSame(int freq1[], int freq2[]) { // check if the frequency of characters in both strings is same
            for (int i = 0; i < 26; i++) {
                if (freq1[i] != freq2[i]) {
                    return false;
                }
            }
            return true;
        }
        bool checkInclusion(string s1, string s2) {
            int freq[26] = {0}; // store the frequency of characters in s1  // 26 characters in the alphabet
            for (int i = 0; i < s1.length(); i++) {
                freq[s1[i] - 'a']++; // store the frequency of characters in s1
            }
    
            int windSize = s1.length();
            for (int i = 0; i < s2.length(); i++) {
                int windIdx = 0, idx = i;
                int windFreq[26] = {0};
                while (windIdx < windSize && idx < s2.length()) {
                    windFreq[s2[idx] - 'a']++;
                    windIdx++;
                    idx++;
                }
                if (isFreqSame(freq, windFreq)) {
                    return true;
                }
            }
            return false;
        }
    };
