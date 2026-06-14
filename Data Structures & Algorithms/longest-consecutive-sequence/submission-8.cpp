class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
        return 0;
        int currstreak=1,longest=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            continue;
            else if(nums[i]==nums[i-1]+1)
            {
                currstreak++;
            }
            else
            {
                longest=max(longest,currstreak);
                currstreak=1;
            }
        }
        return max(longest,currstreak);
        
    }
};
