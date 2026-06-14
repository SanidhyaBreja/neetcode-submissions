class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
        sort(nums.begin(),nums.end());
        int curr=1,longest=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
            continue;
            }
            else if(nums[i]==nums[i-1]+1)
            curr++;
            else
            {
                longest=max(curr,longest);
                curr=1;
            }

        }
        return max(curr,longest);
    }
};
