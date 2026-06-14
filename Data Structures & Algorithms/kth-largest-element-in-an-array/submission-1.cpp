class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        for(int i=0;i<=n-1;i++)
        {
            if(k==1)
            ans=nums[n-1];
            else
            ans=nums[(n-1)-(k-1)];

        }
        return ans;
        
    }
};
