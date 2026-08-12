class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;

        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++) {

            if (seen.find(s[right]) != seen.end() &&
                seen[s[right]] >= left) {
                
                left = seen[s[right]] + 1;
            }

            seen[s[right]] = right;

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};