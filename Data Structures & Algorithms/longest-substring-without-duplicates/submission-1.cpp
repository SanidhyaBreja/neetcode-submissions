class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;
        int left = 0, right = 0, maxLen = 0;

        while (right < s.length()) {
            if (us.find(s[right]) == us.end()) {
                us.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
                right++;
            } else {
                us.erase(s[left]);
                left++;
            }
        }

        return maxLen;
    }
};
