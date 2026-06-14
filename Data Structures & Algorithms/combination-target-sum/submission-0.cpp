class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>cur;
        backtrack(nums,cur,target,0);
        return res;
    }
    void backtrack(vector<int>&nums,vector<int>&cur,int target,int i)
    {
        if(target==0)
        {
        res.push_back(cur);
        return;
        }
        if(i>=nums.size()|| target<0)
        {
            return;
        }

        cur.push_back(nums[i]);
        backtrack(nums,cur,target-nums[i],i);
        cur.pop_back();
        backtrack(nums,cur,target,i+1);
    }

};
