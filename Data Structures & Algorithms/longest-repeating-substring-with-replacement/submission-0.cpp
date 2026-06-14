class Solution {
public:
    int characterReplacement(string s, int k) {
        int max_len = 0;
        int left = 0;
        int max_count = 0;
        vector<int> freq(26, 0);  // Frequency of letters

        for (int right = 0; right < s.size(); ++right) {
            freq[s[right] - 'A']++;
            max_count = max(max_count, freq[s[right] - 'A']);

            // If more than k characters need to be replaced, shrink window
            while ((right - left + 1) - max_count > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};
