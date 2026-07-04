class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       
        vector<int>result;
        int i=0;
        int j=numbers.size()-1;
        while(i<j)
        {
            int sum=numbers[i]+numbers[j];
            if(sum<target)
            {
                i++;
            }
            else if(sum==target)
            {
                return {i+1,j+1};
            }
            else
            {
                
                j--;
            }
            
        }

        return {};
        
    }
};
