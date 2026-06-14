class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;   
        int result = 0;

        for (int x : nums)
            result += x;

        return sum - result;
    }
};