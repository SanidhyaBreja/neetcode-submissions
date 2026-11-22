class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indices;
        for(int i=0;i<=nums.size()-1;i++)
        {
            indices[nums[i]]=i;
        }
        for(int i=0;i<=nums.size()-1;i++)
        {
            int diff=target-nums[i];
            if(indices.count(diff) && indices[diff]!=i)
            {
                return{i,indices[diff]};
            }
        }
        return {};
    }
};
