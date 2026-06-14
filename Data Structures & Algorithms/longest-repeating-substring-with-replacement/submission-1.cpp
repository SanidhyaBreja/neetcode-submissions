class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int maxcount=0;
        int l=0;
        vector<int>freq(26,0);
        for(int r=0;r<s.size();r++)
        {
            freq[s[r]-'A']++;
            maxcount=max(maxcount,freq[s[r]-'A']);
        
        while((r-l+1)-maxcount>k)
        {
            freq[s[l]-'A']--;
            l++;
        }
        maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};
